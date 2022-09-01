params ["_unit", "_faction", "_loadout", "_backpack"];

_source = configFile;
if ([_faction] call BSO_fnc_isLocalConfig) then {
	_source = missionConfigFile;
};

//diag_log _this;
private _rejectArray = []; // used to put items that aren't put in their original container (uniform/vest/backpack) into any space that will fit

_unit call BSO_fnc_clearLoadout;
        
////////// Add weapons and items first. Magazines placed in items lists will be put into weapons straight away
_unit addWeapon getText (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "handGun");  
_unit addWeapon getText (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "primaryWeapon");
_unit addWeapon getText (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "launcher");
{_unit addPrimaryWeaponItem _x;} foreach getArray (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "primaryWeaponItems");
{_unit addHandgunItem _x;} foreach getArray (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "handgunItems");
{_unit addSecondaryWeaponItem _x;} foreach getArray (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "launcherItems");		



////////// Radio stuff, apparently it should be done first.

_radioMod = call BSO_fnc_getRadioMod;

if (_radioMod == "TFAR") then {
    {_unit linkItem _x;} foreach getArray (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "personalRadios");
};


_unit forceAddUniform (getArray (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "uniform") call BIS_fnc_selectRandom); // Random
_unit addHeadgear (getArray (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "headgear") call BIS_fnc_selectRandom); // Random
_unit addVest (getArray (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "vest") call BIS_fnc_selectRandom); // Random


////////// Adds NVGs. This SHOULD put them on the unit and assign it, before then adding magazines over it.
_res = [_unit,getText(_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "nvg")] call CBA_fnc_addItem;
if (!_res) then {
    diag_log format ["BSO_Loadouts: Failed to add item (nvg) %1 to %2",getText(_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "nvg"),_this];
} else {
    _unit assignitem getText(_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "nvg");
};	

if (_radioMod == "ACRE") then {
    {
        _res = [_unit,_x] call CBA_fnc_addItem;
        if (!_res) then {
            diag_log format ["BSO_Loadouts: Failed to add item (personalRadio) %1 to %2",_x,_this];
        };
    } forEach getArray (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "personalRadios");
};

////////// items (Uniform Items)
{
    if !(_x isEqualType []) then {
        _res = [_unit,_x] call CBA_fnc_addItem;
        if (!_res) then {
            diag_log format ["BSO_Loadouts: Failed to add item (items) %1 to %2",_x,_this];
            _rejectArray pushBack _x; // puts failed items into the reject array
        };
    }
    else
    {
        _item = _x select 0;
        _count = _x select 1;
        
        for "_i" from 1 to _count do
        {
            _res = [_unit,_item] call CBA_fnc_addItem;
            
            if (!_res) then {
                diag_log format ["BSO_Loadouts: Failed to add magazines %1 to %2",_item,_this];
                _rejectArray pushBack _item;
            };	
        };
    };
} forEach getArray (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "items");

////////// magazines (vest items)
{

    // checks if entry is NOT an array, then will use normal method
    if !(_x isEqualType []) then {
        _res = [_unit,_x] call BSO_fnc_loadouts_addItemToVest; //AddItemXXXX is used because it will just add the item, magazine, weapon (it doesn't care)
        if (!_res) then {
            diag_log format ["BSO_Loadouts: Failed to add item (magazines) %1 to %2",_x,_this];
            // this should just try and add the Item (magazine or weapon) if it returns as fail???
            _rejectArray pushBack _x;
        };
    } 
    else  // if it is an array, will add a magazine for each in the count
    {
        _magazine = _x select 0;
        _count = _x select 1;
        
        for "_i" from 1 to _count do
        {
            _res = [_unit,_magazine] call BSO_fnc_loadouts_addItemToVest;
            
            if (!_res) then {
                diag_log format ["BSO_Loadouts: Failed to add magazines %1 to %2",_magazine,_this];
                _rejectArray pushBack _magazine;
            };	
        };
    };		
} forEach getArray (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "magazines");


////////// special items here

{_unit linkItem _x;} foreach getArray (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "assignedItems");
_unit selectWeapon (primaryWeapon _unit);
_unit addWeapon getText (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "binoculars");


////////// Backpack stuff here

if (_backpack) then {
    _unit addbackPack getText (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "backpack"); 
    /* Commenting this out because it apparently doesn't work, but DOES cause errors if not defined...
    if (_radioMod == "ACRE") then {
        _res = [_unit,getText (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "backpackRadio")] call BSO_fnc_loadouts_addItemToBackpack;
        if (!_res) then {
            diag_log format ["BSO_Loadouts: Failed to add item (backpackRadio) %1 to %2",getText (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "backpackRadio"),_this];
            _rejectArray pushBack _x;
        };
    };
    */
    // Backpack Items
    {
        if !(_x isEqualType []) then {
                _res = [_unit,_x] call BSO_fnc_loadouts_addItemToBackpack;
                if (!_res) then {
                    diag_log format ["BSO_Loadouts: Failed to add item (backpackItems) %1 to %2",_x,_this];
                    _rejectArray pushBack _x;
                };
        } 
        else  // if it is an array, will add a magazine for each in the count
        {
            _Bitems = _x select 0;
            _count = _x select 1;
            
            for "_i" from 1 to _count do
            {
                _res = [_unit,_Bitems] call BSO_fnc_loadouts_addItemToBackpack;
                
                if (!_res) then {
                    diag_log format ["BSO_Loadouts: Failed to add items (backpackItems) %1 to %2",_Bitems,_this];
                    _rejectArray pushBack _Bitems;
                };	
            };
        };	
    } forEach getArray (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "backpackItems");
    
    // Backpack Magazines
    {
        if !(_x isEqualType []) then {
            //_unit addItemToBackpack _x;
            _res = [_unit,_x] call BSO_fnc_loadouts_addItemToBackpack;
            if (!_res) then {
                diag_log format ["BSO_Loadouts: Failed to add Magazines (backpackMagazines) %1 to %2",_x,_this];
                _rejectArray pushBack _x;
            };
        }
        else
        {
            _Bmagazines = _x select 0;
            _count = _x select 1;
            
            for "_i" from 1 to _count do
            {
                _res = [_unit,_Bmagazines] call BSO_fnc_loadouts_addItemToBackpack;
                
                if (!_res) then {
                    diag_log format ["BSO_Loadouts: Failed to add Magazines (backpackMagazines) %1 to %2",_Bmagazines,_this];
                    _rejectArray pushBack _Bmagazines;
                };	
            };
        };					
    } forEach getArray (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "backpackMagazines");
};

// applies insignia from loadout IF its defined
if !(getText(_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "insignia") == "") then 
{
    [_unit,getText (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "insignia")] call BIS_fnc_setUnitInsignia;
};

// removes and then adds goggles if defined in the loadout
if (count getArray(_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "glasses") > 0) then 
{
	//removeGoggles _unit;
	_unit addGoggles (getArray (_source >> "CfgBsoLoadouts" >> _faction >> _loadout >> "glasses") call BIS_fnc_selectRandom); // Random
};

/////////////////////////////////////////////////////////	
///////// End of first pass of adding items!!! /////////
////////////////////////////////////////////////////////

// second pass of adding items. Will pull from the failed list, and try and put them whever they'll fit.

private _rejectedDiagArray = []; // used as a separate array for the hint. using second array because lazy... i could remove each item from the array i guess...
{
    _rejects = [_unit,_x] call CBA_fnc_addItem; // will add each item in the rejectArray to the player. FALSE TO PUTTING ITEM ON GROUND IF FAILS TO ADD
    if (!_rejects) then { // Any failures will now be added to a new array, which will 
        _rejectedDiagArray pushBack _x;
    };
} forEach _rejectArray;

if (count _rejectedDiagArray != 0) then {systemChat format ["These items were NOT added to the player as there was no room: %1",_rejectedDiagArray];};

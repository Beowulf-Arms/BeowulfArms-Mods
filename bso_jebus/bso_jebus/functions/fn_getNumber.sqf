params ["_value", "_canBeArray", "_canBeNil"];

if (typeName _value == "STRING") then {
	_value = call compile _value;
};

if (isNil _value) exitWith {
	if (_canBeNil) then {
		[nil, nil]
	} else {
		[nil, "Can't be empty!"]
	}
};

if (typeName _value == "ARRAY") exitWith {
	if (_canBeArray) then {
		[nil, nil]
	} else {
		[nil, "Can't be array!"]
	}
};

if (typeName _value == "SCALAR") exitWith {
	[_value, nil]
};

[nil, format ["Must be Number%1%2!", ["", " or Array"] select _canBeArray, ["", " or Empty"] select _canBeNil]]

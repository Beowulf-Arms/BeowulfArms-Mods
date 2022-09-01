params ["_value"];

if (typeName _value != "STRING") then {
	[nil, "Must be string or empty"]
} else {
	[_value, nil]
}

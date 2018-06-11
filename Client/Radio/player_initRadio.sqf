/*
 * Author: InclementDeath
 * Adds self interact option to player for radio
 *
 * Only execVM locally!
 *
 * Public: Yes
 */
 


call {
	private ["_condition","_classname","_name","_icon","_statement","_action"];
	_condition = {("ItemRadio" in (assignedItems player)) && !(player getVariable "RadioToggle")};
	_classname = "EnableRadio";
	_name = "Enable Radio";
	_icon = "assets\ACE_Interaction_Radio_Icon.paa";
	_statement = {[true] call server_radioToggle};
	_action = [_classname, _name, _icon, _statement, _condition] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action] call ace_interact_menu_fnc_addActionToObject;
};

call {
	private ["_condition","_classname","_name","_icon","_statement","_action"];
	_condition = {("ItemRadio" in (assignedItems player)) && (player getVariable "RadioToggle")};
	_classname = "DisableRadio";
	_name = "Disable Radio";
	_icon = "assets\ACE_Interaction_Radio_Icon.paa";
	_statement = {[false] call server_radioToggle};
	_action = [_classname, _name, _icon, _statement, _condition] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action] call ace_interact_menu_fnc_addActionToObject;
};
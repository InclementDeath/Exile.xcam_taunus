/*
 * Author: InclementDeath
 * fn_preinit
 *
 *
 * Public: y tho
 */


private ['_code', '_function', '_file'];

{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;
    _code = compileFinal (preprocessFileLineNumbers _file);
    missionNamespace setVariable [_function, _code];
}
forEach
[
	['RadioToggle', 'Client\Radio\RadioToggle.sqf'],
	['Enigma_RevivePlyr', 'Client\Enigma\Enigma_RevivePlyr.sqf']
];

true


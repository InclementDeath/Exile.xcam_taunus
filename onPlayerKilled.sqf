0.05 fadeSound 0; 
cutText  ["","BLACK FADED", 2];
uiSleep 2;
  _msg1 = ("<t size='0.75' align='middle'>");
  [format   ["YOU ARE DEAD",_msg1],0,0.5,7,4] spawn BIS_fnc_dynamicText;
  sleep 3; 
7.0 fadeSound 1.0;
titleCut ["", "BLACK IN", 12]; 


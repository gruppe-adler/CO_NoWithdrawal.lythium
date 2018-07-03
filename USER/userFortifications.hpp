/*
*   Config für grad-fortifications.
*   Ist in CfgGradFortifications included.
*/

canDemolishDefault = 1;
buildTimeFactor = 0.5;
packUpTimeFactor = 0.5;
fortificationOwnerType = "SIDE";
demolitionTimeFactor = 1.4;

class Fortifications {
[Kiste_fort,"Land_BagFence_Long_F",2] call grad_fortifications_fnc_addFort;
[Kiste_fort,"Land_BagFence_Short_F",5] call grad_fortifications_fnc_addFort;
[Kiste_fort,"Land_BagFence_Corner_F",4] call grad_fortifications_fnc_addFort;
[Kiste_fort,"Land_BagFence_Round_F",2] call grad_fortifications_fnc_addFort;
[Kiste_fort,"Land_Razorwire_F",1] call grad_fortifications_fnc_addFort;
};

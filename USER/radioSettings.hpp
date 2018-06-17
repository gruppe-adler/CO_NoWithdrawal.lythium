/*
*   Definiert voreingestellte Funkfrequenzen und Netznamen.
*   Netzname ist optional und wird, sofern vorhanden, bei Spielstart am Kartenrand vermerkt.
*
*   Die ersten 8 Shortrange Netze werden auf den SR Kanälen 1-8 und die ersten 9 Longrange Netze werden auf den LR Kanälen 1-9 voreingestellt.
*   Es können weitere Netze definiert werden, die dann in der groupsettings.hpp einzelnen Gruppen zugewiesen werden können.
*
*   Beispiel:
    class net1 {
        freq = 32.5;
        name = "Command Kanal";
    };

    //[...]

    class net10 {
        freq = 80.1;
        name = "Air Intern";
    };
*/

//SHORTRANGE KANÄLE ============================================================
class shortrange {
    class Command_Internal {
        freq = 50;
    };

    class Alpha_Internal {
        freq = 60;
    };

    class Bravo_Internal {
        freq = 70;
    };

    class Charlie_Internal {
        freq = 80;
    };

    class Medic {
        freq = 90;
    };

    class Mortar {
        freq = 100;
    };

    class AT {
        freq = 110;
    };
};


//LONGRANGE KANÄLE =============================================================
class longrange {
    class Command {
        freq = 32;
    };

    class Mortar_AT {
        freq = 33;
    };
};

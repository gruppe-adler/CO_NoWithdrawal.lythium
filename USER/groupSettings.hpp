/*
*   Legt Gruppennamen, Standard- und Sonderkanäle fest.
*   Gruppenspezifische Kanäle können über die Einträge channel1-channel8 für Shortrange und channel1-channel9 für Longrange festgelegt werden.
*   Hier werden die in der radiosettings.hpp definierten Kanalnamen oder Klassennamen der Kanäle verwendet.
*
*   Beispiel:
*
    class BLUFOR {
        class group1 {
            groupName = "Command";

            class shortrange {
                defaultChannel = 1;
                altChannel = 3;
                altChannelOnlyTL = 1;

                channel1 = "Command Kanal";
                channel3 = "net13";
                channel7 = "Command Intern";
            };

            class longrange {
                defaultChannel = 2;
                altChannel = 5;
                altChannelOnlyTL = 1;

                channel2 = "Air";
                channel5 = "net10";
            };
        };
    };
*
*/

    class BLUFOR {
        class group1 {
            groupName = "Command";

            class shortrange {
                defaultChannel = 1;
                channel1 = "Command_Internal";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;
                altChannelOnlyTL = 1;

                channel1 = "Command";
                channel2 = "Mortar_AT";
            };
        };
		class group2 {
            groupName = "Alpha";

            class shortrange {
                defaultChannel = 2;
                channel3 = "Alpha_Internal";
            };

            class longrange {
                defaultChannel = 1;

                channel1 = "Command";
            };
        };
		class group3 {
            groupName = "Bravo";

            class shortrange {
                defaultChannel = 3;
                channel3 = "Bravo_Internal";
            };

            class longrange {
                defaultChannel = 1;

                channel1 = "Command";
            };
        };
		class group4 {
            groupName = "Charlie";

            class shortrange {
                defaultChannel = 4;
                channel3 = "Charlie_Internal";
            };

            class longrange {
                defaultChannel = 1;

                channel1 = "Command";
            };
        };
		class group5 {
            groupName = "Medic";

            class shortrange {
                defaultChannel = 5;
                channel3 = "Medic_Internal";
            };

            class longrange {
                defaultChannel = 1;

                channel1 = "Command";
            };
        };
		class group6 {
            groupName = "Mortar";

            class shortrange {
                defaultChannel = 6;
                channel3 = "Mortar_Internal";
            };

            class longrange {
                defaultChannel = 2;

                channel1 = "Mortar_AT";
            };
        };
		class group7 {
            groupName = "AT";

            class shortrange {
                defaultChannel = 7;
                channel3 = "AT_Internal";
            };

            class longrange {
                defaultChannel = 2;

                channel1 = "Mortar_AT";
            };
        };
    };

class OPFOR {

};

class INDEPENDENT {

};

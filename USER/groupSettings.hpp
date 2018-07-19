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
            groupName = "Lion";

            class shortrange {
                defaultChannel = 1;
                channel1 = "Lion_Internal";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;
                altChannelOnlyTL = 1;

                channel1 = "Lion";
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

                channel1 = "Lion";
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

                channel1 = "Lion";
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

                channel1 = "Lion";
            };
        };
		class group5 {
            groupName = "Delta";

            class shortrange {
                defaultChannel = 5;
                channel3 = "Delta_Internal";
            };

            class longrange {
                defaultChannel = 1;

                channel1 = "Mortar_AT";
            };
        };
		class group6 {
            groupName = "Echo";

            class shortrange {
                defaultChannel = 6;
                channel3 = "Echo_Internal";
            };

            class longrange {
                defaultChannel = 2;

                channel1 = "Mortar_AT";
            };
        };
		class group7 {
            groupName = "Foxtrot";

            class shortrange {
                defaultChannel = 7;
                channel3 = "Foxtrot_Internal";
            };

            class longrange {
                defaultChannel = 2;

                channel1 = "Lion";
            };
        };
    };

class OPFOR {

};

class INDEPENDENT {

};

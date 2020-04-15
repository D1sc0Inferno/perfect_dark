#include <ultra64.h>

char *lang[] = {
	/*  0*/ "%shat den\nData Uplink\n",
	/*  1*/ "%shat den\nAktenkoffer\n",
	/*  2*/ "%shat die %s Aktenkoffer\n",
	/*  3*/ "%shat unsere\nAktenkoffer\n",
	/*  4*/ "Hat die %s Aktenkoffer\n",
	/*  5*/ "Sie haben die\n%s Aktenkoffer geschnappt.\n",
	/*  6*/ "%shat unseren\nAktenkoffer geschnappt.\n",
	/*  7*/ "%shat unsere\n%s Aktenkoffer geschnappt.\n",
	/*  8*/ "Wieviel ist Ihnen das Leben wert?\n",
	/*  9*/ "Sie sollten Ihr Team nicht\n",
	/* 10*/ "angreifen!\n",
	/* 11*/ "Gut gemacht!\n",
	/* 12*/ "Einer weniger!\n",
	/* 13*/ "Ist Ihnen das Leben noch immer etwas wert?\n",
	/* 14*/ "Sie sind das Opfer!\n",
	/* 15*/ "Besch�tzen Sie %s!\n",
	/* 16*/ "Schnappen Sie %s!\n",
	/* 17*/ "Download erfolgreich.\n",
	/* 18*/ "Verbindung abgebrochen.\n",
	/* 19*/ "Download gestartet.\n",
	/* 20*/ "Sie m�ssen den Data Uplink einsetzen.\n",
	/* 21*/ "Herr des\nH�gels!\n",
	/* 22*/ "Der H�gel\nist unser!\n",
	/* 23*/ "%shat den H�gel\nerobert!\n",
	/* 24*/ "%ds/Punkt\n",
	/* 25*/ "1 Punkt!\n",
	/* 26*/ "Kein Schild\n",
	/* 27*/ "Automatische Waffen\n",
	/* 28*/ "Raketenwerfer\n",
	/* 29*/ "Simulanten\n",
	/* 30*/ "Herr des H�gels\n",
	/* 31*/ "Weitsicht\n",
	/* 32*/ "Schnappen Sie den Aktenkoffer\n",
	/* 33*/ "Ein Treffer ist zu viel\n",
	/* 34*/ "Schnappen Sie den Koffer\n",
	/* 35*/ "Tarnung\n",
	/* 36*/ "Sprengs�tze im Tempel\n",
	/* 37*/ "Slayer\n",
	/* 38*/ "Bet�ubungsgewehr\n",
	/* 39*/ "Zeitlupe\n",
	/* 40*/ "Dr�cken Sie START\n",
	/* 41*/ "Pause\n",
	/* 42*/ "individuell\n",
	/* 43*/ "zuf�llig\n",
	/* 44*/ "F�nf Zuf�llige\n",
	/* 45*/ "Nahkampf\n",
	/* 46*/ "Ann�herungs-Mine\n",
	/* 47*/ "Raketenwerfer\n",
	/* 48*/ "Granatwerfer\n",
	/* 49*/ "Sprengsatz\n",
	/* 50*/ "Goldene Magnum\n",
	/* 51*/ "Schwere Waffen\n",
	/* 52*/ "Bet�ubungsgewehr\n",
	/* 53*/ "Fernsicht\n",
	/* 54*/ "Power\n",
	/* 55*/ "Automatische Waffen\n",
	/* 56*/ "Pistolen\n",
	/* 57*/ "Test\n",
	/* 58*/ "4 MB-Test\n",
	/* 59*/ "Nichts\n",
	/* 60*/ "Schild\n",
	/* 61*/ "Nicht belegt\n",
	/* 62*/ "Alle Ziele erreicht\n",
	/* 63*/ "Unbekannt\n",
	/* 64*/ "Vermisst\n",
	/* 65*/ "Controller Pak ist besch�digt.\n",
	/* 66*/ "ist besch�digt oder nicht \n",
	/* 67*/ "korrekt eingelegt.\n",
	/* 68*/ "Schaden beheben\n",
	/* 69*/ "Nochmals versuchen\n",
	/* 70*/ "Ohne Controller Pak \nfortfahren\n",
	/* 71*/ "Controller Pak ist voll\n",
	/* 72*/ "ist zu voll, um zu \nspeichern - Es werden 28 \nfreie Seiten ben�tigt.\n",
	/* 73*/ "Schaffe im Controller Pak \nMen� ausreichend Platz. \n(Halte w�hrend des Einschaltens \nSTART gedr�ckt.)\n",
	/* 74*/ "OK\n",
	/* 75*/ "----------\n",
	/* 76*/ "Hurricane-Faust\n",
	/* 77*/ "Tarnkappe\n",
	/* 78*/ "Unbesiegbar\n",
	/* 79*/ "Alle Waffen verf�gbar\n",
	/* 80*/ "Unbegrenzte Munition\n",
	/* 81*/ "Unbegrenzte Munition, kein Nachladen\n",
	/* 82*/ "Zeitlupen-Modus\n",
	/* 83*/ "DK-Modus\n",
	/* 84*/ "Trents Magnum\n",
	/* 85*/ "Fernsicht\n",
	/* 86*/ "Mini-Jo\n",
	/* 87*/ "Kleine Charaktere\n",
	/* 88*/ "Feinde mit Schild\n",
	/* 89*/ "Jo mit Schild\n",
	/* 90*/ "Super-Schild\n",
	/* 91*/ "Klassische Sicht\n",
	/* 92*/ "Nur K�pfe des Teams\n",
	/* 93*/ "Elvis\n",
	/* 94*/ "Feinde mit Raketen\n",
	/* 95*/ "Unbegrenzte Munition f�r die Selbstschuss-Anlage\n",
	/* 96*/ "Marquis of Queensbury-Regeln\n",
	/* 97*/ "Perfekte Dunkelheit\n",
	/* 98*/ "Boxer\n",
	/* 99*/ "Hotshot\n",
	/*100*/ "Hit and Run\n",
	/*101*/ "Alien\n",
	/*102*/ "R-Tracker / Munitions-Fundorte\n",
	/*103*/ "Raketenwerfer\n",
	/*104*/ "Sniper-Gewehr\n",
	/*105*/ "R�ntgen-Scanner\n",
	/*106*/ "SuperDragon\n",
	/*107*/ "Laptop-Gewehr\n",
	/*108*/ "Phoenix\n",
	/*109*/ "Psychosis Gun\n",
	/*110*/ "PP9i\n",
	/*111*/ "CC13\n",
	/*112*/ "KLO1313\n",
	/*113*/ "KF7 Spezial\n",
	/*114*/ "ZZT (9mm)\n",
	/*115*/ "DMC\n",
	/*116*/ "AR53\n",
	/*117*/ "RC-P45\n",
	/*118*/ "Velvet Dark\n",
	/*119*/ "Fun\n",
	/*120*/ "Gameplay\n",
	/*121*/ "Waffen\n",
	/*122*/ "Kumpel\n",
	/*123*/ "Waffen f�r Jo im Solo-Modus\n",
	/*124*/ "Klassische Waffe f�r Jo im Solo-Modus\n",
	/*125*/ "dataDyne �berlauf",
	/*126*/ "dataDyne Extraktion",
	/*127*/ "A51 Infiltration",
	/*128*/ "A51 Rettung",
	/*129*/ "A51 Flucht",
	/*130*/ "Schwierigkeit:\n",
	/*131*/ "Cheat Solo Missionen\n",
	/*132*/ "Cheat Kampf-Simulator\n",
	/*133*/ "Cheat Teamwork\n",
	/*134*/ "Cheat Counter Operative-Modus\n",
	/*135*/ "Entehrt\n",
	/*136*/ "Gecheated\n",
	/*137*/ "Cheat verf�gbar",
	/*138*/ "Komplettierung",
	/*139*/ "f�r den Cheat:",
	/*140*/ "auf",
	/*141*/ "in weniger als",
	/*142*/ "oder legen Sie Perfect Dark - Game Boy (R) in das Transfer Pak (TM) ein. Legen Sie ein Transfer Pak in einen beliebigen Controller ein, und gehen Sie ins Men�.",
	/*143*/ "W�hlen Sie den Cheat f�r mehr Infos aus.\n",
	/*144*/ "Kumpel verf�gbar",
	/*145*/ "Erlangen Sie Gold am Schie�stand, um klassische Waffen anzuw�hlen.\n",
	/*146*/ "Bildschirm-Anzeigen\n",
	/*147*/ "Ziel\n",
	/*148*/ "Zoombereich anzeigen\n",
	/*149*/ "Munition anzeigen\n",
	/*150*/ "Waffen-Funktion\n",
	/*151*/ "Paintball\n",
	/*152*/ "Untertitel\n",
	/*153*/ "Missionszeit\n",
	/*154*/ "Sound\n",
	/*155*/ "Split\n",
	/*156*/ "M�chten Sie die Mission\nabbrechen?\n",
	/*157*/ "Joanna in Leder\n",
	/*158*/ "Joanna als Unterh�ndler\n",
	/*159*/ "Elvis (Weste)\n",
	/*160*/ "Error\n",
	/*161*/ "File ist aktiv. Aktive Files \nk�nnen nicht gel�scht werden.\n",
	/*162*/ "Abbrechen\n",
	/*163*/ "Zeit-Limit:\n",
	/*164*/ "Score-Limit:\n",
	/*165*/ "Team Score-Limit:\n",
	/*166*/ "Challenge abgeschlossen!\n",
	/*167*/ "Challenge fehlgeschlagen!\n",
	/*168*/ "Es wurde ein Cheat eingesetzt!\n",
	/*169*/ "Zwischensequenzen Untertitel\n",
	/*170*/ "In-Game Untertitel\n",
	/*171*/ "Alternativer Titelbildschirm\n",
	/*172*/ "Challenge beginnen\n",
	/*173*/ "dataDyne Untersuchung",
	/*174*/ "Error\n",
	/*175*/ "Das Controller Pak \nwurde entfernt.\n",
	/*176*/ "Schaden beheben\n",
	/*177*/ "Sind Sie sicher, dass \nSie das Controller Pak \nreparieren wollen)\n",
	/*178*/ "Es k�nnten Daten verloren gehen!\n",
	/*179*/ "Abbruch\n",
	/*180*/ "Reparatur\n",
	/*181*/ "Reparatur erfolgreich\n",
	/*182*/ "Das Controller Pak \nwurde repariert.\n",
	/*183*/ "Reparatur fehlgeschlagen\n",
	/*184*/ "Das Controller Pak \nkann nicht repariert werden.\nSie k�nnen keine \nDaten laden \noder speichern.\n",
	/*185*/ "Spieler-Handicaps\n",
	/*186*/ "L/R-TASTEN: ",
	/*187*/ "C-KNOPF OBEN: ",
	/*188*/ "C-KN�PFE LINKS/RECHTS: ",
	/*189*/ "C-KNOPF UNEN: ",
	/*190*/ "A-KNOPF: ",
	/*191*/ "B-KNOPF: ",
	/*192*/ "ANALOGER 3D-STICK: ",
	/*193*/ "Z-TRIGGER: ",
	/*194*/ "+ STEUERKREUZ: ",
	/*195*/ "ZIELEN",
	/*196*/ "ZIELFUNKTION",
	/*197*/ "NACH OBEN SCHAUEN",
	/*198*/ "NACH UNTEN SCHAUEN",
	/*199*/ "NACH UNTEN SCHAUEN",
	/*200*/ "NACH OBEN SCHAUEN",
	/*201*/ "VORW�RTS",
	/*202*/ "R�CKW�RTS",
	/*203*/ "AUSWEICHEN",
	/*204*/ "WAFFE",
	/*205*/ "AKTION/NACHLADEN",
	/*206*/ "FEUER",
	/*207*/ "GEHEN/DREHEN",
	/*208*/ "UMSCHAUEN",
	/*209*/ "GEHEN/AUSWEICHEN",
	/*210*/ "UMSCHAUEN/AUSWEICHEN",
	/*211*/ "WIE C-KN�PFE",
	/*212*/ "Controller 1:",
	/*213*/ "Controller 2:",
	/*214*/ "Steuerungsart %s %s\n",
	/*215*/ "(Einh�ndig)",
	/*216*/ "(Beidh�ndig)",
	/*217*/ "Halten Sie den Waffen-Knopf gedr�ckt, um das Quick-Men� aufzurufen.\nHalten Sie den Aktions-Knopf gedr�ckt, um die Funktion zu �ndern.\nAktion+Feuer �ndert die Funktion kurzzeitig.\nMit der Zielfunktion k�nnen Sie genauer zielen.\nZielen + C-Knopf unten = kriechen.\nZielen + C-Knopf oben = aufstehen.\n",
	/*218*/ "Alle Cheats deaktivieren\n",
	/*219*/ "Sprachfilter\n",
	/*220*/ "USERNAME:\n",
	/*221*/ "PASSWORT:\n",
	/*222*/ "Perfect Dark\n",
	/*223*/ "Einstellungen w�hlen:\n",
	/*224*/ "Gegnerische Reaktion:\n",
	/*225*/ "Gegnerische Energie:\n",
	/*226*/ "Schaden durch Gegner:\n",
	/*227*/ "Gegnerische Genauigkeit:\n",
	/*228*/ "OK\n",
	/*229*/ "Abbruch\n",
	/*230*/ "Controller Pak wurde nicht gefunden\n",
	/*231*/ "Name:\n",
	/*232*/ "Location:\n",
	/*233*/ "File Name duplizieren\n",
	/*234*/ "beinhaltet bereits\n",
	/*235*/ "ein File namens\n",
	/*236*/ "File umbenennen\n",
	/*237*/ "Location wechseln\n",
	/*238*/ "Abbruch\n",
	/*239*/ "File Namen �ndern\n",
	/*240*/ "Neuen Namen eingeben:\n",
	/*241*/ "Das zu kopierende File \nkann nicht gel�scht werden.\n",
	/*242*/ "SchockSim:%d\n",
	/*243*/ "Maximale Zeit:\n",
	/*244*/ "Neuer Cheat verf�gbar!\n",
	/*245*/ "Weiter\n",
	/*246*/ "Letzten Level wiederholen\n",
	/*247*/ "Spieler speichern\n",
	/*248*/ "Neuen Spieler und \nWerte speichern?\n",
	/*249*/ "Speichern\n",
	/*250*/ "Nein Danke!\n",
	/*251*/ "Spielernamen best�tigen:\n",
	/*252*/ "Das gespeicherte File wurde \naufgrund von besch�digten Daten \noder Hardware-Sch�den \ngel�scht.\n",
	/*253*/ "Weiter\n",
	/*254*/ "Error\n",
	/*255*/ "Game Boy-Modul kann nicht gelesen werden.\nBitte �berpr�fen Sie, ob\ndas richtige Game Boy-Modul\neingelegt ist.\n",
	/*256*/ "Abbruch\n",
	/*257*/ "Error\n",
	/*258*/ "Die gespeicherten Daten\n",
	/*259*/ "wurden aufgrund einer\n",
	/*260*/ "Besch�digung gel�scht.\n",
	/*261*/ "Abbruch\n",
	/*262*/ "W�hlen Sie die Sprache:\n",
	/*263*/ "Englisch\n",
	/*264*/ "Franz�sisch\n",
	/*265*/ "Deutsch\n",
	/*266*/ "Italienisch\n",
	/*267*/ "Spanisch\n",
	/*268*/ "Amerikanisch\n",
	/*269*/ "Sprache:\n",
	/*270*/ "Sprache\n",
	/*271*/ NULL,
};

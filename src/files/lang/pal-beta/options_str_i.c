#include <ultra64.h>

char *lang[] = {
	/*  0*/ "Compiuto\n",
	/*  1*/ "Incompleto\n",
	/*  2*/ "Fallito\n",
	/*  3*/ "\n",
	/*  4*/ "",
	/*  5*/ "Terra:",
	/*  6*/ "   nella preistoria",
	/*  7*/ "Rare presenta",
	/*  8*/ "Rosso\n",
	/*  9*/ "Giallo\n",
	/* 10*/ "Blu\n",
	/* 11*/ "Magenta\n",
	/* 12*/ "Azzurro\n",
	/* 13*/ "Arancio\n",
	/* 14*/ "Rosa\n",
	/* 15*/ "Marrone\n",
	/* 16*/ "Joanna in tuta da lotta\n",
	/* 17*/ "Joanna in impermeabile\n",
	/* 18*/ "Joanna in abito da sera\n",
	/* 19*/ "Joanna in abito strappato\n",
	/* 20*/ "Joanna come hostess\n",
	/* 21*/ "Joanna in muta da sub\n",
	/* 22*/ "Joanna con bombole da sub\n",
	/* 23*/ "Joanna in tenuta polare\n",
	/* 24*/ "Joanna in camice\n",
	/* 25*/ "Elvis\n",
	/* 26*/ "Maian\n",
	/* 27*/ "Daniel Carrington\n",
	/* 28*/ "Carrington in smoking\n",
	/* 29*/ "Mr. Blonde\n",
	/* 30*/ "Cassandra De Vries\n",
	/* 31*/ "Trent Easton\n",
	/* 32*/ "Jonathan\n",
	/* 33*/ "Tecnico di lab. CI (uomo)\n",
	/* 34*/ "Tecnico di lab. CI (donna)\n",
	/* 35*/ "Soldato CI\n",
	/* 36*/ "Soldato d'assalto dD\n",
	/* 37*/ "Guardia (donna) dD\n",
	/* 38*/ "Sicurezza dataDyne\n",
	/* 39*/ "Fanteria dataDyne\n",
	/* 40*/ "Soldato dataDyne\n",
	/* 41*/ "Segretaria\n",
	/* 42*/ "Vestito da ufficio\n",
	/* 43*/ "Vestito casual\n",
	/* 44*/ "Negoziatore\n",
	/* 45*/ "Cecchino dataDyne\n",
	/* 46*/ "Guardia G5\n",
	/* 47*/ "Guardia SWAT G5\n",
	/* 48*/ "Agente CIA\n",
	/* 49*/ "Agente FBI\n",
	/* 50*/ "Guardia Area 51\n",
	/* 51*/ "Soldato Area 51\n",
	/* 52*/ "Pilota\n",
	/* 53*/ "Tute\n",
	/* 54*/ "Guardia del corpo NSA\n",
	/* 55*/ "Tecnico di lab. (uomo)\n",
	/* 56*/ "Tecnico di lab. (donna)\n",
	/* 57*/ "Tecnico di lab. dD\n",
	/* 58*/ "Tecnico biologico\n",
	/* 59*/ "Guardia dell'Alaska\n",
	/* 60*/ "Pilota Air Force One\n",
	/* 61*/ "Steward\n",
	/* 62*/ "Hostess\n",
	/* 63*/ "Hostess capo\n",
	/* 64*/ "Presidente\n",
	/* 65*/ "Lacch� NSA\n",
	/* 66*/ "Sicurezza presidenziale\n",
	/* 67*/ "Clone del Presidente\n",
	/* 68*/ "Guardia Pelagic II\n",
	/* 69*/ "Soldato Maian\n",
	/* 70*/ "Giacca elegante\n",
	/* 71*/ "nessun Controller nella presa 1",
	/* 72*/ "spegni la console e collega un Controller",
	/* 73*/ "TROVATO",
	/* 74*/ "NON TROVATO",
	/* 75*/ "tm",
	/* 76*/ "EXPANSION PAK N64",
	/* 77*/ "Identificazione prodotto Nintendo 64\n",
	/* 78*/ "ID prodotto:\n",
	/* 79*/ "Codice prodotto:\n",
	/* 80*/ "Variante:\n",
	/* 81*/ "Ideatore:\n",
	/* 82*/ "Perfect Dark\n",
	/* 83*/ "NUS-NPDE-USA\n",
	/* 84*/ "Versione PAL 8.7 finale\n",
	/* 85*/ "Rare Ltd. (twycross)\n",
	/* 86*/ "Copyright Rare Ltd. 2000\n",
	/* 87*/ "I logo Rareware e Perfect Dark sono trademark di Rare Ltd.\n",
	/* 88*/ "Presentato in Dolby Surround.  Dolby e il simbolo\ndoppia D sono trademark di Dolby Laboratories.",
	/* 89*/ "Usa Miles Sound System Copyright 1991-1999 RAD Game Tools Inc.\nMPEG Layer-3 playback fornito con Miles Sound System da\nRAD Game Tools, Inc. tecnologia di compressione audio MPEG Layer-3\nsu licenza di Fraunhofer IIS e THOMSON multimedia\n",
	/* 90*/ "",
	/* 91*/ "",
	/* 92*/ "",
	/* 93*/ "Design Rare nel futuro <<<\n",
	/* 94*/ "Edito da Rareware.\n",
	/* 95*/ "Perfect Dark\n",
	/* 96*/ "Scegli la tua realt�\n",
	/* 97*/ "Nuovo...\n",
	/* 98*/ "Nuovo agente...\n",
	/* 99*/ "File di gioco\n",
	/*100*/ "Copia:\n",
	/*101*/ "Cancella:\n",
	/*102*/ "Cancella dati gioco...\n",
	/*103*/ "File missioni individuali\n",
	/*104*/ "File impostaz. simulatore lotta\n",
	/*105*/ "File giocatore simulatore lotta\n",
	/*106*/ "File testaPerfect\n",
	/*107*/ "Menu Controller Pak\n",
	/*108*/ "Usalo per cancellare i dati di gioco\ndai Controller Pak.\n",
	/*109*/ "Scegli Controller Pak:\n",
	/*110*/ "Esci\n",
	/*111*/ "Cassetta gioco\n",
	/*112*/ "Controller Pak 1\n",
	/*113*/ "Controller Pak 2\n",
	/*114*/ "Controller Pak 3\n",
	/*115*/ "Controller Pak 4\n",
	/*116*/ "Menu Perfect\n",
	/*117*/ "Missioni individuali\n",
	/*118*/ "Simulatore lotta\n",
	/*119*/ "Collaborazione\n",
	/*120*/ "Tutti contro tutti!\n",
	/*121*/ "Cinema\n",
	/*122*/ "Seleziona Missione\n",
	/*123*/ "Missione 1\n",
	/*124*/ "Missione 2\n",
	/*125*/ "Missione 3\n",
	/*126*/ "Missione 4\n",
	/*127*/ "Missione 5\n",
	/*128*/ "Missione 6\n",
	/*129*/ "Missione 7\n",
	/*130*/ "Missione 8\n",
	/*131*/ "Missione 9\n",
	/*132*/ "Missioni speciali\n",
	/*133*/ "QG dataDyne",
	/*134*/ "- Ribellione",
	/*135*/ "Ricerca dataDyne",
	/*136*/ "- L'indagine",
	/*137*/ "QG dataDyne",
	/*138*/ "- Salvataggio",
	/*139*/ "Villa Carrington",
	/*140*/ "- L'ostaggio n�1",
	/*141*/ "Chicago",
	/*142*/ "- In incognito",
	/*143*/ "Edificio G5",
	/*144*/ "- Ricognizione",
	/*145*/ "Area 51",
	/*146*/ "- L'infiltrazione",
	/*147*/ "Area 51",
	/*148*/ "- Salvataggio",
	/*149*/ "Area 51",
	/*150*/ "- La fuga",
	/*151*/ "Base aerea",
	/*152*/ "- Lo spionaggio",
	/*153*/ "Air Force One",
	/*154*/ "- Antiterrorismo",
	/*155*/ "Luogo del disastro",
	/*156*/ "- Lo scontro",
	/*157*/ "Pelagic II",
	/*158*/ "- L'esplorazione",
	/*159*/ "Negli abissi",
	/*160*/ "- La minaccia",
	/*161*/ "Carrington Institute",
	/*162*/ "- La difesa",
	/*163*/ "Astronave d'assalto",
	/*164*/ "- Attacco coperto",
	/*165*/ "Rovine Skedar",
	/*166*/ "- Tempio di guerra",
	/*167*/ "La vendetta di Mr. Blonde",
	/*168*/ "L'SOS Maian",
	/*169*/ "Il riscatto dell'istituto",
	/*170*/ "GUERRA!",
	/*171*/ "Il duello",
	/*172*/ "Situazione\n",
	/*173*/ "Interruzione!\n",
	/*174*/ "Attenzione!\n",
	/*175*/ "Vuoi interrompere la missione?\n",
	/*176*/ "Annulla\n",
	/*177*/ "Interrompi\n",
	/*178*/ "Inventario\n",
	/*179*/ "Armi disponibili\n",
	/*180*/ "Opzioni\n",
	/*181*/ "Audio\n",
	/*182*/ "Video\n",
	/*183*/ "Comandi\n",
	/*184*/ "Visualizza\n",
	/*185*/ "Trucchi\n",
	/*186*/ "Salva gioco\n",
	/*187*/ "Cambia agente...\n",
	/*188*/ "Attenzione!\n",
	/*189*/ "Vuoi caricare un altro agente?\n",
	/*190*/ "S�\n",
	/*191*/ "No\n",
	/*192*/ "Opzioni comandi\n",
	/*193*/ "Comandi giocatore 2\n",
	/*194*/ "Modalit� comandi\n",
	/*195*/ "Invers. punto di vista\n",
	/*196*/ "Vista in avanti\n",
	/*197*/ "Rotazione testa\n",
	/*198*/ "Mira automatica\n",
	/*199*/ "Comando mirino\n",
	/*200*/ "Esci\n",
	/*201*/ "Tieni premuto\n",
	/*202*/ "Attiva/Disattiva\n",
	/*203*/ "Visualizza opzioni\n",
	/*204*/ "Comandi giocatore 2\n",
	/*205*/ "Vista su schermo\n",
	/*206*/ "Obiettivo sempre\n",
	/*207*/ "Area zoom\n",
	/*208*/ "Munizioni\n",
	/*209*/ "Funzioni arma\n",
	/*210*/ "Macchia colorata\n",
	/*211*/ "Didascalia\n",
	/*212*/ "Tempo missione\n",
	/*213*/ "Esci\n",
	/*214*/ "Opzioni video\n",
	/*215*/ "Dimensioni schermo\n",
	/*216*/ "Rapporto\n",
	/*217*/ "Alta risoluzione\n",
	/*218*/ "Diviso per 2 giocatori\n",
	/*219*/ "Esci\n",
	/*220*/ "Intero\n",
	/*221*/ "Allargato\n",
	/*222*/ "Cinema\n",
	/*223*/ "Normale\n",
	/*224*/ "16:9\n",
	/*225*/ "Orizzontale\n",
	/*226*/ "Verticale\n",
	/*227*/ "Opzioni audio\n",
	/*228*/ "Suono\n",
	/*229*/ "Musica\n",
	/*230*/ "Modalit� suono\n",
	/*231*/ "Esci\n",
	/*232*/ "Mono",
	/*233*/ "Stereo",
	/*234*/ "Cuffie",
	/*235*/ "Surround",
	/*236*/ "Comandi\n",
	/*237*/ "Singolo\n",
	/*238*/ "Doppio\n",
	/*239*/ "1.1",
	/*240*/ "1.2",
	/*241*/ "1.3",
	/*242*/ "1.4",
	/*243*/ "2.1",
	/*244*/ "2.2",
	/*245*/ "2.3",
	/*246*/ "2.4",
	/*247*/ "Istruzioni\n",
	/*248*/ "Seleziona difficolt�\n",
	/*249*/ "Difficolt�\n",
	/*250*/ "Tempo migliore\n",
	/*251*/ "Agente\n",
	/*252*/ "Agente speciale\n",
	/*253*/ "Agente Perfect\n",
	/*254*/ "Annulla\n",
	/*255*/ "Opzioni collaborazione\n",
	/*256*/ "Radar acceso\n",
	/*257*/ "Fuoco solo sui nemici\n",
	/*258*/ "AmicoPerfect\n",
	/*259*/ "Continua\n",
	/*260*/ "Annulla\n",
	/*261*/ "Umano",
	/*262*/ "Un replicante",
	/*263*/ "2 replicanti",
	/*264*/ "3 replicanti",
	/*265*/ "4 replicanti",
	/*266*/ "Tutti contro tutti!\n",
	/*267*/ "Radar acceso\n",
	/*268*/ "Tutti contro tutti!\n",
	/*269*/ "Continua\n",
	/*270*/ "Annulla\n",
	/*271*/ "Giocatore 1",
	/*272*/ "Giocatore 2",
	/*273*/ "Panoramica\n",
	/*274*/ "Accetta\n",
	/*275*/ "Decline\n",
	/*276*/ "Compiuto\n",
	/*277*/ "Fallito\n",
	/*278*/ "Risultati missione:\n",
	/*279*/ "Stato agente:\n",
	/*280*/ "Tempo missione:\n",
	/*281*/ "Arma pi� usata:\n",
	/*282*/ "Vittime:\n",
	/*283*/ "Accuratezza:\n",
	/*284*/ "Colpi totali:\n",
	/*285*/ " Colpi al capo:\n",
	/*286*/ " Colpi al corpo:\n",
	/*287*/ " Colpi agli arti:\n",
	/*288*/ " Altro:\n",
	/*289*/ "Premi START\n",
	/*290*/ "Deceduto\n",
	/*291*/ "Attivo\n",
	/*292*/ "Fuggito\n",
	/*293*/ "Fallito\n",
	/*294*/ "Compiuto\n",
	/*295*/ "Interrotto\n",
	/*296*/ "Riprova",
	/*297*/ "Missione seguente",
	/*298*/ "Accetta\n",
	/*299*/ "Rifiuta\n",
	/*300*/ "Obiettivi\n",
	/*301*/ "Premi START\n",
	/*302*/ "Menu breve e conciso\n",
	/*303*/ "Simulatore\n",
	/*304*/ "Addestramento\n",
	/*305*/ "Audio/Video\n",
	/*306*/ "Cambia agente\n",
	/*307*/ "Audio/Video\n",
	/*308*/ "Suono\n",
	/*309*/ "Musica\n",
	/*310*/ "Modalit� suono\n",
	/*311*/ "Rapporto\n",
	/*312*/ "Esci\n",
	/*313*/ "< Vuoto >\n",
	/*314*/ "CANC",
	/*315*/ "MAIU",
	/*316*/ "ANNULLA",
	/*317*/ "OK",
	/*318*/ "Testi simulatore\n",
	/*319*/ "Teste missione\n",
	/*320*/ "Errore\n",
	/*321*/ "Annulla\n",
	/*322*/ "Controller Pak assente\nda tutti i Controller.\n",
	/*323*/ "File non salvato.\n",
	/*324*/ "File non caricato.\n",
	/*325*/ "Impossibile cancellare file.\n",
	/*326*/ "Memoria esaurita.\n",
	/*327*/ "Giocatore gi� caricato\nnel gioco.\n",
	/*328*/ "rimosso.\n",
	/*329*/ "Controller Pak danneggiato o in posizione errata.\n",
	/*330*/ "Impossibile cancellare dati gioco.\n",
	/*331*/ "Errore di caricamento gioco\n",
	/*332*/ "Errore di salvataggio gioco\n",
	/*333*/ "Errore di caricamento giocatore\n",
	/*334*/ "Errore di salvataggio giocatore\n",
	/*335*/ "Errore di caricamento testaPerfect\n",
	/*336*/ "Errore di salvataggio testaPerfect\n",
	/*337*/ "Errore di lettura file\n",
	/*338*/ "Errore di scrittura file\n",
	/*339*/ "Errore\n",
	/*340*/ "Non cancellato\n",
	/*341*/ "Impossibile cancellare.\n",
	/*342*/ "- Controlla che il Controller Pak \nsia inserito correttamente.\n",
	/*343*/ "Annulla\n",
	/*344*/ "Spazio esaurito.\n",
	/*345*/ "Perfetto!\n",
	/*346*/ "File salvato.\n",
	/*347*/ "OK\n",
	/*348*/ "Errore durante il \nsalvataggio!\n",
	/*349*/ "Riprova\n",
	/*350*/ "Salva altrove\n",
	/*351*/ "Annulla\n",
	/*352*/ "Errore durante il \ncaricamento!\n",
	/*353*/ "Riprova\n",
	/*354*/ "Annulla\n",
	/*355*/ "Serve spazio per la testa\n",
	/*356*/ "Scegli una testa da caricare:\n",
	/*357*/ "OK\n",
	/*358*/ "Annulla\n",
	/*359*/ "Salva\n",
	/*360*/ "Vuoi salvare il file\naltrove?\n",
	/*361*/ "S�\n",
	/*362*/ "No\n",
	/*363*/ "Inserisci il Controller Pak con il tuo %s in un Controller.\n",
	/*364*/ "Inserisci il\nController Pak\ndove vuoi salvare in un Controller.\n",
	/*365*/ "OK\n",
	/*366*/ "Annulla\n",
	/*367*/ "Scegli dove!\n",
	/*368*/ "Dove?\n",
	/*369*/ "Spazi\n",
	/*370*/ "Cancella file...\n",
	/*371*/ "Annulla\n",
	/*372*/ "Pieno",
	/*373*/ "Copia file\n",
	/*374*/ "Scegli un file da copiare:\n",
	/*375*/ "Premi B per uscire.\n",
	/*376*/ "Cancella file\n",
	/*377*/ "Scegli file da cancellare:\n",
	/*378*/ "Premi B per uscire.\n",
	/*379*/ "Attenzione!\n",
	/*380*/ "Sicuro di voler\ncancellare il file?\n",
	/*381*/ "Annulla\n",
	/*382*/ "OK\n",
	/*383*/ "Cancella dati gioco\n",
	/*384*/ "Sicuro di voler\ncancellare\nquesti dati?\n",
	/*385*/ "No\n",
	/*386*/ "S�\n",
	/*387*/ "Dati gioco\n",
	/*388*/ "Cancella dati:\n",
	/*389*/ "Dati\n",
	/*390*/ "Spazi\n",
	/*391*/ "Premi B per uscire.\n",
	/*392*/ "Vuoto\n",
	/*393*/ "--\n",
	/*394*/ "Spazi vuoti: \n",
	/*395*/ "Spazi vuoti: %d\n",
	/*396*/ "Spazi pieni: \n",
	/*397*/ "Spazi pieni: %d\n",
	/*398*/ "Questo Controller Pak contiene gi� un gioco in memoria.\n",
	/*399*/ "Spazio sufficiente per\ni dati di Perfect Dark.\n",
	/*400*/ "Controller Pak pieno: impossibile salvare dati.\nServono 28 spazi per salvare sul Controller Pak.\n",
	/*401*/ "Digita nome agente\n",
	/*402*/ "Nuovo...\n",
	/*403*/ "Nuovo agente...\n",
	/*404*/ "Nuova recluta",
	/*405*/ "Tempo missione:",
	/*406*/ "Sfida 1",
	/*407*/ "Sfida 2",
	/*408*/ "Sfida 3",
	/*409*/ "Sfida 4",
	/*410*/ "Sfida 5",
	/*411*/ "Sfida 6",
	/*412*/ "Sfida 7",
	/*413*/ "Sfida 8",
	/*414*/ "Sfida 9",
	/*415*/ "Sfida 10",
	/*416*/ "Sfida 11",
	/*417*/ "Sfida 12",
	/*418*/ "Sfida 13",
	/*419*/ "Sfida 14",
	/*420*/ "Sfida 15",
	/*421*/ "Sfida 16",
	/*422*/ "Sfida 17",
	/*423*/ "Sfida 18",
	/*424*/ "Sfida 19",
	/*425*/ "Sfida 20",
	/*426*/ "Sfida 21",
	/*427*/ "Sfida 22",
	/*428*/ "Sfida 23",
	/*429*/ "Sfida 24",
	/*430*/ "Sfida 25",
	/*431*/ "Sfida 26",
	/*432*/ "Sfida 27",
	/*433*/ "Sfida 28",
	/*434*/ "Sfida 29",
	/*435*/ "Sfida 30",
	/*436*/ "Speciale\n",
	/*437*/ "Prologo\n",
	/*438*/ "Missione 1 - QG dataDyne\n",
	/*439*/ "Missione 2 - Villa Carrington\n",
	/*440*/ "Missione 3 - Edificio G5\n",
	/*441*/ "Missione 4 - Area 51\n",
	/*442*/ "Missione 5 - Air Force One\n",
	/*443*/ "Missione 6 - Pelagic II\n",
	/*444*/ "Missione 7 - Carrington Institute\n",
	/*445*/ "Missione 8 - Astronave d'assalto Skedar\n",
	/*446*/ "Missione 9 - Rovine Skedar\n",
	/*447*/ "Finale\n",
	/*448*/ "Mostra tutto!\n",
	/*449*/ "Prologo\n",
	/*450*/ "1:1 Prologo - Al buio\n",
	/*451*/ "1:1 Epilogo - Discesa rapida\n",
	/*452*/ "1:2 Prologo - Avanti!\n",
	/*453*/ "1:2 Epilogo - L'incontro\n",
	/*454*/ "1:3 Prologo - A luci spente\n",
	/*455*/ "1:3 Epilogo - Dove si va?\n",
	/*456*/ "2:1 Prologo - Il negoziato\n",
	/*457*/ "2:1 Prologo 2 - Sul filo del rasoio\n",
	/*458*/ "2:1 Epilogo - Il salvataggio\n",
	/*459*/ "3:1 Prologo - Vicoli bui\n",
	/*460*/ "3:1 Epilogo - Irruzione G5\n",
	/*461*/ "3:2 Prologo - La perfezione\n",
	/*462*/ "3:2 Speciale - La cospirazione\n",
	/*463*/ "3:2 Epilogo - Uscita antincendio\n",
	/*464*/ "4:1 Prologo - Cattiverie video\n",
	/*465*/ "4:1 Epilogo - Questioni aperte\n",
	/*466*/ "4:2 Prologo - Perle di saggezza\n",
	/*467*/ "4:2 Epilogo - A filo di spada\n",
	/*468*/ "4:3 Prologo - Gas!\n",
	/*469*/ "4:3 Speciale - Il risveglio\n",
	/*470*/ "4:3 Epilogo - La fuga\n",
	/*471*/ "5:1 Prologo - Lass� in cielo\n",
	/*472*/ "5:1 Epilogo - Il decollo\n",
	/*473*/ "5:2 Prologo - L'ultima possibilit�\n",
	/*474*/ "5:2 Speciale - L'attracco\n",
	/*475*/ "5:2 Epilogo - Vicolo cieco\n",
	/*476*/ "5:3 Prologo - Orizzonte rosso\n",
	/*477*/ "5:3 Epilogo - Il fanatico biondo\n",
	/*478*/ "6:1 Prologo - Chi va l�?\n",
	/*479*/ "6:1 Epilogo - Negli abissi\n",
	/*480*/ "6:2 Prologo - Ancora pi� gi�\n",
	/*481*/ "6:2 Speciale - Virus!\n",
	/*482*/ "6:2 Epilogo - La risalita\n",
	/*483*/ "7:1 Prologo - L'ambasciata\n",
	/*484*/ "7:1 Epilogo - Fuga per la libert�\n",
	/*485*/ "8:1 Prologo - Rapito\n",
	/*486*/ "8:1 Epilogo - Guai in vista\n",
	/*487*/ "9:1 Prologo - Venti di guerra\n",
	/*488*/ "9:1 Epilogo - Fatto!\n",
	/*489*/ "Fine sequenza\n",
	/*490*/ "Cinema\n",
	/*491*/ "Mimesi %d\n",
	/*492*/ "Scegli obiettivo\n",
	/*493*/ "Uccisioni\n",
	/*494*/ NULL,
	/*495*/ NULL,
};

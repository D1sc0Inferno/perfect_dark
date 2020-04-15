#include <ultra64.h>

char *lang[] = {
	/*  0*/ "Succ�s\n",
	/*  1*/ "Inachev�\n",
	/*  2*/ "Echec\n",
	/*  3*/ "\n",
	/*  4*/ "",
	/*  5*/ "Terre:",
	/*  6*/ "   pr�histoire",
	/*  7*/ "rare pr�sente",
	/*  8*/ "Rouge\n",
	/*  9*/ "Jaune\n",
	/* 10*/ "Bleu\n",
	/* 11*/ "Magenta\n",
	/* 12*/ "Cyan\n",
	/* 13*/ "Orange\n",
	/* 14*/ "Rose\n",
	/* 15*/ "Marron\n",
	/* 16*/ "Joanna Combat\n",
	/* 17*/ "Joanna Trench Coat\n",
	/* 18*/ "Joanna Robe\n",
	/* 19*/ "Joanna Robe courte\n",
	/* 20*/ "Joanna H�tesse\n",
	/* 21*/ "Joanna Plong�e\n",
	/* 22*/ "Joanna Scaphandre\n",
	/* 23*/ "Joanna Arctique\n",
	/* 24*/ "Joanna Laborantin.\n",
	/* 25*/ "Elvis\n",
	/* 26*/ "Maian\n",
	/* 27*/ "Daniel Carrington\n",
	/* 28*/ "Carrington smoking\n",
	/* 29*/ "Mr. Blonde\n",
	/* 30*/ "Cassandra De Vries\n",
	/* 31*/ "Trent Easton\n",
	/* 32*/ "Jonathan\n",
	/* 33*/ "Technicien IC H\n",
	/* 34*/ "Technicien IC F\n",
	/* 35*/ "Soldat IC\n",
	/* 36*/ "Commando dataDyne\n",
	/* 37*/ "Femme Garde dataDyne\n",
	/* 38*/ "S�curit� dataDyne\n",
	/* 39*/ "Infanterie dataDyne\n",
	/* 40*/ "Troupes dataDyne\n",
	/* 41*/ "Secr�taire\n",
	/* 42*/ "Tenue de Bureau\n",
	/* 43*/ "Tenue de Bureau\n",
	/* 44*/ "N�gociateur\n",
	/* 45*/ "Sniper dataDyne\n",
	/* 46*/ "Garde G5\n",
	/* 47*/ "Garde SWAT G5\n",
	/* 48*/ "Agent CIA\n",
	/* 49*/ "Agent FBI\n",
	/* 50*/ "Garde Secteur 51\n",
	/* 51*/ "Soldat Secteur 51\n",
	/* 52*/ "Pilote\n",
	/* 53*/ "Ensemble\n",
	/* 54*/ "Garde du Corps NSA\n",
	/* 55*/ "Technicien Homme\n",
	/* 56*/ "Technicien Femelle\n",
	/* 57*/ "Technicien dataDyne\n",
	/* 58*/ "Bio technicien\n",
	/* 59*/ "Garde Alaska\n",
	/* 60*/ "Pilote AF One\n",
	/* 61*/ "Steward\n",
	/* 62*/ "H�tesse\n",
	/* 63*/ "Chef H�tesse\n",
	/* 64*/ "Le pr�sident\n",
	/* 65*/ "Groom NSA\n",
	/* 66*/ "S�curit� Pr�sident\n",
	/* 67*/ "Clone Pr�sident\n",
	/* 68*/ "Garde Pelagic II\n",
	/* 69*/ "Soldat Maian\n",
	/* 70*/ "Smoking\n",
	/* 71*/ "- Pas de Manette branch�e dans le port 1 -",
	/* 72*/ "Eteindre et brancher une manette",
	/* 73*/ "DETECTE",
	/* 74*/ "NON DETECTE",
	/* 75*/ "tm",
	/* 76*/ "N64 EXPANSION PAK",
	/* 77*/ "Identification Produit Nintendo 64\n",
	/* 78*/ "ID Produit:\n",
	/* 79*/ "Code Produit:\n",
	/* 80*/ "Variante:\n",
	/* 81*/ "D�veloppeur:\n",
	/* 82*/ "Perfect Dark\n",
	/* 83*/ "NUS-NPDE-USA\n",
	/* 84*/ "NTSC version 8.7 final\n",
	/* 85*/ "Rare Ltd. (twycross)\n",
	/* 86*/ "Copyright Rare Ltd. 2000\n",
	/* 87*/ "Le Logo Rareware et Perfect Dark sont des trademarks Rare Ltd.\n",
	/* 88*/ "Pr�sent� en Dolby Surround.  Dolby et le double-D\nsont des trademarks des laboratoires Dolby.",
	/* 89*/ "Uses Miles Sound System Copyright 1991-1999 RAD Game Tools Inc.\nMPEG Layer-3 playback supplied with the Miles Sound System from\nRAD Game Tools, Inc. MPEG Layer-3 audio compression technology\nlicensed by Fraunhofer IIS and THOMSON multimedia\n",
	/* 90*/ "",
	/* 91*/ "",
	/* 92*/ "",
	/* 93*/ "rare designs on the future <<<\n",
	/* 94*/ "Published by Rareware.\n",
	/* 95*/ "Perfect Dark\n",
	/* 96*/ "Choisissez votre r�alit�\n",
	/* 97*/ "Nouveau...\n",
	/* 98*/ "Nouvel Agent...\n",
	/* 99*/ "Fichier\n",
	/*100*/ "Copier:\n",
	/*101*/ "Effacer:\n",
	/*102*/ "Effacer notes de jeu...\n",
	/*103*/ "Fichier un joueur agent\n",
	/*104*/ "Fichier param�tres simulateur combat\n",
	/*105*/ "Fichier joueur simulateur combat\n",
	/*106*/ "Fichier PerfcetHead\n",
	/*107*/ "Controller Pak\n",
	/*108*/ "Utiliser cet �diteur pour effacer les notes de jeu\nde votre Controller Pak.\n",
	/*109*/ "Choisir le Controller Pak � �diter:\n",
	/*110*/ "Sortie\n",
	/*111*/ "Cartouche\n",
	/*112*/ "Controller Pak 1\n",
	/*113*/ "Controller Pak 2\n",
	/*114*/ "Controller Pak 3\n",
	/*115*/ "Controller Pak 4\n",
	/*116*/ "Menu Perfect\n",
	/*117*/ "Missions Solo\n",
	/*118*/ "Simulateur de Combat\n",
	/*119*/ "Coop�ratif\n",
	/*120*/ "Contre-Op�ration\n",
	/*121*/ "Cin�ma\n",
	/*122*/ "S�lection Mission\n",
	/*123*/ "Mission 1\n",
	/*124*/ "Mission 2\n",
	/*125*/ "Mission 3\n",
	/*126*/ "Mission 4\n",
	/*127*/ "Mission 5\n",
	/*128*/ "Mission 6\n",
	/*129*/ "Mission 7\n",
	/*130*/ "Mission 8\n",
	/*131*/ "Mission 9\n",
	/*132*/ "Missions sp�ciales\n",
	/*133*/ "Centre dataDyne",
	/*134*/ "- D�fection",
	/*135*/ "Recherche dataDyne",
	/*136*/ "- Enqu�te",
	/*137*/ "Centre dataDyne",
	/*138*/ "- Extraction",
	/*139*/ "Villa Carrington",
	/*140*/ "- Otage",
	/*141*/ "Chicago",
	/*142*/ "- Furtif",
	/*143*/ "Immeuble G5",
	/*144*/ "- Reconnaissance",
	/*145*/ "Secteur 51",
	/*146*/ "- Infiltration",
	/*147*/ "Secteur 51",
	/*148*/ "- Sauvetage",
	/*149*/ "Secteur 51",
	/*150*/ "- Fuite",
	/*151*/ "Base A�rienne",
	/*152*/ "- Espionnage",
	/*153*/ "Air Force One",
	/*154*/ "- Antiterrorisme",
	/*155*/ "Site du Crash",
	/*156*/ "- Confrontation",
	/*157*/ "Pelagic II",
	/*158*/ "- Exploration",
	/*159*/ "Abysses",
	/*160*/ "- Eliminer la menace",
	/*161*/ "Institut Carrington",
	/*162*/ "- D�fense",
	/*163*/ "Croiseur",
	/*164*/ "- Assaut",
	/*165*/ "Ruines Skedars",
	/*166*/ "- Autel Combat",
	/*167*/ "Blonde: la vengeance",
	/*168*/ "SOS Maian",
	/*169*/ "Sauver l'Institut",
	/*170*/ "GUERRE!",
	/*171*/ "Le Duel",
	/*172*/ "Statut\n",
	/*173*/ "Abandonner!\n",
	/*174*/ "Attention\n",
	/*175*/ "Voulez-vous abandonner la mission?\n",
	/*176*/ "Annuler\n",
	/*177*/ "Abandonner\n",
	/*178*/ "Inventaire\n",
	/*179*/ "Armes Disponibles\n",
	/*180*/ "Options\n",
	/*181*/ "Audio\n",
	/*182*/ "Vid�o\n",
	/*183*/ "Contr�le\n",
	/*184*/ "Affichage\n",
	/*185*/ "Triche\n",
	/*186*/ "Sauvegarder jeu\n",
	/*187*/ "Changer d'Agent...\n",
	/*188*/ "Attention\n",
	/*189*/ "Voulez charger un autre agent?\n",
	/*190*/ "Oui\n",
	/*191*/ "Non\n",
	/*192*/ "Options de contr�le\n",
	/*193*/ "Contr�le Joueur 2\n",
	/*194*/ "Style de contr�le\n",
	/*195*/ "Vis�e invers�e\n",
	/*196*/ "Regard t�te\n",
	/*197*/ "Vue t�te\n",
	/*198*/ "Auto-ciblage\n",
	/*199*/ "Contr�le ciblage\n",
	/*200*/ "Retour\n",
	/*201*/ "Maintenu\n",
	/*202*/ "Altern�\n",
	/*203*/ "Options d'affichage\n",
	/*204*/ "Affichage Joueur 2\n",
	/*205*/ "Vis�e sur �cran\n",
	/*206*/ "Toujours montrer cible\n",
	/*207*/ "Montrer port�e zoom\n",
	/*208*/ "Munitions affich�es\n",
	/*209*/ "Montrer fonction arme\n",
	/*210*/ "Paintball\n",
	/*211*/ "Sous-titre\n",
	/*212*/ "Afficher temps mission\n",
	/*213*/ "Retour\n",
	/*214*/ "Options Vid�o\n",
	/*215*/ "Taille �cran\n",
	/*216*/ "Ratio\n",
	/*217*/ "Haute-Res\n",
	/*218*/ "S�paration �cran 2 joueurs\n",
	/*219*/ "Retour\n",
	/*220*/ "Plein\n",
	/*221*/ "Large\n",
	/*222*/ "Cin�ma\n",
	/*223*/ "Normal\n",
	/*224*/ "16:9\n",
	/*225*/ "Horizontal\n",
	/*226*/ "Vertical\n",
	/*227*/ "Options Audio\n",
	/*228*/ "Son\n",
	/*229*/ "Musique\n",
	/*230*/ "Mode Son\n",
	/*231*/ "Retour\n",
	/*232*/ "Mono",
	/*233*/ "St�r�o",
	/*234*/ "Casque",
	/*235*/ "Surround",
	/*236*/ "Contr�le\n",
	/*237*/ "Simple\n",
	/*238*/ "Double\n",
	/*239*/ "1.1",
	/*240*/ "1.2",
	/*241*/ "1.3",
	/*242*/ "1.4",
	/*243*/ "2.1",
	/*244*/ "2.2",
	/*245*/ "2.3",
	/*246*/ "2.4",
	/*247*/ "Briefing\n",
	/*248*/ "S�lection Difficult�\n",
	/*249*/ "Difficult�\n",
	/*250*/ "Meilleur Temps\n",
	/*251*/ "Agent\n",
	/*252*/ "Agent Sp�cial\n",
	/*253*/ "Agent Perfect\n",
	/*254*/ "Annuler\n",
	/*255*/ "Options Coop�ratif\n",
	/*256*/ "Radar Actif\n",
	/*257*/ "Bin�me Prot�g�\n",
	/*258*/ "Bin�me Perfect\n",
	/*259*/ "Continuer\n",
	/*260*/ "Annuler\n",
	/*261*/ "Humain",
	/*262*/ "1 Simulant",
	/*263*/ "2 Simulants",
	/*264*/ "3 Simulants",
	/*265*/ "4 Simulants",
	/*266*/ "Options Contre-Op�ration\n",
	/*267*/ "Radar Actif\n",
	/*268*/ "Contre-Op�ration\n",
	/*269*/ "Continuer\n",
	/*270*/ "Annuler\n",
	/*271*/ "Joueur 1",
	/*272*/ "Joueur 2",
	/*273*/ "Briefing\n",
	/*274*/ "Accepter\n",
	/*275*/ "Refuser\n",
	/*276*/ "Succ�s\n",
	/*277*/ "Echec\n",
	/*278*/ "Statut Mission:\n",
	/*279*/ "Statut Agent:\n",
	/*280*/ "Temps Mission:\n",
	/*281*/ "Arme de pr�dilection:\n",
	/*282*/ "Victimes:\n",
	/*283*/ "Pr�cision:\n",
	/*284*/ "Total de tir:\n",
	/*285*/ "    Tirs T�te:\n",
	/*286*/ "    Tirs Corps:\n",
	/*287*/ "    Tirs Membre:\n",
	/*288*/ "    Autres:\n",
	/*289*/ "Appuyer sur START\n",
	/*290*/ "D�c�d�\n",
	/*291*/ "Actif\n",
	/*292*/ "Vir�\n",
	/*293*/ "Echec\n",
	/*294*/ "Termin�\n",
	/*295*/ "Abandon\n",
	/*296*/ "Recommencer",
	/*297*/ "Prochaine Mission",
	/*298*/ "Accepter\n",
	/*299*/ "Refuser\n",
	/*300*/ "Objectifs\n",
	/*301*/ "Appuyer sur START\n",
	/*302*/ "Menu petit mais Perfect\n",
	/*303*/ "Simulateur de Combat\n",
	/*304*/ "Entra�nement\n",
	/*305*/ "Audio / Vid�o\n",
	/*306*/ "Changer d'Agent\n",
	/*307*/ "Audio / Visuel\n",
	/*308*/ "Son\n",
	/*309*/ "Musique\n",
	/*310*/ "Mode Son\n",
	/*311*/ "Ratio\n",
	/*312*/ "Retour\n",
	/*313*/ "< Vide >\n",
	/*314*/ "SUP",
	/*315*/ "MAJ",
	/*316*/ "ANNULER",
	/*317*/ "OK",
	/*318*/ "Visages de Simulateurs de Combat\n",
	/*319*/ "Visages Mission\n",
	/*320*/ "Erreur\n",
	/*321*/ "Annuler\n",
	/*322*/ "Controller Pak non d�tect�.\n",
	/*323*/ "Fichier non sauvegard�.\n",
	/*324*/ "Fichier non chargeable.\n",
	/*325*/ "Impossible d'effacer le fichier.\n",
	/*326*/ "Plus de m�moire.\n",
	/*327*/ "Ce joueur est d�j�\ncharg� pour cette partie.\n",
	/*328*/ "a �t� enlev�.\n",
	/*329*/ "Controller Pak est d�fectueux ou mal ins�r�.\n",
	/*330*/ "Effacement des notes �chou�.\n",
	/*331*/ "Erreur de chargement de jeu\n",
	/*332*/ "Erreur de sauvegarde de jeu\n",
	/*333*/ "Erreur de chargement de joueur\n",
	/*334*/ "Erreur de sauvegarde de joueur\n",
	/*335*/ "Erreur chargement PerfectHead\n",
	/*336*/ "Erreur sauvegarde PerfectHead\n",
	/*337*/ "Erreur de lecture de fichier\n",
	/*338*/ "Erreur d'�criture de fichier\n",
	/*339*/ "Erreur\n",
	/*340*/ "Echec Effacement\n",
	/*341*/ "Impossible d'effacer le fichier.\n",
	/*342*/ "- V�rifier que le Controller Pak est\nins�r� correctement.\n",
	/*343*/ "Annuler\n",
	/*344*/ "Il n'y a plus de place.\n",
	/*345*/ "Cool!\n",
	/*346*/ "Fichier sauvegard�.\n",
	/*347*/ "OK\n",
	/*348*/ "Une erreur est survenue\npendant la sauvegarde.\n",
	/*349*/ "Essayer encore\n",
	/*350*/ "Sauvegarder dans un autre emplacement\n",
	/*351*/ "Annuler\n",
	/*352*/ "Une erreur est survenue\npendant le chargement.\n",
	/*353*/ "Essayer encore\n",
	/*354*/ "Annuler\n",
	/*355*/ "Need Space For Head\n",
	/*356*/ "Choose a head to load over:\n",
	/*357*/ "OK\n",
	/*358*/ "Cancel\n",
	/*359*/ "Sauvegarde\n",
	/*360*/ "Voulez-vous sauvegarder\nvotre fichier ailleurs?\n",
	/*361*/ "Oui\n",
	/*362*/ "Non\n",
	/*363*/ "Ins�rez le\nController Pak\ncontenant: %s dans une manette.\n",
	/*364*/ "Ins�rez le\nController Pak\nde vos sauvegardes\n dans une manette.\n",
	/*365*/ "OK\n",
	/*366*/ "Annuler\n",
	/*367*/ "S�lectionner emplacement\n",
	/*368*/ "O�\n",
	/*369*/ "Espaces\n",
	/*370*/ "Effacer Fichiers...\n",
	/*371*/ "Annuler\n",
	/*372*/ "Satur�",
	/*373*/ "Copier fichiers\n",
	/*374*/ "S�lectionner fichier � copier:\n",
	/*375*/ "Bouton B pour sortir.\n",
	/*376*/ "Effacer Fichier\n",
	/*377*/ "S�lectionner fichier � effacer:\n",
	/*378*/ "Bouton B pour sortir.\n",
	/*379*/ "Attention\n",
	/*380*/ "Etes-vous s�r de\nvouloir effacer ce fichier?\n",
	/*381*/ "Annuler\n",
	/*382*/ "OK\n",
	/*383*/ "Effacer Notes\n",
	/*384*/ "Etes-vous s�r\nde vouloir effacer\nces notes?\n",
	/*385*/ "Non\n",
	/*386*/ "Oui\n",
	/*387*/ "Notes de jeu\n",
	/*388*/ "Effacer notes de jeu:\n",
	/*389*/ "Note\n",
	/*390*/ "Pages\n",
	/*391*/ "Bouton B pour sortir.\n",
	/*392*/ "Vide\n",
	/*393*/ "--\n",
	/*394*/ "Pages Libres: \n",
	/*395*/ "Pages libres: %d\n",
	/*396*/ "Pages utilis�es: \n",
	/*397*/ "Pages utilis�es: %d\n",
	/*398*/ "Il y a d�j� une sauvegarde Perfect Dark sur ce Controller Pak.\n",
	/*399*/ "Il y a suffisement de place pour sauvegarder Perfect Dark.\n",
	/*400*/ "Le Controller Pak est trop plein pour sauver: 1 note\net 28 pages requises pour sauver.\n",
	/*401*/ "Entrer Nom Agent\n",
	/*402*/ "Nouveau...\n",
	/*403*/ "Nouvel Agent...\n",
	/*404*/ "Nouvelle Recrue",
	/*405*/ "Temps Mission:",
	/*406*/ "Challenge 1",
	/*407*/ "Challenge 2",
	/*408*/ "Challenge 3",
	/*409*/ "Challenge 4",
	/*410*/ "Challenge 5",
	/*411*/ "Challenge 6",
	/*412*/ "Challenge 7",
	/*413*/ "Challenge 8",
	/*414*/ "Challenge 9",
	/*415*/ "Challenge 10",
	/*416*/ "Challenge 11",
	/*417*/ "Challenge 12",
	/*418*/ "Challenge 13",
	/*419*/ "Challenge 14",
	/*420*/ "Challenge 15",
	/*421*/ "Challenge 16",
	/*422*/ "Challenge 17",
	/*423*/ "Challenge 18",
	/*424*/ "Challenge 19",
	/*425*/ "Challenge 20",
	/*426*/ "Challenge 21",
	/*427*/ "Challenge 22",
	/*428*/ "Challenge 23",
	/*429*/ "Challenge 24",
	/*430*/ "Challenge 25",
	/*431*/ "Challenge 26",
	/*432*/ "Challenge 27",
	/*433*/ "Challenge 28",
	/*434*/ "Challenge 29",
	/*435*/ "Challenge 30",
	/*436*/ "Sp�cial\n",
	/*437*/ "Intro\n",
	/*438*/ "Mission 1 - Centre dataDyne\n",
	/*439*/ "Mission 2 - Villa Carrington\n",
	/*440*/ "Mission 3 - Immeuble G5\n",
	/*441*/ "Mission 4 - Secteur 51\n",
	/*442*/ "Mission 5 - Air Force One\n",
	/*443*/ "Mission 6 - Pelagic II\n",
	/*444*/ "Mission 7 - Institut Carrington\n",
	/*445*/ "Mission 8 - Croiseur Skedar\n",
	/*446*/ "Mission 9 - Ruines Skedars\n",
	/*447*/ "Finale\n",
	/*448*/ "Jouer Tous\n",
	/*449*/ "Intro\n",
	/*450*/ "1:1 Intro - Op�ration Dark\n",
	/*451*/ "1:1 Conclusion - Descente rapide\n",
	/*452*/ "1:2 Intro - En bas\n",
	/*453*/ "1:2 Conclusion - Bonjour docteur\n",
	/*454*/ "1:3 Intro - Bonne nuit\n",
	/*455*/ "1:3 Conclusion - Tu vas o�, toi?\n",
	/*456*/ "2:1 Intro - N�gocie-moi �a!\n",
	/*457*/ "2:1 Intro 2 - A un fil\n",
	/*458*/ "2:1 Conclusion - Carrington sauv�\n",
	/*459*/ "3:1 Intro - Sombre all�e\n",
	/*460*/ "3:1 Conclusion - G5 investi\n",
	/*461*/ "3:2 Intro - Guns 'n' Poses\n",
	/*462*/ "3:2 Sp�cial - Conspiration\n",
	/*463*/ "3:2 Conclusion - Sortie de secours\n",
	/*464*/ "4:1 Intro - Sale vid�o\n",
	/*465*/ "4:1 Conclusion - A n�gliger\n",
	/*466*/ "4:2 Intro - Perles de sagesse\n",
	/*467*/ "4:2 Conclusion - Sous la lame\n",
	/*468*/ "4:3 Intro - Gaz!\n",
	/*469*/ "4:3 Sp�cial - R�veil d'Elvis\n",
	/*470*/ "4:3 Conclusion - Fuite\n",
	/*471*/ "5:1 Intro - Haute altitude\n",
	/*472*/ "5:1 Conclusion - D�collage\n",
	/*473*/ "5:2 Intro - Derni�re chance\n",
	/*474*/ "5:2 Sp�cial - Arrimage\n",
	/*475*/ "5:2 Conclusion - Plus de choix\n",
	/*476*/ "5:3 Intro - Horizons rouges\n",
	/*477*/ "5:3 Conclusion - Monstre blond\n",
	/*478*/ "6:1 Intro - Infiltration\n",
	/*479*/ "6:1 Conclusion - Profondeurs\n",
	/*480*/ "6:2 Intro - Plus profond\n",
	/*481*/ "6:2 Sp�cial - Virus!\n",
	/*482*/ "6:2 Conclusion - En arri�re!\n",
	/*483*/ "7:1 Intro - Salut de victoire\n",
	/*484*/ "7:1 Conclusion - Course libert�\n",
	/*485*/ "8:1 Intro - Piqu�!\n",
	/*486*/ "8:1 Conclusion - Des ennuis\n",
	/*487*/ "9:1 Intro - Air calme\n",
	/*488*/ "9:1 Conclusion - J'te tiens!\n",
	/*489*/ "Fin de s�quence\n",
	/*490*/ "Cin�ma\n",
	/*491*/ "Occulteur %d\n",
	/*492*/ "Choisir Cible\n",
	/*493*/ "Score de Frags\n",
	/*494*/ NULL,
	/*495*/ NULL,
};

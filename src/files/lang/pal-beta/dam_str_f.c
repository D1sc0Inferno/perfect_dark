#include <ultra64.h>

char *lang[] = {
	/*  0*/ "|Briefing - \n\nLes conspirateurs ont d�tourn� le Pelagic II et ont entam� d'importantes op�rations sous-marines dans l'Oc�an Pacifique. La dataDyne et leurs myst�rieux alli�s semblent �tre impliqu�s dans une manoeuvre de coop�ration.\n\n|Carrington - \n\nBien que cette action semble maladroite, elle met en �vidence l'importance de cette zone sous-marine aux yeux de la dataDyne et de ses alli�s. Contrecarrez du mieux que vous pouvez l'op�ration tout en respectant notre protocole de sauvegarde des civils.\n\n|Objectif 1: - D�sactiver source d'�nergie principale\n\nLa coupure du g�n�rateur principal fera d�river le vaisseau de sa zone d'op�ration mais provoqua des blackouts dans les sections secondaires de l'appareil. Utilisez un scanner rayons X pour trouver les interrupteurs sur le g�n�rateur.\n\n|Objectif 2: - S�curiser labos et donn�es de recherche\n\nNous voulons les informations recueillies par la dataDyne sur ce projet. S�curisez les labos du pont scientifique et souvenez-vous d'assommer les scientifiques et les techniciens du site. Nous les interrogerons plus tard.\n\n|Objectif 3: - D�sactiver GPS et Auto-pilote\n\nD�brancher le syst�me de localisation GPS et l'auto-pilote du vaisseau le fera s'�carter de la station. Si seulement l'un des deux est �teint, les op�rations de plong�e ne seront pas perturb�es et suivront leur cours.\n\n|Objectif 4: - Activer l'ascenseur du sas\n\nCeci enclenchera le pilote automatique du submersible, ramenant celui-ci pour vous et Elvis. Les commandes se trouvent dans le hangar du sous-marin.\n\n|Objectif 5: - Retrouver Elvis et s'enfuir avec lui\n\nTrouvez Elvis et retournez au sas pour pr�parer le submersible et votre �quipement pour une plong�e.\n\nFIN\n",
	/*  1*/ "Vaisseau Cetan\n",
	/*  2*/ "|Briefing - \n\nLes conspirateurs ont d�tourn� le Pelagic II et ont entam� d'importantes op�rations sous-marines dans l'Oc�an Pacifique. La dataDyne et leurs myst�rieux alli�s semblent �tre impliqu�s dans une manoeuvre de coop�ration.\n\n|Carrington - \n\nBien que cette action semble maladroite, elle met en �vidence l'importance de cette zone sous-marine aux yeux de la dataDyne et de ses alli�s. Contrecarrez du mieux que vous pouvez l'op�ration tout en respectant notre protocole de sauvegarde des civils.\n\n|Objectif 1: - D�sactiver source d'�nergie principale\n\nLa coupure du g�n�rateur principal fera d�river le vaisseau de sa zone d'op�ration mais provoqua des blackouts dans les sections secondaires de l'appareil. Utilisez un scanner rayons X pour trouver les interrupteurs sur le g�n�rateur.\n\n|Objectif 2: - D�sactiver GPS et Auto-pilote\n\nD�brancher le syst�me de localisation GPS et l'auto-pilote du vaisseau le fera s'�carter de la station. Si seulement l'un des deux est �teint, les op�rations de plong�e ne seront pas perturb�es et suivront leur cours. Epargnez les civils.\n\n|Objectif 3: - Activer l'ascenseur du sas\n\nCeci enclenchera le pilote automatique du submersible, ramenant celui-ci pour vous et Elvis. Les commandes se trouvent dans le hangar du sous-marin.\n\n|Objectif 4: - Retrouver Elvis et s'enfuir avec lui\n\nTrouvez Elvis et retournez au sas pour pr�parer le submersible et votre �quipement pour une plong�e.\n\nFIN\n",
	/*  3*/ "|Briefing - \n\nLes conspirateurs ont d�tourn� le Pelagic II et ont entam� d'importantes op�rations sous-marines dans l'Oc�an Pacifique. La dataDyne et leurs myst�rieux alli�s semblent �tre impliqu�s dans une manoeuvre de coop�ration.\n\n|Carrington - \n\nBien que cette action semble maladroite, elle met en �vidence l'importance de cette zone sous-marine aux yeux de la dataDyne et de ses alli�s. Contrecarrez du mieux que vous pouvez l'op�ration tout en respectant notre protocole de sauvegarde des civils.\n\n|Objectif 1: - D�sactiver source d'�nergie principale\n\nLa coupure du g�n�rateur principal fera d�river le vaisseau de sa zone d'op�ration mais provoqua des blackouts dans les sections secondaires de l'appareil. Utilisez un scanner rayons X pour trouver les interrupteurs sur le g�n�rateur.\n\n|Objectif 2: - D�sactiver GPS et Auto-pilote\n\nD�brancher le syst�me de localisation GPS et l'auto-pilote du vaisseau le fera s'�carter de la station. Si seulement l'un des deux est �teint, les op�rations de plong�e ne seront pas perturb�es et suivront leur cours. Epargnez les civils.\n\n|Objectif 3: - Retrouver Elvis et s'enfuir avec lui\n\nTrouvez Elvis et retournez au sas pour pr�parer le submersible et votre �quipement pour une plong�e.\n\nFIN\n",
	/*  4*/ "\n",
	/*  5*/ "D�sactiver GPS et Auto-pilote\n",
	/*  6*/ "D�sactiver source d'�nergie principale\n",
	/*  7*/ "S�curiser labos et donn�es de recherche\n",
	/*  8*/ "Activer l'ascenseur du sas\n",
	/*  9*/ "Retrouver Elvis et s'enfuir avec lui\n",
	/* 10*/ "On sabote les moteurs et le vaisseau \nd�rivera... Parfait!\n",
	/* 11*/ "Le sous-marin doit �tre contr�l� d'ici.\n",
	/* 12*/ "Sans auto-pilote ni GPS, l'appareil \ns'�loignera de la station.\n",
	/* 13*/ "Ils ne pourront plus continuer l'op�ration \nsans �nergie.\n",
	/* 14*/ "Syst�me auto-pilote d�sactiv�.\n",
	/* 15*/ "Syst�me GPS d�sactiv�.\n",
	/* 16*/ "Objet crucial d�truit.\n",
	/* 17*/ "Porte de commande d'arr�t du r�acteur ouverte.\n",
	/* 18*/ "R�acteur d�sactiv�.\n",
	/* 19*/ "Centre de contr�le de plong�e localis�.\n",
	/* 20*/ "Personnel crucial abattu.\n",
	/* 21*/ "Donn�es de recherche s�curis�es.\n",
	/* 22*/ "\n",
	/* 23*/ "\n",
	/* 24*/ "Disque de recherche\n",
	/* 25*/ "Un disque de recherche\n",
	/* 26*/ "Disque de recherche obtenu.\n",
	/* 27*/ "Personnel crucial abattu.\n",
	/* 28*/ "Porte ascenseur d�verrouill�e.\n",
	/* 29*/ "Ascenseur activ�.\n",
	/* 30*/ "Op�ration refus�e - portes du hangar ferm�es.\n",
	/* 31*/ "S�quence de d�verrouillage r�initialis�e.\n",
	/* 32*/ "Vas-y. Je s�curise le p�rim�tre.\nOn se retrouve plus tard.\n",
	/* 33*/ "Elvis a �t� abattu.\n",
	/* 34*/ "Qu'est-ce que tu faisais? Suis-moi...\nOn d�campe.\n",
	/* 35*/ "Des civils ont �t� abattus.\n",
	/* 36*/ "Objet crucial d�truit.\n",
	/* 37*/ "Alarme activ�e.\n",
	/* 38*/ "Alarme d�sactiv�e.\n",
	/* 39*/ "Bien. L'op�ration de plong�e a �t� annul�e � la surface.\nIl est temps de piquer une t�te.\n",
	/* 40*/ "J'esp�re que le gouvernement ne compte pas utiliser ce vaisseau tout de suite.\n",
	/* 41*/ "On y est all� un peu fort, non?\n",
	/* 42*/ "Mais non.\n",
	/* 43*/ "D�branche ce truc.\n",
	/* 44*/ "Eteins-moi �a.\n",
	/* 45*/ "Je vais l'�teindre.\n",
	/* 46*/ "Ne me faites pas de mal!\n",
	/* 47*/ "Crevez, charognes!\n",
};

#include <ultra64.h>

char *lang[] = {
	/*  0*/ "|Briefing - \n\nUne fois dans le QG du G5, rendez-vous au centre du b�timent o� la rencontre devrait avoir lieu. Obtenez une preuve visuelle de cette rencontre et partez le plus vite possible.\n\n|Carrington - \n\nL'immeuble G5 est prot�g� par un syst�me d'alarme. Prenez garde � ne pas �tre rep�r�e par les vigiles ou ils l'activeront, ce qui inciterait les conspirateurs � annuler leur rencontre. Proc�dez donc avec la plus grande prudence, Joanna.\n\n|Objectif 1: - D�sactiver le champ d'isolement\n\nUn appareil dans la zone du garage de l'immeuble emp�che tout syst�me d'enregistrement de fonctionner. Une fois coup�e, la Camspy pourra transmettre les donn�es au QG.\n\n|Objectif 2: - D�sactiver les syst�mes de grilles laser\n\nUn examen du tableau �nerg�tique du b�timent G5 indique la pr�sence d'un r�seau de grilles laser. Celles-ci sont plac�es pour barrer la route vers la salle de r�union. D�sactivez-les pour ouvrir la voie.\n\n|Objectif 3: - Holographier les conspirateurs\n\nL'appareil CamSpy est un excellent moyen d'enregistrer la rencontre sans alerter De Vries ou les autres conspirateurs.\n\n|Objectif 4: - R�cup�rer la sauvegarde dans le coffre\n\nLe Dr. Caroll a inform� Daniel de la pr�sence d'une sauvegarde de sa personnalit� gard�e dans un coffre de l'immeuble G5. Si nous obtenons cette sauvegarde, la personnalit� du Dr. Caroll pourra �tre restaur�e ult�rieurement.\n\n|Objectif 5: - Sortir de l'immeuble\n\nD�truisez la porte condamn�e pour cr�er une sortie. Souvenez-vous du niveau ext�rieur de la sortie de secours pour gagner du temps.\n\nFIN\n",
	/*  1*/ "IMMEUBLE G5\n",
	/*  2*/ "|Briefing - \n\nUne fois dans le QG du G5, rendez-vous au centre du b�timent o� la rencontre devrait avoir lieu. Obtenez une preuve visuelle de cette rencontre et partez le plus vite possible.\n\n|Carrington - \n\nL'immeuble G5 est prot�g� par un syst�me d'alarme. Prenez garde � ne pas �tre rep�r�e par les vigiles ou ils l'activeront, ce qui inciterait les conspirateurs � annuler leur rencontre. Proc�dez donc avec la plus grande prudence, Joanna.\n\n|Objectif 1: - D�sactiver les syst�mes de grille laser\n\nUn examen du tableau �nerg�tique du b�timent G5 indique la pr�sence d'un r�seau de grilles laser. Celles-ci sont plac�es pour barrer la route vers la salle de r�union. D�sactivez-les pour ouvrir la voie.\n\n|Objectif 2: - Holographier les conspirateurs\n\nL'appareil CamSpy est un excellent moyen d'enregistrer la rencontre sans alerter De Vries ou les autres conspirateurs.\n\n|Objectif 3: - R�cup�rer la sauvegarde dans le coffre\n\nLe Dr. Caroll a inform� Daniel de la pr�sence d'une sauvegarde de sa personnalit� gard�e dans un coffre de l'immeuble G5. Si nous obtenons cette sauvegarde, la personnalit� du Dr. Caroll pourra �tre restaur�e ult�rieurement.\n\n|Objectif 4: - Sortir de l'immeuble\n\nD�truisez la porte condamn�e pour cr�er une sortie. Souvenez-vous du niveau ext�rieur de la sortie de secours pour gagner du temps.\n\nFIN\n",
	/*  3*/ "|Briefing - \n\nUne fois dans le QG du G5, rendez-vous au centre du b�timent o� la rencontre devrait avoir lieu. Obtenez une preuve visuelle de cette rencontre et partez le plus vite possible.\n\n|Carrington - \n\nL'immeuble G5 est prot�g� par un syst�me d'alarme. Prenez garde � ne pas �tre rep�r�e par les vigiles ou ils l'activeront, ce qui inciterait les conspirateurs � annuler leur rencontre. Proc�dez donc avec la plus grande prudence, Joanna.\n\n|Objectif 1: - Holographier les conspirateurs\n\nL'appareil CamSpy est un excellent moyen d'enregistrer la rencontre sans alerter De Vries ou les autres conspirateurs.\n\n|Objectif 2: - R�cup�rer la sauvegarde dans le coffre\n\nLe Dr. Caroll a inform� Daniel de la pr�sence d'une sauvegarde de sa personnalit� gard�e dans un coffre de l'immeuble G5. Si nous obtenons cette sauvegarde, la personnalit� du Dr. Caroll pourra �tre restaur�e ult�rieurement.\n\n|Objectif 3: - Sortir de l'immeuble\n\nD�truisez la porte condamn�e pour cr�er une sortie. Souvenez-vous du niveau ext�rieur de la sortie de secours pour gagner du temps.\n\nFIN\n",
	/*  4*/ NULL,
	/*  5*/ NULL,
	/*  6*/ NULL,
	/*  7*/ NULL,
	/*  8*/ NULL,
	/*  9*/ "D�sactiver le champ d'isolement\n",
	/* 10*/ "D�sactiver les syst�mes de grilles laser\n",
	/* 11*/ "Holographier les conspirateurs\n",
	/* 12*/ "R�cup�rer la sauvegarde dans le coffre\n",
	/* 13*/ "Sortir de l'immeuble\n",
	/* 14*/ "Obtenir carte alpha.\n",
	/* 15*/ "Garde: \n",
	/* 16*/ "Carte Niveau 1\n",
	/* 17*/ "Carte du garde\n",
	/* 18*/ "Carte du garde obtenue.\n",
	/* 19*/ "Obtenir carte alpha.\n",
	/* 20*/ "Garde: \n",
	/* 21*/ "Carte Niveau 2\n",
	/* 22*/ "Carte du garde\n",
	/* 23*/ "Carte du garde obtenue.\n",
	/* 24*/ "Objet crucial d�truit.\n",
	/* 25*/ "G�n�rateur champ d'isolement coup�.\n",
	/* 26*/ "G�n�rateur ne peut �tre rallum�.\n",
	/* 27*/ "Unit� grilles laser coup�e.\n",
	/* 28*/ "Unit� grilles laser activ�e.\n",
	/* 29*/ "Tous syst�mes grilles laser coup�s.\n",
	/* 30*/ "Obtenir cassette DAT.\n",
	/* 31*/ "Dr. Caroll: \n",
	/* 32*/ "Disque sauvegarde\n",
	/* 33*/ "Disque sauvegarde\n",
	/* 34*/ "Disque sauvegarde obtenu.\n",
	/* 35*/ "D�codeur porte fix� sur panneau d'acc�s.\n",
	/* 36*/ "Commandes piratages lanc�es.\n",
	/* 37*/ "D�codage porte achev� - porte d�verrouill�e.\n",
	/* 38*/ "ALERTE INTRUSION - s�curit� dans l'abri.\n",
	/* 39*/ "D�codeur porte plac� correctement.\n",
	/* 40*/ "D�codeur porte mal plac�.\n",
	/* 41*/ "Conspirateurs alert�s.\n",
	/* 42*/ "Alarme activ�e.\n",
	/* 43*/ "Alarme d�sactiv�e.\n",
	/* 44*/ "Porte du coffre ferm�e.\n",
	/* 45*/ "D�codeur porte fix�.\n",
	/* 46*/ "Obtenir explosif porte.\n",
	/* 47*/ "Dr. Caroll: \n",
	/* 48*/ "Explosif porte\n",
	/* 49*/ "Explosif porte\n",
	/* 50*/ "Explosif porte obtenu.\n",
	/* 51*/ "Objectifs incomplets - MISSION ECHOUEE.\n",
	/* 52*/ "MISSION ACCOMPLIE\n",
	/* 53*/ "Mouchard plac� correctement.\n",
	/* 54*/ "Mouchard mal plac�.\n",
	/* 55*/ "Obtenir CamSpy.\n",
	/* 56*/ "Dr. Caroll: \n",
	/* 57*/ "CamSpy\n",
	/* 58*/ "Une CamSpy\n",
	/* 59*/ "CamSpy obtenue.\n",
	/* 60*/ "C'est impossible de passer avec tous \nces lasers activ�s.\n",
	/* 61*/ "La salle de r�union doit �tre droit devant. \nIl est temps d'utiliser la CamSpy.\n",
	/* 62*/ "La combinaison du coffre est tr�s complexe. \nLe d�codeur va mettre plus de temps.\n",
	/* 63*/ "Il faut partir maintenant! Je retourne vite � \nla porte de tout � l'heure.\n",
	/* 64*/ "Objet crucial d�truit.\n",
	/* 65*/ "Reculez, Joanna. Nous allons vous ouvrir \nun passage.\n",
	/* 66*/ "\n",
	/* 67*/ "\n",
	/* 68*/ "D�tonateur\n",
	/* 69*/ "D�tonateur\n",
	/* 70*/ "D�tonateur obtenue.\n",
	/* 71*/ "CamSpy d�truite - abandonner la mission.\n",
	/* 72*/ "Nous avons r�cup�r� le Sapiens chez Carrington \net chang� son programme. Il n'a plus de \npersonnalit�. Cela �vitera de futurs \nincidents.\n",
	/* 73*/ "Cela r�duira son efficacit�. Mon �quipe le \nm�nera au centre. Ils prendront donc \ndes risques inutiles. Vous auriez d� \npr�voir ce d�veloppement de conscience chez \nle Sapiens.\n",
	/* 74*/ "Comment pr�voir une chose pareille?! \nEt pourquoi suis-je la seule � porter \nle chapeau? Et lui alors?\n",
	/* 75*/ "Le Pr�sident a-t-il refus� votre demande \nde pr�t du Pelagic II?\n",
	/* 76*/ "Pensiez-vous avoir tant d'influence \nsur lui?\n",
	/* 77*/ "Non! J'ai peut-�tre sous-estim� son c�t� \nint�gre. Mais nous avons un plan de \nsecours. Nous agirons d�s que l'�quipe \npr�sidentielle arrivera � la base a�rienne. \nJe n'ai besoin que d'un �chantillon de la \npeau du Pr�sident.\n",
	/* 78*/ "Pff! En admettant que vous ne fassiez pas \ntout foirer. Si Carrington en apprend \nsuffisamment, il appellera des renforts.\n",
	/* 79*/ "Mr. Carrington ne b�n�ficiera d'aucune aide \next�rieure. L'�quipement que vous nous \navez offert est install� au Nevada et est \nop�rationnel. Nous pourrons ainsi intercepter \nleurs appareils.\n",
	/* 80*/ "Notre dispositif fonctionne donc \ncorrectement? Bien. Notre philosophie \nest de d�truire tout ce qui ne veut pas \nfonctionner. Souvenez-vous-en pendant \nl'ex�cution de votre 'plan de secours.'\n",
	/* 81*/ "Agent Dark au rapport! Pr�parez-vous � \nrecevoir les donn�es de la r�union. \nDemande prioritaire d'une �quipe de \nl'Institut pour prot�ger le Pr�sident \navant son d�part pour l'Alaska.\n",
	/* 82*/ "Nous n'avons pas le temps, Agent Dark. \nIl y a du nouveau depuis le silence \nradio. L'appareil transportant les \n'amis' dont je parlais plus t�t a �t� \nabattu au-dessus du Nevada. Le tir \nprovenait du Secteur 51, l� o� les \nrescap�s et les d�bris ont d� �tre amen�s. \nRevenez au poste et pr�parez-vous \npour un d�part imminent. \nCarrington, termin�.\n",
	/* 83*/ "Secteur 51? Et le Pr�sident alors?\n",
};

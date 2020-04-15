#include <ultra64.h>

char *lang[] = {
	/*  0*/ "|Briefing - \n\nAssomm�e lors de l'�vacuation de l'Institut Carrington, Joanna reprend ses esprits et se retrouve prisonni�re d'un croiseur skedar.\n\n|Carrington - Non disponible.\n\n|Elvis - \n\nJoanna! Je file le croiseur qui te retient! Deux protecteurs maians de la Maison Blanche m'accompagnent. Si tu peux nous faire monter � bord, nous pourrons t'aider � prendre le vaisseau d'assaut.\n\n|Objectif 1: - Annuler le syst�me de bouclier\n\nLe bouclier enraye toute manoeuvre d'accostage. Baissez les boucliers et Elvis et ses compagnons pourront entamer leur approche.\n\n|Objectif 2: - Ouvrir les portes du hangar\n\nLe syst�me d'accostage est d'habitude contr�l� en auto: il a d� �tre d�vi� depuis le pont. Ouvrez les portes en vous servant des commandes au-dessus du hangar et Elvis pourra accomplir son accostage.\n\n|Objectif 3: - Acc�der aux syst�mes de navigation\n\nMenez Elvis � la carte stellaire et il en d�duira la destination du croiseur. La position des bases Skedars peut aussi y figurer: cette information peut �tre d'une grande valeur aux yeux de la flotte maian, en vue d'une possible attaque.\n\n|Objectif 4: - Saboter les syst�mes de propulsion\n\nLe plan d'assaut du croiseur risque d'�chouer si le commandant change de cap. Trafiquez les moteurs pour que l'appareil s'arr�te.\n\n|Objectif 5: - Contr�ler le pont\n\nUne fois le pont pris, le vaisseau ne sera plus sous le contr�le des Skedars. Seul le commandant doit rester.\n\nFIN\n",
	/*  1*/ "SKEDAR ASSAULT SHIP\n",
	/*  2*/ "|Briefing - \n\nAssomm�e lors de l'�vacuation de l'Institut Carrington, Joanna reprend ses esprits et se retrouve prisonni�re d'un croiseur Skedar.\n\n|Carrington - Non disponible.\n\n|Elvis - \n\nJoanna! Je file le croiseur qui te retient! Deux protecteurs maians de la Maison Blanche m'accompagnent. Si tu peux nous faire monter � bord, nous pourrons t'aider � prendre le vaisseau d'assaut.\n\n|Objectif 1: - Annuler le syst�me de bouclier\n\nLe bouclier enraye toute manoeuvre d'accostage. Baissez les boucliers et Elvis et ses compagnons pourront entamer leur approche.\n\n|Objectif 2: - Acc�der aux syst�mes de navigation\n\nMenez Elvis � la carte stellaire et il en d�duira la destination du croiseur. La position des bases Skedars peut aussi y figurer: cette information peut �tre d'une grande valeur aux yeux de la flotte maian, en vue d'une possible attaque.\n\n|Objectif 3: - Saboter les syst�mes de propulsion\n\nLe plan d'assaut du croiseur risque d'�chouer si le commandant change de cap. Trafiquez les moteurs pour que l'appareil s'arr�te.\n\n|Objectif 4: - Contr�ler le pont\n\nUne fois le pont pris, le vaisseau ne sera plus sous le contr�le des Skedars. Seul le commandant doit rester.\n\nFIN\n",
	/*  3*/ "|Briefing - \n\nAssomm�e lors de l'�vacuation de l'Institut Carrington, Joanna reprend ses esprits et se retrouve prisonni�re d'un croiseur Skedar.\n\n|Carrington - Non disponible.\n\n|Elvis - \n\nJoanna! Je file le croiseur qui te retient! Deux protecteurs maians de la Maison Blanche m'accompagnent. Si tu peux nous faire monter � bord, nous pourrons t'aider � prendre le vaisseau d'assaut.\n\n|Objectif 1: - Annuler le syst�me de bouclier\n\nLe bouclier enraye toute manoeuvre d'accostage. Baissez les boucliers et Elvis et ses compagnons pourront entamer leur approche.\n\n|Objectif 2: - Acc�der aux syst�mes de navigation\n\nMenez Elvis � la carte stellaire et il en d�duira la destination du croiseur. La position des bases Skedars peut aussi y figurer: cette information peut �tre d'une grande valeur aux yeux de la flotte maian, en vue d'une possible attaque.\n\n|Objectif 3: - Contr�ler le pont\n\nUne fois le pont pris, le vaisseau ne sera plus sous le contr�le des Skedars. Seul le commandant doit rester.\n\nFIN\n",
	/*  4*/ "\n",
	/*  5*/ "Annuler le syst�me de bouclier\n",
	/*  6*/ "Ouvrir les portes du hangar\n",
	/*  7*/ "Acc�der aux syst�mes de navigation\n",
	/*  8*/ "Saboter les syst�mes de propulsion\n",
	/*  9*/ "Contr�ler le pont\n",
	/* 10*/ "Boucliers du vaisseau baiss�s.\n",
	/* 11*/ "Portes du hangar ouvertes.\n",
	/* 12*/ "Elvis abattu.\n",
	/* 13*/ "Infos de navigation r�cup�r�es.\n",
	/* 14*/ "Ascenseur activ�.\n",
	/* 15*/ "Skedars du hangar abattus.\n",
	/* 16*/ "Joanna! Baisse les boucliers \net nous t'aiderons.\n",
	/* 17*/ "Ouvre les portes du hangar pour que l'on puisse accoster.\n",
	/* 18*/ "OK. Nous y sommes. Je te retrouve dans le hangar.\n",
	/* 19*/ "Ca me fait plaisir de te voir, Joanna. \n",
	/* 20*/ "Prends �a. C'est utile, tu verras...\n",
	/* 21*/ "Fusil d'assaut AR34 obtenu.\n",
	/* 22*/ "Il faut monter. Je prends cet ascenseur. \nPrends l'autre.\n",
	/* 23*/ "Moteurs coup�s.\n",
	/* 24*/ "Attention Joanna! Ils sont en col�re je crois...\n",
	/* 25*/ "Pont captur�.\n",
	/* 26*/ "Vas-y, Joanna. Je s�curise le p�rim�tre. \nOn se retrouve plus tard.\n",
	/* 27*/ "Je dois abaisser les boucliers pour faire entrer \nElvis. J'ai besoin d'aide...\n",
	/* 28*/ "Seules les portes de hangar sont sur le chemin.\n",
	/* 29*/ "Cette machine contient les cartes stellaires skedars.\n",
	/* 30*/ "Si nous contr�lons le pont, le vaisseau sera � notre merci.\n",
	/* 31*/ "Il est temps de monter...\n",
	/* 32*/ "Oohhh... Dites-moi que ce n'est pas vrai.\n",
	/* 33*/ "Et si. Regardez donc qui est avec vous, ma ch�re.\n",
	/* 34*/ "Vous! Vous ne vous �tes pas enfuie? Nous avions perdu votre trace...\n",
	/* 35*/ "Leurrer les Skedars �tait plus difficile. Vous et Mr. Carrington avez pu vous en rendre compte.\n",
	/* 36*/ "Attendez ici! Je vais cr�er une diversion. Cela vous donnera l'occasion de partir. Faites vite ou nous mourrons.\n",
	/* 37*/ "Pourquoi faites-vous tout �a, Cassandra?\n",
	/* 38*/ "Les Skedars m'ont utilis�e. Vous �tes ma seule chance de me venger.\n",
	/* 39*/ "Aaaaaahhhhhhh!!!\n",
	/* 40*/ "C'est la premi�re fois que je vois une plan�te depuis l'espace... C'est magnifique.\n",
	/* 41*/ "Hein?\n",
	/* 42*/ "Je... Je ne le crois pas!\n",
	/* 43*/ "Elvis? Qu'est-ce qu'il y a?\n",
	/* 44*/ "O� vas-tu?\n",
	/* 45*/ "Nous devons descendre � la surface! Suis-moi!\n",
	/* 46*/ "Il faut sortir d'ici!\n",
	/* 47*/ "Portes hangar ferm�es - boucliers actifs.\n",
	/* 48*/ "Objet crucial d�truit.\n",
	/* 49*/ "Munitions �puis�es - panneaux ne peuvent �tre d�truits.\n",
	/* 50*/ "Obtenir collier de De Vries.\n",
	/* 51*/ "Cassandra De Vries: \n",
	/* 52*/ "Collier\n",
	/* 53*/ "Collier de De Vries\n",
	/* 54*/ "Collier de De Vries obtenu.\n",
	/* 55*/ NULL,
};

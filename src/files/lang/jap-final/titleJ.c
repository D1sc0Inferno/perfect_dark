#include <ultra64.h>

char *lang[] = {
	/*  0*/ "",
	/*  1*/ "\n",
	/*  2*/ "perfect dark\n",
	/*  3*/ "beau ner chesluk\n",
	/*  4*/ "guns and visual orgasms\n",
	/*  5*/ "jonathan nasty mummery\n",
	/*  6*/ "mover and shaker\n",
	/*  7*/ "darkmark\n",
	/*  8*/ "reality engineer\n",
	/*  9*/ "chris tilston\n",
	/* 10*/ "designs on the future\n",
	/* 11*/ "chris darling\n",
	/* 12*/ "weapons specialist\n",
	/* 13*/ "duncan botwood\n",
	/* 14*/ "grey area\n",
	/* 15*/ "b jones\n",
	/* 16*/ "bodybuilder\n",
	/* 17*/ "steve malpass\n",
	/* 18*/ "perfect locations and vox\n",
	/* 19*/ "brian marshall\n",
	/* 20*/ "-aqham-\n",
	/* 21*/ "russell irwin\n",
	/* 22*/ "well packed man\n",
	/* 23*/ "jamie 'evo' williams\n",
	/* 24*/ "manic welsh designer\n",
	/* 25*/ "ross bury\n",
	/* 26*/ "bionic backgrounds\n",
	/* 27*/ "martin penny\n",
	/* 28*/ "sound geezer\n",
	/* 29*/ "grant kirkhope\n",
	/* 30*/ "play that music maestro\n",
	/* 31*/ "david clynick\n",
	/* 32*/ "bangin hardkore choonz\n",
	/* 33*/ "keith 'bunny' rabbette\n",
	/* 34*/ "dinomic backgrounds\n",
	/* 35*/ "dd snipers\n",
	/* 36*/ "kevin bayliss\n",
	/* 37*/ "dean smith\n",
	/* 38*/ "graham smith\n",
	/* 39*/ "mike 'curry' currington\n",
	/* 40*/ "tony wong\n",
	/* 41*/ "simon farmer\n",
	/* 42*/ "leigh loveday\n",
	/* 43*/ "rob harrison\n",
	/* 44*/ "steven hurst\n",
	/* 45*/ "fearsome foursome\n",
	/* 46*/ "phil dunne\n",
	/* 47*/ "ricky berwick\n",
	/* 48*/ "gareth glover\n",
	/* 49*/ "jonathon ambrose\n",
	/* 50*/ "trent's henchmen\n",
	/* 51*/ "lee musgrave\n",
	/* 52*/ "johnni christensen\n",
	/* 53*/ "mark betteridge\n",
	/* 54*/ "chris marlow\n",
	/* 55*/ "robin beanland\n",
	/* 56*/ "neil gallagher\n",
	/* 57*/ "feargal plant\n",
	/* 58*/ "voices in the dark\n",
	/* 59*/ "eveline fischer\n",
	/* 60*/ "chris sutherland\n",
	/* 61*/ "chris seavor\n",
	/* 62*/ "john silke\n",
	/* 63*/ "ben cullum\n",
	/* 64*/ "louise tilston\n",
	/* 65*/ "alistair lindsay\n",
	/* 66*/ "duncan botwood\n",
	/* 67*/ "b jones\n",
	/* 68*/ "beau chesluk\n",
	/* 69*/ "steve malpass\n",
	/* 70*/ "ci techs\n",
	/* 71*/ "richard 'force 9' gale\n",
	/* 72*/ "mark green\n",
	/* 73*/ "alex zoro\n",
	/* 74*/ "mark wilson\n",
	/* 75*/ "hard and wary support\n",
	/* 76*/ "pete 'hardrom' cox\n",
	/* 77*/ "paul 'max' mikell\n",
	/* 78*/ "doug crouch\n",
	/* 79*/ "dk crew\n",
	/* 80*/ "mark stevenson\n",
	/* 81*/ "carl tilley\n",
	/* 82*/ "chris woods\n",
	/* 83*/ "motion capture\n",
	/* 84*/ "alan tippertronic\n",
	/* 85*/ "des easen\n",
	/* 86*/ "jim 'love' ballard\n",
	/* 87*/ "going through the motions\n",
	/* 88*/ "duncan 'bot' botwood\n",
	/* 89*/ "michelle tipper\n",
	/* 90*/ "sue 'falling' fell\n",
	/* 91*/ "doug 'crouch' crouch\n",
	/* 92*/ "ross bury\n",
	/* 93*/ "rare exterminators\n",
	/* 94*/ "huw ward\n",
	/* 95*/ "adam munton\n",
	/* 96*/ "david wong\n",
	/* 97*/ "luke munton\n",
	/* 98*/ "gary phelps\n",
	/* 99*/ "john silke\n",
	/*100*/ "matthew carter\n",
	/*101*/ "gavin price\n",
	/*102*/ "gareth stevenson\n",
	/*103*/ "bushbaby\n",
	/*104*/ "stephen stamper\n",
	/*105*/ "ross bullimore\n",
	/*106*/ "justin cook\n",
	/*107*/ "dale murchie\n",
	/*108*/ "roger smith\n",
	/*109*/ "andrew wilson\n",
	/*110*/ "dark commanders\n",
	/*111*/ "bis\n",
	/*112*/ "wombat\n",
	/*113*/ "rare in the sun\n",
	/*114*/ "joel hochberg\n",
	/*115*/ "eileen hochberg\n",
	/*116*/ "scott hochberg\n",
	/*117*/ "jerry rogowski\n",
	/*118*/ "testing (rare miami)\n",
	/*119*/ "keith coll\n",
	/*120*/ "testing (noa)\n",
	/*121*/ "michael kelbaugh\n",
	/*122*/ "tim bechtel\n",
	/*123*/ "tom hertzog\n",
	/*124*/ "melvin 'sherwood' forrest\n",
	/*125*/ "dougall campbell\n",
	/*126*/ "roger harrison\n",
	/*127*/ "jeff kalles\n",
	/*128*/ "the perfect core\n",
	/*129*/ "-darker than you\n",
	/*130*/ "treehouse\n",
	/*131*/ "armond williams junior\n",
	/*132*/ "henry sterchi\n",
	/*133*/ "ed ridgeway\n",
	/*134*/ "perfect spelling\n",
	/*135*/ "teresa lillygren\n",
	/*136*/ "nintendo\n",
	/*137*/ "mr arakawa\n",
	/*138*/ "mike fukuda\n",
	/*139*/ "don james\n",
	/*140*/ "michael kelbaugh\n",
	/*141*/ "howard lincoln\n",
	/*142*/ "ken lobb\n",
	/*143*/ "jacqualee story\n",
	/*144*/ "gail tilden\n",
	/*145*/ "copyright rare 2000\n",
	/*146*/ "perfect dark and the pd device\n",
	/*147*/ "are trademarks\n",
	/*148*/ "rare\n",
	/*149*/ "designs on the future\n",
	/*150*/ "perfect dark is forever\n",
	/*151*/ "testing (noe)\n",
	/*152*/ "supervisor\n",
	/*153*/ "kai 'jellybean' neumann\n",
	/*154*/ "deputy supervisor\n",
	/*155*/ "maurice 'pathfinder' tisdale\n",
	/*156*/ "coordinators\n",
	/*157*/ "patrick 'capricorn' thieret\n",
	/*158*/ "andreas 'brennero' dietz\n",
	/*159*/ "editor\n",
	/*160*/ "assistant editor\n",
	/*161*/ "assistant editors\n",
	/*162*/ "localization (french)\n",
	/*163*/ "julien 'sexy boy' bardakoff\n",
	/*164*/ "jean-baptiste 'ours noir' fleury\n",
	/*165*/ "nicolas 'darth lapinou' gourio\n",
	/*166*/ "nicolas 'el betal' robert\n",
	/*167*/ "localization (german)\n",
	/*168*/ "micky 'scorpio's movement' auer\n",
	/*169*/ "jan 'ian' peitzmeier\n",
	/*170*/ "localization (italian)\n",
	/*171*/ "elenor isbitish\n",
	/*172*/ "calimero tiiiun\n",
	/*173*/ "localization (spanish)\n",
	/*174*/ "antonio 'toro' greppi\n",
	/*175*/ "carlos 'yoshio' montilla\n",
	/*176*/ "susa & natalia\n",
	/*177*/ "localization\n",
	/*178*/ "product coordinator\n",
	/*179*/ "andy 'fiedl' fey\n",
	/*180*/ "product supervisor\n",
	/*181*/ "tanja 'personalized sarcasm' baar\n",
	/*182*/ "product localization manager\n",
	/*183*/ "kai '0 to 100' zeh\n",
	/*184*/ "ncl staff\n",
	/*185*/ "s. miyamoto\n",
	/*186*/ "k. miki\n",
	/*187*/ "s. kojoh\n",
	/*188*/ "y. nakano\n",
	/*189*/ "k. yamaguchi\n",
	/*190*/ "k. terasaki\n",
	/*191*/ "m. goto\n",
	/*192*/ "super mario club\n",
	/*193*/ NULL,
	/*194*/ NULL,
	/*195*/ NULL,
};

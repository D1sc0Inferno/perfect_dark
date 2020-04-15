#include <ultra64.h>

char *lang[] = {
	/*  0*/ "",
	/*  1*/ "\n",
	/*  2*/ "perfect dark\n",
	/*  3*/ "beau ner chesluk\n",
	/*  4*/ "guns and visual orgasms\n",
	/*  5*/ "jonathan nasty mummery\n",
	/*  6*/ "animation\n",
	/*  7*/ "darkmark\n",
	/*  8*/ "reality engineer\n",
	/*  9*/ "christ tilston\n",
	/* 10*/ "designs on the future\n",
	/* 11*/ "chris darling\n",
	/* 12*/ "weapons animator\n",
	/* 13*/ "duncan botwood\n",
	/* 14*/ "(is watching)\n",
	/* 15*/ "b jones\n",
	/* 16*/ "(unknown purpose)\n",
	/* 17*/ "steve malpass\n",
	/* 18*/ "edge wrangler\n",
	/* 19*/ "brian marshall\n",
	/* 20*/ "code janitor\n",
	/* 21*/ "russell irwin\n",
	/* 22*/ "pak man\n",
	/* 23*/ "jamie williams\n",
	/* 24*/ "pad jockey\n",
	/* 25*/ "ross bury\n",
	/* 26*/ "pixel pusher\n",
	/* 27*/ "martin penny\n",
	/* 28*/ "sound geezer\n",
	/* 29*/ "grant kirkhope\n",
	/* 30*/ "music maestro\n",
	/* 31*/ "david clynick\n",
	/* 32*/ "bangin hardkore choonsz\n",
	/* 33*/ "keith rabbette\n",
	/* 34*/ "background artist\n",
	/* 35*/ "additional\n",
	/* 36*/ "dean smith\n",
	/* 37*/ "kevin bayliss\n",
	/* 38*/ "graham smith\n",
	/* 39*/ "mike currington\n",
	/* 40*/ "tony wong\n",
	/* 41*/ "simon farmer\n",
	/* 42*/ "leigh loveday\n",
	/* 43*/ "rob harrison\n",
	/* 44*/ "lee musgrave\n",
	/* 45*/ "mark betteridge\n",
	/* 46*/ "chris marlow\n",
	/* 47*/ "phillip dunne\n",
	/* 48*/ "johnni christensen\n",
	/* 49*/ "robin beanland\n",
	/* 50*/ "steven hurst\n",
	/* 51*/ "voice talent\n",
	/* 52*/ "eveline fischer\n",
	/* 53*/ "chris sutherland\n",
	/* 54*/ "chris seavor\n",
	/* 55*/ "john silke\n",
	/* 56*/ "development tools\n",
	/* 57*/ "richard gale\n",
	/* 58*/ "mark green\n",
	/* 59*/ "mark wilson\n",
	/* 60*/ "hardware support\n",
	/* 61*/ "pete cox\n",
	/* 62*/ "paul mikell\n",
	/* 63*/ "doug crouch\n",
	/* 64*/ "thanks\n",
	/* 65*/ "neil gallagher\n",
	/* 66*/ "jonathon o'conner\n",
	/* 67*/ "gareth glover\n",
	/* 68*/ "motion capture\n",
	/* 69*/ "alan tipper\n",
	/* 70*/ "des easen\n",
	/* 71*/ "jim ballard\n",
	/* 72*/ "michelle tipper\n",
	/* 73*/ "testing (rare)\n",
	/* 74*/ "huw ward\n",
	/* 75*/ "david wong\n",
	/* 76*/ "adam munton\n",
	/* 77*/ "luke munton\n",
	/* 78*/ "garry phelps\n",
	/* 79*/ "jon silke\n",
	/* 80*/ "matthew carter\n",
	/* 81*/ "gavin price\n",
	/* 82*/ "gareth stevenson\n",
	/* 83*/ "joe stamper\n",
	/* 84*/ "stephen stamper\n",
	/* 85*/ "testing (noa)\n",
	/* 86*/ "nintendo guy\n",
	/* 87*/ "nintendo gal\n",
	/* 88*/ "rare miami\n",
	/* 89*/ "eileen hochberg\n",
	/* 90*/ "joel hochberg\n",
	/* 91*/ "rare twycross\n",
	/* 92*/ "chris stamper\n",
	/* 93*/ "tim stamper\n",
	/* 94*/ "nintendo\n",
	/* 95*/ "ken lobb\n",
	/* 96*/ "howard lincoln\n",
	/* 97*/ "mr arrakawa\n",
	/* 98*/ "mr yamauchi\n",
	/* 99*/ "copyright rare 2000\n",
	/*100*/ "perfect dark, the pd device and\n",
	/*101*/ "perfecthead are trademarks\n",
	/*102*/ "rare\n",
	/*103*/ "designs on the future\n",
	/*104*/ "t&a support\n",
	/*105*/ "emma scully\n",
	/*106*/ "claire phelan\n",
	/*107*/ "joanna dark is forever\n",
	/*108*/ "perfect dark 2 is finished and sitting on a shelf\n",
	/*109*/ "testing (noe)\n",
	/*110*/ "supervisor\n",
	/*111*/ "kai 'jellybean' neumann\n",
	/*112*/ "deputy supervisor\n",
	/*113*/ "maurice 'pathfinder' tisdale\n",
	/*114*/ "coordinators\n",
	/*115*/ "patrick 'capricorn' thieret\n",
	/*116*/ "andreas 'brennero' dietz\n",
	/*117*/ "editor\n",
	/*118*/ "assistant editor\n",
	/*119*/ "assistant editors\n",
	/*120*/ "localization (french)\n",
	/*121*/ "julien 'sexy boy' bardakoff\n",
	/*122*/ "jean-baptiste 'ours noir' fleury\n",
	/*123*/ "nicolas 'darth lapinou' gourio\n",
	/*124*/ "nicolas 'el betal' robert\n",
	/*125*/ "localization (german)\n",
	/*126*/ "micky 'scorpio's movement' auer\n",
	/*127*/ "jan 'ian' peitzmeier\n",
	/*128*/ "localization (italian)\n",
	/*129*/ "elenor isbitish\n",
	/*130*/ "calimero tiiiun\n",
	/*131*/ "localization (spanish)\n",
	/*132*/ "antonio 'toro' greppi\n",
	/*133*/ "carlos 'yoshio' montilla\n",
	/*134*/ "susa & natalia\n",
	/*135*/ "localization\n",
	/*136*/ "product coordinator\n",
	/*137*/ "andy 'fiedl' fey\n",
	/*138*/ "product supervisor\n",
	/*139*/ "tanja 'personalized sarcasm' baar\n",
	/*140*/ "product localization manager\n",
	/*141*/ "kai '0 to 100' zeh\n",
	/*142*/ NULL,
	/*143*/ NULL,
	/*144*/ NULL,
	/*145*/ NULL,
	/*146*/ NULL,
	/*147*/ NULL,
	/*148*/ NULL,
	/*149*/ NULL,
	/*150*/ NULL,
	/*151*/ NULL,
	/*152*/ NULL,
	/*153*/ NULL,
	/*154*/ NULL,
	/*155*/ NULL,
	/*156*/ NULL,
	/*157*/ NULL,
	/*158*/ NULL,
	/*159*/ NULL,
	/*160*/ NULL,
	/*161*/ NULL,
	/*162*/ NULL,
	/*163*/ NULL,
	/*164*/ NULL,
	/*165*/ NULL,
	/*166*/ NULL,
	/*167*/ NULL,
	/*168*/ NULL,
	/*169*/ NULL,
	/*170*/ NULL,
	/*171*/ NULL,
	/*172*/ NULL,
	/*173*/ NULL,
	/*174*/ NULL,
	/*175*/ NULL,
	/*176*/ NULL,
	/*177*/ NULL,
	/*178*/ NULL,
	/*179*/ NULL,
	/*180*/ NULL,
	/*181*/ NULL,
	/*182*/ NULL,
	/*183*/ NULL,
};

#include <ultra64.h>

char *lang[] = {
	/*  0*/ "|Background - \n\nA craft carrying Institute advisors has been shot down in Nevada. Debris from the crash and the bodies of the advisors have been taken to Area 51. A spy inside the base has managed to get footage to the Institute of a possible survivor. This mission is to rescue that survivor.\n\n|Carrington - \n\nYou need to cover our tracks and rescue our friend as fast as you can. A disguise will help you do that, but it won't last forever, so make good use of it. Wipe out their records, and make sure there are no more survivors we are unaware of. Time is pressing, so hurry.\n\n|Objective One: - Destroy Computer Research Records\n\nAny information that the Area 51 techs were able to get from the crash wreckage and objects must be wiped from their databases. The main databank terminal is kept in a locked room at the top of the main corridor. Install a virus using the Data Uplink device, and then destroy the terminal itself. If the virus is loaded into other terminals, it may produce helpful effects.\n\n|Objective Two: - Locate Conspiracy Evidence\n\nJonathan's report made reference to a tissue containment unit where organic samples are stored at extremely low temperatures. He believes that it could be used to cryogenically freeze bodies before surgery or dissection. Find this area and confirm the death of any of the three other passengers of the craft.\n\n|Objective Three: - Obtain and Use Lab Technician Disguise\n\nFind a Lab Technician's outfit and use it to get past the security. Once you have, move fast, since the theft won't go unnoticed for long.\n\n|Objective Four: - Gain Access to Autopsy Lab\n\nA premature autopsy will soon be taking place in one of the secure medical laboratories. It will be locked to those without clearance, so get a card with the appropriate level to get in. Not all cards will work, and there may be door guards as well.\n\n|Objective Five: - Rescue the Crash Survivor\n\nOnce you are in the lab, you will have to get into the autopsy chamber before any harm comes to the subject. The scientists will try to kill him if they think he's alive or will attempt to damage what they think is a corpse as soon as they see you. Yet again, speed is vital.\n\nEND\n",
	/*  1*/ "AREA 51 - MEDLABS\n",
	/*  2*/ "|Background - \n\nA craft carrying Institute advisors has been shot down in Nevada. Debris from the crash and the bodies of the advisors have been taken to Area 51. A spy inside the base has managed to get footage to the Institute of a possible survivor. This mission is to rescue that survivor.\n\n|Carrington - \n\nYou need to cover our tracks and rescue our friend as fast as you can. A disguise will help you do that, but it won't last forever, so make good use of it. Wipe out their records, and make sure there are no more survivors we are unaware of. Time is pressing, so hurry.\n\n|Objective One: - Locate Conspiracy Evidence\n\nJonathan's report made reference to a tissue containment unit where organic samples are stored at extremely low temperatures. He believes that it could be used to cryogenically freeze bodies before surgery or dissection. Find this area and confirm the death of any of the three other passengers of the craft.\n\n|Objective Two: - Obtain and Use Lab Technician Disguise\n\nFind a Lab Technician's outfit and use it to get past the security. Once you have, move fast, since the theft won't go unnoticed for long.\n\n|Objective Three: - Gain Access to Autopsy Lab\n\nA premature autopsy will soon be taking place in one of the secure medical laboratories. It will be locked to those without clearance, so get a card with the appropriate level to get in. Not all cards will work, and there may be door guards as well.\n\n|Objective Four: - Rescue the Crash Survivor\n\nOnce you are in the lab, you will have to get into the autopsy chamber before any harm comes to the subject. The scientists will try to kill him if they think he's alive or will attempt to damage what they think is a corpse as soon as they see you. Yet again, speed is vital.\n\nEND\n",
	/*  3*/ "|Background - \n\nA craft carrying Institute advisors has been shot down in Nevada. Debris from the crash and the bodies of the advisors have been taken to Area 51. A spy inside the base has managed to get footage to the Institute of a possible survivor. This mission is to rescue that survivor.\n\n|Carrington - \n\nYou need to cover our tracks and rescue our friend as fast as you can. A disguise will help you do that, but it won't last forever, so make good use of it. Wipe out their records, and make sure there are no more survivors we are unaware of. Time is pressing, so hurry.\n\n|Objective One: - Obtain and Use Lab Technician Disguise\n\nFind a Lab Technician's outfit and use it to get past the security. Once you have, move fast, since the theft won't go unnoticed for long.\n\n|Objective Two: - Gain Access to Autopsy Lab\n\nA premature autopsy will soon be taking place in one of the secure medical laboratories. It will be locked to those without clearance, so get a card with the appropriate level to get in. Not all cards will work, and there may be door guards as well.\n\n|Objective Three: - Rescue the Crash Survivor\n\nOnce you are in the lab, you will have to get into the autopsy chamber before any harm comes to the subject. The scientists will try to kill him if they think he's alive or will attempt to damage what they think is a corpse as soon as they see you. Yet again, speed is vital.\n\nEND\n",
	/*  4*/ "\n",
	/*  5*/ "\n",
	/*  6*/ "\n",
	/*  7*/ "\n",
	/*  8*/ "\n",
	/*  9*/ "Obtain and use lab technician disguise\n",
	/* 10*/ "Destroy computer records\n",
	/* 11*/ "Locate conspiracy evidence\n",
	/* 12*/ "Gain access to autopsy lab\n",
	/* 13*/ "Rescue the crash Survivor\n",
	/* 14*/ "Research records destroyed.\n",
	/* 15*/ "Obtain lab clothes.\n",
	/* 16*/ "Lab Tech's\n",
	/* 17*/ "Lab clothes\n",
	/* 18*/ "Lab clothes\n",
	/* 19*/ "Picked up lab clothes.\n",
	/* 20*/ "Access to door control systems denied.\n",
	/* 21*/ "Access to light control systems denied.\n",
	/* 22*/ "Access to security control systems denied.\n",
	/* 23*/ "Virus downloaded to console.\n",
	/* 24*/ "Obtain Data Uplink.\n",
	/* 25*/ "Lab Tech's\n",
	/* 26*/ "Data Uplink\n",
	/* 27*/ "Data Uplink\n",
	/* 28*/ "Picked up Data Uplink.\n",
	/* 29*/ "Laboratory accessed successfully.\n",
	/* 30*/ "Data Uplink connected.\n",
	/* 31*/ "Data Uplink connection broken.\n",
	/* 32*/ "Obtain medlab 2 key card.\n",
	/* 33*/ "Guard's\n",
	/* 34*/ "Medlab 2 key card\n",
	/* 35*/ "Medlab 2 key card\n",
	/* 36*/ "Picked up medlab 2 key card.\n",
	/* 37*/ "Who are you?\n",
	/* 38*/ "Hey - you've got my clothes.\n",
	/* 39*/ "Help - help!\n",
	/* 40*/ "Don't shoot me!\n",
	/* 41*/ "Oh, my God - a gun!\n",
	/* 42*/ "There's an intruder in the complex.\n",
	/* 43*/ "Give me back my clothes - or else!\n",
	/* 44*/ "Right - you've asked for it!\n",
	/* 45*/ "Give me my clothes.\n",
	/* 46*/ "I don't have much time!!!\n",
	/* 47*/ "The enemy has discovered the disguise.\n",
	/* 48*/ "Virus has already been downloaded.\n",
	/* 49*/ "Initiating virus download.\n",
	/* 50*/ "So, you got here at last.\n",
	/* 51*/ "Hey, you're not... SECURITY ALERT!\n",
	/* 52*/ "No guns allowed in here - put your weapon away.\n",
	/* 53*/ "I won't tell you again - lose the weapon.\n",
	/* 54*/ "Right - I'm calling security.\n",
	/* 55*/ "Everyone's been waiting for you...\n",
	/* 56*/ "Critical mission personnel killed.\n",
	/* 57*/ "Cannot gain access to autopsy lab.\n",
	/* 58*/ "Hey, that's not Harry. It's an intruder.\n",
	/* 59*/ "Obtain op room key card.\n",
	/* 60*/ "Guard's\n",
	/* 61*/ "Op room key card\n",
	/* 62*/ "Op room key card\n",
	/* 63*/ "Picked up operation room key card.\n",
	/* 64*/ "Elvis has been killed.\n",
	/* 65*/ "Get the hell out of here!\n",
	/* 66*/ "Containment unit raised up.\n",
	/* 67*/ "Containment unit lowered down.\n",
	/* 68*/ "Mission critical equipment destroyed.\n",
	/* 69*/ "Obtain X-Ray Scanner.\n",
	/* 70*/ "\n",
	/* 71*/ "X-Ray Scanner\n",
	/* 72*/ "X-Ray Scanner\n",
	/* 73*/ "Picked up X-Ray Scanner.\n",
	/* 74*/ "Scanner target acquired.\n",
	/* 75*/ "Target ID confirmed - XT origin.\n",
	/* 76*/ "Scanner lock lost.\n",
	/* 77*/ "Disguise has been worn.\n",
	/* 78*/ "The showers... Now, if I can convince someone \nto part with their uniform...\n",
	/* 79*/ "The temperature's dropping... You must be \nclose to the cryo room.\n",
	/* 80*/ "The air's heavily recycled around here - must\n be near the autopsy lab.\n",
	/* 81*/ "There he is, Jo! Hurry or you'll be too late!\n",
	/* 82*/ "Leave this area now.\n",
	/* 83*/ "Should you be in here?\n",
	/* 84*/ "Holy...\n",
	/* 85*/ "It's a spy!\n",
	/* 86*/ "Warn the others...\n",
	/* 87*/ "Imposter!\n",
	/* 88*/ "Lighting systems overloaded.\n",
	/* 89*/ "Alternative entrance to medlabs created.\n",
	/* 90*/ "The problem you have is that there is no \nway to sneak into the research section. \nThe only way in available to you is a \nweak section of wall I've marked in the \nroom beyond the stores. It can be destroyed \nwith explosives.\n",
	/* 91*/ "Doesn't sound like a problem to me. Where \nare these explosives?\n",
	/* 92*/ "In that crate.\n",
	/* 93*/ "Cute. Very cute.\n",
	/* 94*/ "By the way, the stores are crawling with \nguards. It may go against your nature, but \ntry sneaking through rather than blasting \neverything.\n",
	/* 95*/ "Certainly. Any other pearls of wisdom?\n",
	/* 96*/ "That crate...\n",
	/* 97*/ "Yes?\n",
	/* 98*/ "It really doesn't like being shot.\n",
	/* 99*/ "Great. Now, if I can just fight the urge \nto report him to Base Security...\n",
	/*100*/ "Put your hands up and step away from the \nalien.\n",
	/*101*/ "What the hell do you think you're doing? \nThis is supposed to be a sealed room! \nDon't you know anything about autopsy \nprocedures?\n",
	/*102*/ "Don't make me tell you again, Doctor. And \nturn that laser off.\n",
	/*103*/ "Director Easton will hear about this, \nyoung lady.\n",
	/*104*/ "Of course he's going to hear of it, you \nmoron. I've just got into his top secret \nbase, and now I'm stealing his alien.\n",
	/*105*/ "Automatic Defenses Disabled.\n",
	/*106*/ NULL,
	/*107*/ NULL,
};

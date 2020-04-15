#include <ultra64.h>

char *lang[] = {
	/*  0*/ "|Background - \n\nA dataDyne scientist calling himself Dr. Caroll has contacted the Carrington Institute requesting that we rescue him from the dataDyne headquarters tonight. He claims that he has complained to dataDyne about the moral implications of his current project, but rather than dismiss him they will mentally restructure him until he finds the nature of the project acceptable again.\n\n|Carrington - \n\nYou'll need to use your remote comlink to get past the door to the sector where Dr. Caroll's lab is located. Unfortunately we've detected huge levels of electro-magnetic activity around the laboratories which interfere with all our comms equipment. Convince the scientists to shut their experiments down. Remember that they are non-combatants; don't kill them.\n\n|Objective One: - Holograph Radioactive Isotope\n\nUse the EyeSpy to obtain a spectrographic photo record of the isotope on test in the dataDyne basement labs. Dr. Caroll has linked the isotope to an enhancement of the currently experimental shield technology item, also present in the laboratories.\n\n|Objective Two: - Start Maintenance Cycle On The Security Systems\n\nRe-program the cleaning robots in the service area to start work on the security systems. This will permit you to get further into the laboratory complex, though you will have to stay close to the robot you re-program if you want to remain unharmed.\n\n|Objective Three: - Shut Down The Experiments\n\nThe experiments in sector two of the laboratories are causing extreme interference with the communications uplink, preventing our hackers from cracking the security lock code. Get the scientists present to shut them down unless you want to risk setting off alarms by doing it yourself.  Be careful not to kill the scientists.\n\n|Objective Four: - Obtain Items Of Experimental Technology\n\nDr. Caroll informs us that there are three other major projects nearing completion in the labs besides his own. You are to collect the prototypes for the three projects and return them to the Carrington Institute for assessment.\n\n|Objective Five: - Locate Dr. Caroll\n\nThe basement is divided into four security zones - Dr. Caroll is in the last of these areas, sector four. Inbetween the sectors are systems designed to keep out those without clearance, such as yourself. Bypass them as best you can, and search for the scientist in the final sector.\n\nEND\n",
	/*  1*/ "BASEMENT LABORATORY\n",
	/*  2*/ "|Background - \n\nA dataDyne scientist calling himself Dr. Caroll has contacted the Carrington Institute requesting that we rescue him from the dataDyne headquarters tonight. He claims that he has complained to dataDyne about the moral implications of his current project, but rather than dismiss him they will mentally restructure him until he finds the nature of the project acceptable again.\n\n|Carrington - \n\nYou'll need to use your remote comlink to get past the door to the sector where Dr. Caroll's lab is located. Unfortunately we've detected huge levels of electro-magnetic activity around the laboratories which interfere with all our comms equipment. Convince the scientists to shut their experiments down. Remember that they are non-combatants; don't kill them.\n\n|Objective One: - Holograph Radioactive Isotope\n\nUse the EyeSpy to obtain a spectrographic photo record of the isotope on test in the dataDyne basement labs. Dr. Caroll has linked the isotope to an enhancement of the currently experimental shield technology item, also present in the laboratories.\n\n|Objective Two: - Start Maintenance Cycle On The Security Systems\n\nRe-program the cleaning robots in the service area to start work on the security systems. This will permit you to get further into the laboratory complex, though you will have to stay close to the robot you re-program if you want to remain unharmed.\n\n|Objective Three: - Shut Down The Experiments\n\nThe experiments in sector two of the laboratories are causing extreme interference with the communications uplink, preventing our hackers from cracking the security lock code. Get the scientists present to shut them down unless you want to risk setting off alarms by doing it yourself. Be careful not to kill the scientists.\n\n|Objective Four: - Locate Dr. Caroll\n\nThe basement is divided into four security zones - Dr. Caroll is in the last of these areas, sector four. Inbetween the sectors are systems designed to keep out those without clearance, such as yourself. Bypass them as best you can, and search for the scientist in the final sector.\n\nEND\n",
	/*  3*/ "|Background - \n\nA dataDyne scientist calling himself Dr. Caroll has contacted the Carrington Institute requesting that we rescue him from the dataDyne headquarters tonight. He claims that he has complained to dataDyne about the moral implications of his current project, but rather than dismiss him they will mentally restructure him until he finds the nature of the project acceptable again.\n\n|Carrington - \n\nYou'll need to use your remote comlink to get past the door to the sector where Dr. Caroll's lab is located. Unfortunately we've detected huge levels of electro-magnetic activity around the laboratories which interfere with all our comms equipment. Convince the scientists to shut their experiments down. Remember that they are non-combatants; don't kill them.\n\n|Objective One: - Holograph Radioactive Isotope\n\nUse the EyeSpy to obtain a spectrographic photo record of the isotope on test in the dataDyne basement labs. Dr. Caroll has linked the isotope to an enhancement of the currently experimental shield technology item, also present in the laboratories.\n\n|Objective Two: - Locate Dr. Caroll\n\nThe basement is divided into four security zones - Dr. Caroll is in the last of these areas, sector four. Inbetween the sectors are systems designed to keep out those without clearance, such as yourself. Bypass them as best you can, and search for the scientist in the final sector.\n\nEND\n",
	/*  4*/ NULL,
	/*  5*/ NULL,
	/*  6*/ NULL,
	/*  7*/ NULL,
	/*  8*/ NULL,
	/*  9*/ "Locate Dr Caroll\n",
	/* 10*/ "Shut Down Experiments\n",
	/* 11*/ "Start Security Maintenance Cycle\n",
	/* 12*/ "Obtain Experimental Technologies\n",
	/* 13*/ "Holograph Radioactive Isotope\n",
	/* 14*/ "Machinery Scream Sound Fx\n",
	/* 15*/ "Maintenance Robots Activated\n",
	/* 16*/ "Maintenance Robots Re-programmed\n",
	/* 17*/ "Security Doors Unlocked\n",
	/* 18*/ "Maintenance Cycle Activated\n",
	/* 19*/ "Routine Cleaning Cycle Activated\n",
	/* 20*/ "Operation Not Allowed - Robots Busy\n",
	/* 21*/ "Maintenance Robots De-activated\n",
	/* 22*/ "Critical Mission Object Destroyed\n",
	/* 23*/ "Maintenance Robot System Offline\n",
	/* 24*/ "MISSION FAILED \n - Objectives cannot be completed\n",
	/* 25*/ "Who are you?\n",
	/* 26*/ "Unacceptable Scientist Casualties\n",
	/* 27*/ "Terminal Is Not Active\n",
	/* 28*/ "Powering Down Active Systems\n",
	/* 29*/ "Experiment Has Been Shut Down\n",
	/* 30*/ "Alarm Activated\n",
	/* 31*/ "Alarm De-activated\n",
	/* 32*/ "Don't Shoot Me - I'll Help you\n",
	/* 33*/ "What the hell are you doing in my lab?\n",
	/* 34*/ "Let me help you\n",
	/* 35*/ "Accidents will happen\n",
	/* 36*/ "ACCESS DENIED - Security Code Required\n",
	/* 37*/ "Searching for password\n",
	/* 38*/ ".",
	/* 39*/ "Password Located - Bypassing Lock\n",
	/* 40*/ "Contact Broken - Re-establish link\n",
	/* 41*/ "Security Door Already Unlocked\n",
	/* 42*/ "Experiment already powered down\n",
	/* 43*/ "Strange - the experiments already off!\n",
	/* 44*/ "It appears someone has broken my PC\n",
	/* 45*/ "Obtain Night Sight\n",
	/* 46*/ "Cassandra De Vries'\n",
	/* 47*/ "Night Sight\n",
	/* 48*/ "De Vries' briefcase\n",
	/* 49*/ "Picked up Night Sight\n",
	/* 50*/ "Obtain Shield Tech Item\n",
	/* 51*/ "Cassandra De Vries'\n",
	/* 52*/ "Shield Tech Item\n",
	/* 53*/ "De Vries' briefcase\n",
	/* 54*/ "Picked up Shield Tech Item\n",
	/* 55*/ "Obtain Data Uplink\n",
	/* 56*/ "\n",
	/* 57*/ "Data Uplink\n",
	/* 58*/ "A Data Uplink\n",
	/* 59*/ "Picked up a Data Uplink\n",
	/* 60*/ "Connection Established\n",
	/* 61*/ "Maintenance Hatch Is Now Open\n",
	/* 62*/ "Maintenance Hatch Is Already Open\n",
	/* 63*/ "WARNING - Radioactive Matter Detected\n",
	/* 64*/ "What are you doing in my lab?\n",
	/* 65*/ "I haven't seen you before...\n",
	/* 66*/ "Who the hell are you?\n",
	/* 67*/ "Shut down the experiment.\n",
	/* 68*/ "Pull the plug on that, NOW.\n",
	/* 69*/ "Switch this thing off.\n",
	/* 70*/ "I'll shut it down.\n",
	/* 71*/ "Please don't hurt me.\n",
	/* 72*/ "Allow me to assist you.\n",
	/* 73*/ "My experiments!\n",
	/* 74*/ "There, the experiment is down.\n",
	/* 75*/ "Leave this area NOW!\n",
	/* 76*/ "Security!\n",
	/* 77*/ "I'm calling security\n",
	/* 78*/ "Accidents will happen\n",
	/* 79*/ "How did that happen?\n",
	/* 80*/ "Looks like it's off already\n",
	/* 81*/ "Have you been tampering with this?\n",
	/* 82*/ "Someones broken my equipment.\n",
	/* 83*/ "Whats happened to the terminal?\n",
	/* 84*/ "You vandal, you've broken it.\n",
	/* 85*/ "Connection Broken - Experiments still active.\n",
	/* 86*/ "Experimental Item 1 aquired.\n",
	/* 87*/ "Experimental Item 2 aquired.\n",
	/* 88*/ "Experimental Item 3 aquired.\n",
	/* 89*/ "Obtain Eye Spy\n",
	/* 90*/ "Dr Carolls\n",
	/* 91*/ "Eye Spy\n",
	/* 92*/ "An Eye Spy\n",
	/* 93*/ "Picked up an Eye Spy\n",
	/* 94*/ "That's the highest security sector - Dr Caroll\nhas got to be nearby.\n",
	/* 95*/ "Something around here's using a lot of power.\n",
	/* 96*/ "Reprogram that cleaning bot - \nit'll give you a way in.\n",
	/* 97*/ "Get out, Jo! The levels are too high.\nUse the Eye-Spy.\n",
	/* 98*/ "Secret Weapons Compartment Opened.\n",
	/* 99*/ "Access Denied - Weapons Compartment Locked.\n",
	/*100*/ "Dr. Caroll?",
	/*101*/ "Dr. Caroll, are you here?",
	/*102*/ "Well, is it safe to come out?",
	/*103*/ "Yes, all clear.",
	/*104*/ "Wh..what... you're...",
	/*105*/ "Very professionally done my dear, but there's no time to waste! we must leave immediately!",
	/*106*/ "Come on, I have vital information and you must protect me.",
	/*107*/ NULL,
};

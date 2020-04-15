#include <ultra64.h>

char *lang[] = {
	/*  0*/ "|Background - \n\nOnce inside G5 Headquarters, proceed into the heart of the building where the meeting should be taking place. Obtain a visual record of the meeting and get out as quickly as possible.\n\n|Carrington - \n\nThe G5 Building has an integrated alarm system. Watch out for any guards who see you, as they're sure to try and activate it. This will alert the conspirators, who will almost certainly not go ahead with the meeting under such circumstances. Softly, softly, Joanna.\n\n|Objective One: - Disable Damping Field Generator\n\nA device in the car garage section of the building is preventing the transmission of any information recorded by the cam spy. Once shut down, the cam spy can relay any captured recordings back to HQ.\n\n|Objective Two: - Deactivate Laser Grid Systems\n\nAn examination of the power grid of the G5 Building indicates a network of laser grids. These grids are placed specifically to deny a route into the meeting room, but if you can turn them off, the way is clear.\n\n|Objective Three: - Holograph Meeting Conspirators\n\nThe CamSpy device is an excellent way to record the meeting without alerting De Vries and the other conspirators.\n\n|Objective Four: - Retrieve Backup From Safe\n\nDr. Caroll informed Daniel of a backup personality that is stored in a safe in the G5 Building. If we can obtain it, it would mean that we could restore the personality to Dr. Caroll at a later date.\n\n|Objective Five: - Exit Building\n\nDestroy the blocked-up door to create your exit. If you remember which level of the fire escape is outside, you may save yourself some time.\n\nEND\n",
	/*  1*/ "G5 BUILDING\n",
	/*  2*/ "|Background - \n\nOnce inside G5 Headquarters, proceed into the heart of the building where the meeting should be taking place. Obtain a visual record of the meeting and get out as quickly as possible.\n\n|Carrington - \n\nThe G5 Building has an integrated alarm system. Watch out for any guards who see you, as they're sure to try and activate it. This will alert the conspirators, who will almost certainly not go ahead with the meeting under such circumstances. Softly, softly, Joanna.\n\n|Objective One: - Deactivate Laser Grid Systems\n\nAn examination of the power grid of the G5 Building indicates a network of laser grids. These grids are placed specifically to deny a route into the meeting room, but if you can turn them off, the way is clear.\n\n|Objective Two: - Holograph Meeting Conspirators\n\nThe CamSpy device is an excellent way to record the meeting without alerting De Vries and the other conspirators.\n\n|Objective Three: - Retrieve Backup From Safe\n\nDr. Caroll informed Daniel of a backup personality that is stored in a safe in the G5 Building. If we can obtain it, it would mean that we could restore the personality to Dr. Caroll at a later date.\n\n|Objective Four: - Exit Building\n\nDestroy the blocked-up door to create your exit. If you remember which level of the fire escape is outside, you may save yourself some time.\n\nEND\n",
	/*  3*/ "|Background - \n\nOnce inside G5 Headquarters, proceed into the heart of the building where the meeting should be taking place. Obtain a visual record of the meeting and get out as quickly as possible.\n\n|Carrington - \n\nThe G5 Building has an integrated alarm system. Watch out for any guards who see you, as they're sure to try and activate it. This will alert the conspirators, who will almost certainly not go ahead with the meeting under such circumstances. Softly, softly, Joanna.\n\n|Objective One: - Holograph Meeting Conspirators\n\nThe CamSpy device is an excellent way to record the meeting without alerting De Vries and the other conspirators.\n\n|Objective Two: - Retrieve Backup From Safe\n\nDr. Caroll informed Daniel of a backup personality that is stored in a safe in the G5 Building. If we can obtain it, it would mean that we could restore the personality to Dr. Caroll at a later date.\n\n|Objective Three: - Exit Building\n\nDestroy the blocked-up door to create your exit. If you remember which level of the fire escape is outside, you may save yourself some time.\n\nEND\n",
	/*  4*/ NULL,
	/*  5*/ NULL,
	/*  6*/ NULL,
	/*  7*/ NULL,
	/*  8*/ NULL,
	/*  9*/ "Disable damping field generator\n",
	/* 10*/ "Deactivate laser grid systems\n",
	/* 11*/ "Holograph meeting conspirators\n",
	/* 12*/ "Retrieve Dr. Caroll backup from safe\n",
	/* 13*/ "Exit building\n",
	/* 14*/ "Obtain alpha key card.\n",
	/* 15*/ "Guard's\n",
	/* 16*/ "Level 1 key card\n",
	/* 17*/ "Guard's key card\n",
	/* 18*/ "Picked up guard's key card.\n",
	/* 19*/ "Obtain alpha key card.\n",
	/* 20*/ "Guard's\n",
	/* 21*/ "Level 2 key card\n",
	/* 22*/ "Guard's key card\n",
	/* 23*/ "Picked up guard's key card.\n",
	/* 24*/ "Mission critical object destroyed.\n",
	/* 25*/ "Damping field generator shut down.\n",
	/* 26*/ "Generator cannot be restarted.\n",
	/* 27*/ "Laser grid unit shut down.\n",
	/* 28*/ "Laser grid unit activated.\n",
	/* 29*/ "All laser grid systems shut down.\n",
	/* 30*/ "Obtain DAT tape.\n",
	/* 31*/ "Dr. Caroll's\n",
	/* 32*/ "Backup disk\n",
	/* 33*/ "Backup disk\n",
	/* 34*/ "Picked up backup disk.\n",
	/* 35*/ "Door Decoder attached to access pad.\n",
	/* 36*/ "Initiating cracking routines.\n",
	/* 37*/ "Door Decoder finished - door unlocked.\n",
	/* 38*/ "INTRUDER ALERT - all security to the vault.\n",
	/* 39*/ "Door Decoder placed correctly.\n",
	/* 40*/ "Door Decoder incorrectly positioned.\n",
	/* 41*/ "Conspirators have been alerted.\n",
	/* 42*/ "Alarm activated.\n",
	/* 43*/ "Alarm deactivated.\n",
	/* 44*/ "Safe door is locked.\n",
	/* 45*/ "Door Decoder attached.\n",
	/* 46*/ "Obtain Door Exploder.\n",
	/* 47*/ "Dr. Caroll's\n",
	/* 48*/ "Door Exploder\n",
	/* 49*/ "Door Exploder\n",
	/* 50*/ "Picked up Door Exploder.\n",
	/* 51*/ "Objectives incomplete - MISSION FAILED.\n",
	/* 52*/ "MISSION SUCCESSFUL\n",
	/* 53*/ "Communications bug placed correctly.\n",
	/* 54*/ "Communications bug placed incorrectly.\n",
	/* 55*/ "Obtain CamSpy.\n",
	/* 56*/ "Dr. Caroll's\n",
	/* 57*/ "CamSpy\n",
	/* 58*/ "A CamSpy\n",
	/* 59*/ "Picked up a CamSpy.\n",
	/* 60*/ "There's no way through while those \nlasers are active.\n",
	/* 61*/ "That must be the meeting room up ahead.\nTime to use the CamSpy.\n",
	/* 62*/ "The safe's heavily encrypted.\nThe decoder's gonna take a little longer.\n",
	/* 63*/ "Time to leave! Let's get to the door I set \nup earlier.\n",
	/* 64*/ "Mission critical object destroyed.\n",
	/* 65*/ "Stand back, Joanna. We'll create your escape\nroute.\n",
	/* 66*/ "\n",
	/* 67*/ "\n",
	/* 68*/ "Detonator\n",
	/* 69*/ "Detonator\n",
	/* 70*/ "Picked up Detonator.\n",
	/* 71*/ "CamSpy has been destroyed - abort mission.\n",
	/* 72*/ "We've recovered the sapient from Carrington \nand altered its programming. It no longer \nhas a personality, so there will be no \nfurther incidents.\n",
	/* 73*/ "This will reduce its efficiency. My team will \nhave to take it to the core themselves. This \nwill endanger them. You should have \nanticipated that the sapient might develop \na troublesome moral code.\n",
	/* 74*/ "No one could have predicted that! And I \nresent being singled out for blame! \nWhat about him?\n",
	/* 75*/ "The President turned down your request for \nthe loan of the Pelagic II?\n",
	/* 76*/ "Could it be you overestimated your \ninfluence over him?\n",
	/* 77*/ "No! Perhaps I underestimated his resolve. \nWe have a contingency plan ready to go, \nand we will move as soon as the Presidential \nentourage arrives at the air base. All I \nneed from the President is a tissue sample.\n",
	/* 78*/ "Ha! Assuming you don't get any interference. \nIf Carrington has pieced together enough of \nthis, he will have called for reinforcements.\n",
	/* 79*/ "There will be no outside help for \nMr. Carrington. The technology you gave us \nis installed in Nevada and fully operational. \nWe can intercept any craft they use.\n",
	/* 80*/ "Then the devices we gave you are working \ncorrectly? Good. Because we believe that \nanything which does not work correctly \nshould be destroyed. Consider that as you \nfollow your 'backup plans.'\n",
	/* 81*/ "Agent Dark reporting in! Prepare to \nreceive a download of the meeting data. \nPriority request for an Institute Support \nTeam to protect the President before he \ngoes to Alaska.\n",
	/* 82*/ "No time for that now, Agent Dark. There's \nbeen a development during radio silence. \nThe craft carrying those 'friends' I was \ntalking about was shot down over Nevada. \nThe weapon responsible was fired from \nArea 51; that's where the survivors and \ndebris will have been taken. You're to \nprep for immediate dispatch when you \nreturn here. Carrington out.\n",
	/* 83*/ "Area 51? But what about the President?\n",
};

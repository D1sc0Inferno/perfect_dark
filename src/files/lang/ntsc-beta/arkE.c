#include <ultra64.h>

char *lang[] = {
	/*  0*/ "|Background - \n\nThe alarm has been given, and there are dataDyne shock troops ready for you throughout the building. Exit via the foyer is impossible due to the number of ground troops present. The transport will collect you and Dr. Caroll from the helipad.\n\n|Carrington - \n\nI don't have to remind you to protect Dr. Caroll at all costs, Joanna. Cassandra and dataDyne are going to be throwing all the obstacles they can in your path to prevent you from getting Dr. Caroll out. Good luck.\n\n|Objective One: - Gain Access to Upper Floors\n\nFight your way around the foyer until you can get access to one of the lifts that will take you and Dr. Caroll to the upper floors of the building.\n\n|Objective Two: - Reactivate Elevator\n\nWe traced an order to shut down the only accessible elevator to a PC on the lowest floor of offices. You have to find that PC and change the order to get the elevator going again.\n\n|Objective Three: - Destroy dataDyne Gunship\n\nThere is a dataDyne security gunship circling the building which outguns your jumpship and will shoot you out of the sky. Terminate it with extreme prejudice, since it will be trying to do the same thing to you.\n\n|Objective Four: - Defeat Cassandra's Bodyguards\n\nWe suspect that Cassandra has deployed her bodyguards to block the route to the helipad. It is almost certain that you'll be unable to avoid them, so expect serious resistance when you encounter them.\n\n|Objective Five: - Return to Helipad for Evac\n\nGet to the helipad where your dropship will be waiting. And don't forget Dr. Caroll.\n\nEND\n",
	/*  1*/ "LUCERNE TOWER\n",
	/*  2*/ "|Background - \n\nThe alarm has been given, and there are dataDyne shock troops ready for you throughout the building. Exit via the foyer is impossible due to the number of ground troops present. The transport will collect you and Dr. Caroll from the helipad.\n\n|Carrington - \n\nI don't have to remind you to protect Dr. Caroll at all costs, Joanna. Cassandra and dataDyne are going to be throwing all the obstacles they can in your path to prevent you from getting Dr. Caroll out. Good luck.\n\n|Objective One: - Gain Access to Upper Floors\n\nFight your way around the foyer until you can get access to one of the lifts that will take you and Dr. Caroll to the upper floors of the building.\n\n|Objective Two: - Destroy dataDyne Gunship\n\nThere is a dataDyne security gunship circling the building which outguns your jumpship and will shoot you out of the sky. Terminate it with extreme prejudice, since it will be trying to do the same thing to you.\n\n|Objective Three: - Defeat Cassandra's Bodyguards\n\nWe suspect that Cassandra has deployed her bodyguards to block the route to the helipad. It is almost certain that you'll be unable to avoid them, so expect serious resistance when you encounter them.\n\n|Objective Four: - Return to Helipad for Evac\n\nGet to the helipad where your dropship will be waiting. And don't forget Dr. Caroll.\n\nEND\n",
	/*  3*/ "|Background - \n\nThe alarm has been given, and there are dataDyne shock troops ready for you throughout the building. Exit via the foyer is impossible due to the number of ground troops present. The transport will collect you and Dr. Caroll from the helipad.\n\n|Carrington - \n\nI don't have to remind you to protect Dr. Caroll at all costs, Joanna. Cassandra and dataDyne are going to be throwing all the obstacles they can in your path to prevent you from getting Dr. Caroll out. Good luck.\n\n|Objective One: - Gain Access to Upper Floors\n\nFight your way around the foyer until you can get access to one of the lifts that will take you and Dr. Caroll to the upper floors of the building.\n\n|Objective Two: - Defeat Cassandra's Bodyguards\n\nWe suspect that Cassandra has deployed her bodyguards to block the route to the helipad. It is almost certain that you'll be unable to avoid them, so expect serious resistance when you encounter them.\n\n|Objective Three: - Return to Helipad for Evac\n\nGet to the helipad where your dropship will be waiting. And don't forget Dr. Caroll.\n\nEND\n",
	/*  4*/ NULL,
	/*  5*/ NULL,
	/*  6*/ NULL,
	/*  7*/ NULL,
	/*  8*/ NULL,
	/*  9*/ "Access foyer elevator\n",
	/* 10*/ "Reactivate office elevator\n",
	/* 11*/ "Destroy dataDyne hovercopter\n",
	/* 12*/ "Defeat Cassandra's bodyguards\n",
	/* 13*/ "Rendezvous at helipad\n",
	/* 14*/ "Accessing elevator controls...\n",
	/* 15*/ "LIGHTS ARE NOW ON!\n",
	/* 16*/ "Dr. Caroll has been killed!\n",
	/* 17*/ "Dr. Caroll is under attack!\n",
	/* 18*/ "Dr. Caroll has been damaged!\n",
	/* 19*/ "Too late! She's here...\n",
	/* 20*/ "You've become quite an annoyance...\n",
	/* 21*/ "Good night, Ms. Dark.\n",
	/* 22*/ "LIGHTS NOW ON\n",
	/* 23*/ "LIGHTS NOW OFF\n",
	/* 24*/ "MISSION FAILED\n",
	/* 25*/ "MISSION SUCCESSFUL\n",
	/* 26*/ "Helichopper warning goes here.\n",
	/* 27*/ "Obtain Night Vision.\n",
	/* 28*/ "Cassandra De Vries'\n",
	/* 29*/ "Night Vision\n",
	/* 30*/ "Night Vision\n",
	/* 31*/ "Picked up Night Vision.\n",
	/* 32*/ "We meet again, girl!\n",
	/* 33*/ "Foyer elevator accessed.\n",
	/* 34*/ "Office elevator door has been unlocked.\n",
	/* 35*/ "DataDyne Hovercopter eliminated.\n",
	/* 36*/ "Cassandra's bodyguards have been defeated.\n",
	/* 37*/ "That's not how it goes.\n",
	/* 38*/ "Yes, it is.\n",
	/* 39*/ "Give it to me - you're doing it wrong.\n",
	/* 40*/ "Stop annoying me.\n",
	/* 41*/ "Will you just hurry up!\n",
	/* 42*/ "Oh, no...too late.\n",
	/* 43*/ "She's here...\n",
	/* 44*/ "Get her!\n",
	/* 45*/ "Critical mission object destroyed. \n",
	/* 46*/ "Obtain CamSpy.\n",
	/* 47*/ "Dr. Caroll's\n",
	/* 48*/ "CamSpy\n",
	/* 49*/ "A CamSpy\n",
	/* 50*/ "Picked up a CamSpy.\n",
	/* 51*/ "They've locked down the ground floor - \nget to the elevator!\n",
	/* 52*/ "That copter needs to be taken out, or \nthe jumpship'll get shot down!\n",
	/* 53*/ "I can't leave any bodyguards standing.\n",
	/* 54*/ "Don't keep the jumpship waiting - \nget back to the landing pad.\n",
	/* 55*/ "Obtain alpha key card.\n",
	/* 56*/ "Guard's\n",
	/* 57*/ "Office key card\n",
	/* 58*/ "Office key card\n",
	/* 59*/ "Picked up Cassandra's office key card.\n",
	/* 60*/ "Sound the alarm - she's here!\n",
	/* 61*/ "Lights out!\n",
	/* 62*/ "What the...?\n",
	/* 63*/ "Going somewhere?\n",
	/* 64*/ "Something I can do for you, old woman?\n",
	/* 65*/ "Return our sapient immediately! You don't\nknow what you're doing.\n",
	/* 66*/ "Yes I do. I'm leaving.\n",
	/* 67*/ "One more chance! Give it back, and you\ncould come and work for me.\n",
	/* 68*/ "Sorry! Gotta shoot.\n",
	/* 69*/ "You must get the sapient back. We cannot \nproceed without it.\n",
	/* 70*/ "I know that!\n",
	/* 71*/ "I also know who to talk to...\nMr. Carrington.\n",
	/* 72*/ "Elevator door is inactive on this floor.\n",
	/* 73*/ NULL,
	/* 74*/ NULL,
	/* 75*/ NULL,
};

#include <ultra64.h>

char *lang[] = {
	/*  0*/ "|Background - \n\nKnocked unconscious during the evacuation of the Carrington Institute, Joanna wakes to find herself a prisoner aboard a Skedar assault ship.\n\n|Carrington - Not Available.\n\n|Elvis - \n\nJoanna! I'm following the assault ship that is holding you! With me are two Maian protectors from the delegation at the White House. If you can get us aboard, we can help you take over the ship.\n\n|Objective One: - Disable Shield System\n\nThe shield system prevents any docking maneuvers from taking place. Drop the shields so Elvis and his companions can start an approach.\n\n|Objective Two: - Open Hangar Doors\n\nThe docking system is normally controlled automatically - it must have been overridden from the bridge. Open the doors using the local controls overlooking the hangar, and Elvis can finish the landing cycle.\n\n|Objective Three: - Access Navigational Systems\n\nGet Elvis to the star map so that he can find out where the assault ship is heading. There might also be the locations of Skedar strongholds within the star map - this information can be used for decisive strikes by the Maian Fleet.\n\n|Objective Four: - Sabotage Engine Systems\n\nThe plan to take over the assault ship might go awry if the Commander alters from the set course. Tamper with the engines so that the ship comes to a halt.\n\n|Objective Five: - Gain Control of Bridge\n\nOnce the bridge is taken, the ship is no longer under Skedar control. Only the Commander remains inside.\n\nEND\n",
	/*  1*/ "SKEDAR ASSAULT SHIP\n",
	/*  2*/ "|Background - \n\nKnocked unconscious during the evacuation of the Carrington Institute, Joanna wakes to find herself a prisoner aboard a Skedar assault ship.\n\n|Carrington - Not Available.\n\n|Elvis - \n\nJoanna! I'm following the assault ship that is holding you! With me are two Maian protectors from the delegation at the White House. If you can get us aboard, we can help you take over the ship.\n\n|Objective One: - Disable Shield System\n\nThe shield system prevents any docking maneuvers from taking place. Drop the shields so Elvis and his companions can start an approach.\n\n|Objective Two: - Access Navigational Systems\n\nGet Elvis to the star map so that he can find out where the assault ship is heading. There might also be the locations of Skedar strongholds within the star map - this information can be used for decisive strikes by the Maian Fleet.\n\n|Objective Three: - Sabotage Engine Systems\n\nThe plan to take over the assault ship might go awry if the Commander alters from the set course. Tamper with the engines so that the ship comes to a halt.\n\n|Objective Four: - Gain Control of Bridge\n\nOnce the bridge is taken, the ship is no longer under Skedar control. Only the Commander remains inside.\n\nEND\n",
	/*  3*/ "|Background - \n\nKnocked unconscious during the evacuation of the Carrington Institute, Joanna wakes to find herself a prisoner aboard a Skedar assault ship.\n\n|Carrington - Not Available.\n\n|Elvis - \n\nJoanna! I'm following the assault ship that is holding you! With me are two Maian protectors from the delegation at the White House. If you can get us aboard, we can help you take over the ship.\n\n|Objective One: - Disable Shield System\n\nThe shield system prevents any docking maneuvers from taking place. Drop the shields so Elvis and his companions can start an approach.\n\n|Objective Two: - Access Navigational Systems\n\nGet Elvis to the star map so that he can find out where the assault ship is heading. There might also be the locations of Skedar strongholds within the star map - this information can be used for decisive strikes by the Maian Fleet.\n\n|Objective Three: - Gain Control of Bridge\n\nOnce the bridge is taken, the ship is no longer under Skedar control. Only the Commander remains inside.\n\nEND\n",
	/*  4*/ "\n",
	/*  5*/ "Disable shield system\n",
	/*  6*/ "Open hangar doors\n",
	/*  7*/ "Access navigational systems\n",
	/*  8*/ "Sabotage engine systems\n",
	/*  9*/ "Gain control of bridge\n",
	/* 10*/ "Ship's shields have been lowered.\n",
	/* 11*/ "Hangar doors have been opened.\n",
	/* 12*/ "Elvis has been killed.\n",
	/* 13*/ "Navigational information has been retrieved.\n",
	/* 14*/ "Lift has been activated.\n",
	/* 15*/ "All hangar Skedar have been killed.\n",
	/* 16*/ "Outside, Joanna. Get the shields down and\nwe can help you.\n",
	/* 17*/ "You've got to open the hangar doors so we can dock.\n",
	/* 18*/ "Okay, we're in. I'll meet you in the hangar.\n",
	/* 19*/ "Good to see you, Joanna.\n",
	/* 20*/ "Take this - you should find it useful...\n",
	/* 21*/ "Received AR34 assault rifle.\n",
	/* 22*/ "Time to head upwards. I'll take this lift;\nyou take the other one.\n",
	/* 23*/ "Engines have been disabled.\n",
	/* 24*/ "Look out Joanna! I think we've made them angry...\n",
	/* 25*/ "Bridge has been captured.\n",
	/* 26*/ "You go on ahead, Jo. I'll secure the perimeter.\nWe'll meet up later.\n",
	/* 27*/ "I've got to get those shields down to let Elvis\nin. I need all the help I can get.\n",
	/* 28*/ "Now only the hangar bay doors are in the way.\n",
	/* 29*/ "This machine contains the Skedar star maps.\n",
	/* 30*/ "If we control the bridge, then the ship is ours.\n",
	/* 31*/ "Time to head upwards...\n",
	/* 32*/ "Oohhh... I'd better not be where I think I am.\n",
	/* 33*/ "And it's worse than that, my dear. Just look who you've got for company.\n",
	/* 34*/ "You! I thought you'd managed to escape. We found no trace of you at all.\n",
	/* 35*/ "You couldn't find me. But there was no hiding from the Skedar, as you and Mr. Carrington just discovered.\n",
	/* 36*/ "This is it. Wait there! I'll make a distraction; it will give you a chance to get out. Use it or we'll both die.\n",
	/* 37*/ "Why are you doing this, Cassandra?\n",
	/* 38*/ "The Skedar used me, Joanna. You are my best chance for revenge.\n",
	/* 39*/ "Eeeeaaarrrrggghhh!!!\n",
	/* 40*/ "Wow. That's the first time I've seen another planet from space. It's beautiful.\n",
	/* 41*/ "Hmmmm?\n",
	/* 42*/ "I don't... I don't believe it!\n",
	/* 43*/ "Elvis? What is it?\n",
	/* 44*/ "Where are you going?\n",
	/* 45*/ "We have to get down to the surface! Follow me!\n",
	/* 46*/ "We have to get out of here!\n",
	/* 47*/ "Hangar doors locked - shields still active.\n",
	/* 48*/ "Critical mission object destroyed.\n",
	/* 49*/ "Ammo depleted - consoles can't be destroyed.\n",
	/* 50*/ "Obtain De Vries' necklace.\n",
	/* 51*/ "Cassandra De Vries'\n",
	/* 52*/ "Necklace\n",
	/* 53*/ "De Vries' necklace\n",
	/* 54*/ "Picked up De Vries' necklace.\n",
	/* 55*/ NULL,
};

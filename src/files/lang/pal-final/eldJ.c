#include <ultra64.h>

char *lang[] = {
	/*  0*/ "|Background - \n\nDaniel Carrington is being held hostage at his private villa. A message from Cassandra De Vries has laid out the terms: Daniel's life for the return of the AI known as Dr. Caroll. What dataDyne doesn't know is that the AI was at the villa when they struck. Our guess is that Daniel concealed it safely before they found him.\n\n |Carrington - \n\nNot Available.\n\n|Objective One: - Eliminate Rooftop Snipers\n\nAs soon as we got the ransom demand we did a recon overflight of the villa. An examination of the data revealed that there are several snipers on the rooftops - if you are to move around safely you'll have to take them out.\n\n|Objective Two: - Activate Wind Generator\n\nThe wind generator and power storage device are not active - we suspect Daniel shut them down to deny the dataDyne hit squad access to the villa's systems.Once the power is restored, all of the doors will be open to you. Unfortunately, they will also be open to the hit squad.\n\n|Objective Three: - Locate and Stop dataDyne Hackers\n\nThere have been sporadic attempts in the past from dataDyne hackers trying to gain entry to Institute files. Their job would be much easier if they tried anything inside the villa, due to the direct link between there and the Institute. If such an attempt is made you would need to respond swiftly. Make sure that the terminals are not damaged as they contain data that is vital to the Institute.\n\n|Objective Four: - Capture Enemy Guard\n\nCapturing a member of the dataDyne assault team will give us an idea of what their real goals are. Remember not to kill them - knock them unconscious if possible, or if you're really good get them to give up.\n\n|Objective Five: - Rescue Carrington\n\nOnly Daniel knows the exact whereabouts of Dr. Caroll. Sooner or later dataDyne will figure this out, and get to work on Daniel to make him tell them what they want to know. Once they know where the AI is, Daniel's life is forfeit.\n\nEND\n",
	/*  1*/ "CARRINGTON VILLA\n",
	/*  2*/ "|Background - \n\nDaniel Carrington is being held hostage at his private villa. A message from Cassandra De Vries has laid out the terms: Daniel's life for the return of the AI known as Dr. Caroll. What dataDyne don't know is that the AI was at the villa when they struck. Our guess is that Daniel concealed it safely before they found him.\n\n |Carrington - \n\nNot Available.\n\n|Objective One: - Save the Negotiator\n\nA member of the Institute's staff has volunteered to be used as a distraction to help you get in. She will almost certainly be shot by dataDyne soldiers unless you take out those soldiers quickly. Hit the ground moving.\n\n|Objective Two: - Eliminate Rooftop Snipers\n\nAs soon as we got the ransom demand we did a recon overflight of the villa. An examination of the data revealed that there are several snipers on the rooftops - if you are to move around safely you'll have to take them out.\n\n|Objective Three: - Activate Wind Generator\n\nThe wind generator and power storage device are not active - we suspect Daniel shut them down to deny the dataDyne hit squad access to the villa's systems.Once the power is restored, all of the doors will be open to you. Unfortunately, they will also be open to the hit squad.\n\n|Objective Four: - Rescue Carrington\n\nOnly Daniel knows the exact whereabouts of Dr. Caroll. Sooner or later dataDyne will figure this out, and get to work on Daniel to make him tell them what they want to know. Once they know where the AI is, Daniel's life is forfeit.\n\nEND\n",
	/*  3*/ "|Background - \n\nDaniel Carrington is being held hostage at his private villa. A message from Cassandra De Vries has laid out the terms: Daniel's life for the return of the AI known as Dr. Caroll. What dataDyne don't know is that the AI was at the villa when they struck. Our guess is that Daniel concealed it safely before they found him.\n\n |Carrington - \n\nNot Available.\n\n|Objective One: - Save the Negotiator\n\nA member of the Institute's staff has volunteered to be used as a distraction to help you get in. She will almost certainly be shot by dataDyne soldiers unless you take out those soldiers quickly. Hit the ground moving.\n\n|Objective Two: - Activate Wind Generator\n\nThe wind generator and power storage device are not active - we suspect Daniel shut them down to deny the dataDyne hit squad access to the villa's systems.Once the power is restored, all of the doors will be open to you. Unfortunately, they will also be open to the hit squad.\n\n|Objective Three: - Rescue Carrington\n\nOnly Daniel knows the exact whereabouts of Dr. Caroll. Sooner or later dataDyne will figure this out, and get to work on Daniel to make him tell them what they want to know. Once they know where the AI is, Daniel's life is forfeit.\n\nEND\n",
	/*  4*/ "\n",
	/*  5*/ "Save the Negotiator\n",
	/*  6*/ "Eliminate Rooftop Snipers\n",
	/*  7*/ "Activate Wind Generator\n",
	/*  8*/ "Locate and Eliminate Datadyne Hackers\n",
	/*  9*/ "Rescue Carrington\n",
	/* 10*/ "Capture Datadyne Guard\n",
	/* 11*/ "Negotiator has been killed\n",
	/* 12*/ "Snipers have been eliminated\n",
	/* 13*/ "Negotiator has escaped to safety.\n",
	/* 14*/ "Cooling Systems Have Been Activated.\n",
	/* 15*/ "Cooling Systems Have Been De-Activated.\n",
	/* 16*/ "Power Systems Have Been Activated.\n",
	/* 17*/ "Power Systems Have Been De-Activated.\n",
	/* 18*/ "Windmill Has Been Re-Activated.\n",
	/* 19*/ "Windmill Has Been De-Activated.\n",
	/* 20*/ "Electicity Has Been Restored To The Villa.\n",
	/* 21*/ "Critical Mission Object Has Been Destroyed.\n",
	/* 22*/ "Joanna! It's Grimshaw. We've got hackers at \n the villa! You've got to stop them\n before they get to our files.\n",
	/* 23*/ "Hackers have uploaded vital data.\n",
	/* 24*/ "Hackers have been eliminated.\n",
	/* 25*/ "Carrington Has Been Rescued\n",
	/* 26*/ "All objectives not completed - mission failed.\n",
	/* 27*/ "PC gun\n",
	/* 28*/ "Sniper RIfle\n",
	/* 29*/ "Enemy guard has been subdued.\n",
	/* 30*/ "Obtain Door Key\n",
	/* 31*/ "Guards\n",
	/* 32*/ "Door Key\n",
	/* 33*/ "Door Key\n",
	/* 34*/ "Picked up a door key.\n",
	/* 35*/ "If I get the wind generator back online,\nI'll get power to the lower basement.\n",
	/* 36*/ "I've got to be quick or they'll kill\nthe negotiator!\n",
	/* 37*/ "Here's where they must be holding Daniel.\n",
	/* 38*/ "Those hackers have to be stopped before\nI rescue Daniel.\n",
	/* 39*/ "Agent Dark Mission Log, 1846 hours. Last night we got a call from Cassandra de Vries. A dataDyne team have taken Daniel Carrington hostage at his private villa on the coast, and they say they will spare his life in exchange for the AI.",
	/* 40*/ "Unfortunately we don't have it. Daniel and Dr. Caroll were at the villa to discuss 'matters of mutual interest'. It looks like Daniel found a way to hide Dr. Caroll inside the villa when the dataDyne hit squad arrived.",
	/* 41*/ "Hopefully our phoney negotiator ploy will give me a chance to surprise the dataDyne squad. This time it's not just my life on the line.",
	/* 42*/ "Sir? Are you injured?",
	/* 43*/ "No Joanna, I'm okay, but those dataDyne thugs made me tell them where I'd hidden Dr. Caroll. If only I'd held out for a few minutes more...",
	/* 44*/ "It's not your fault sir. I should have been quicker.",
	/* 45*/ "Don't blame yourself, Joanna. Dr. Caroll told me that he expected this to happen. Actually, when they recaptured him, the dataDyne team got over-confident and let slip a few facts when they thought I was unconscious. They mentioned a meeting in the G5 building in Chicago, Illinois tonight. I want you to be there, but that doesn't leave you a lot of time to get ready.",
	/* 46*/ "That won't be a problem, sir. So, did Dr. Caroll have any useful information for you?",
	/* 47*/ "Oh, yes, indeed. He certainly did, and I'll brief you when you're on route to Chicago. We might still be able to help him, even after those butchers remove his personality. He thinks they'll keep a copy of it in a safe place. It's about time I called in some friends to deal with dataDyne.",
	/* 48*/ NULL,
	/* 49*/ NULL,
	/* 50*/ NULL,
	/* 51*/ NULL,
};

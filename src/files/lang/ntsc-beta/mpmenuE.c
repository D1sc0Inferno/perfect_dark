#include <ultra64.h>

char *lang[] = {
	/*  0*/ "Most Suicidal\n",
	/*  1*/ "Who Needs Ammo?\n",
	/*  2*/ "Least Shielded\n",
	/*  3*/ "Best Protected\n",
	/*  4*/ "Marksmanship\n",
	/*  5*/ "Most Professional\n",
	/*  6*/ "Most Deadly\n",
	/*  7*/ "Most Harmless\n",
	/*  8*/ "Most Cowardly\n",
	/*  9*/ "Most Frantic\n",
	/* 10*/ "Most Honorable\n",
	/* 11*/ "Most Dishonorable\n",
	/* 12*/ "Shortest Life\n",
	/* 13*/ "Longest Life\n",
	/* 14*/ "Double Kill\n",
	/* 15*/ "Triple Kill\n",
	/* 16*/ "Quad Kill\n",
	/* 17*/ "Game Setup\n",
	/* 18*/ "Load Settings\n",
	/* 19*/ "Scenario\n",
	/* 20*/ "Arena\n",
	/* 21*/ "Options\n",
	/* 22*/ "Teams\n",
	/* 23*/ "Weapons\n",
	/* 24*/ "Limits\n",
	/* 25*/ "Simulants\n",
	/* 26*/ "Save Settings\n",
	/* 27*/ "Abort Game\n",
	/* 28*/ "Player Setup\n",
	/* 29*/ "Load Player\n",
	/* 30*/ "Name\n",
	/* 31*/ "Character\n",
	/* 32*/ "Handicap\n",
	/* 33*/ "Control\n",
	/* 34*/ "Player Options\n",
	/* 35*/ "Statistics\n",
	/* 36*/ "Start Game\n",
	/* 37*/ "Drop Out\n",
	/* 38*/ "Save Player\n",
	/* 39*/ "Save Copy of Player\n",
	/* 40*/ "Stuff\n",
	/* 41*/ "Soundtrack\n",
	/* 42*/ "Team Names\n",
	/* 43*/ "Ratio\n",
	/* 44*/ "Lock\n",
	/* 45*/ "None\n",
	/* 46*/ "Last Winner\n",
	/* 47*/ "Last Loser\n",
	/* 48*/ "Random\n",
	/* 49*/ "Challenge\n",
	/* 50*/ "Combat Challenges\n",
	/* 51*/ "Abort Challenge\n",
	/* 52*/ "Abort\n",
	/* 53*/ "Are you sure you want\nto abort the game?\n",
	/* 54*/ "Abort\n",
	/* 55*/ "Cancel\n",
	/* 56*/ "%s\n",
	/* 57*/ "Accept\n",
	/* 58*/ "Cancel\n",
	/* 59*/ "Team Names\n",
	/* 60*/ "Back\n",
	/* 61*/ "Change Team Name\n",
	/* 62*/ "Soundtrack\n",
	/* 63*/ "Current:\n",
	/* 64*/ "Multiple Tunes\n",
	/* 65*/ "Back\n",
	/* 66*/ "Multiple Tunes\n",
	/* 67*/ "Random\n",
	/* 68*/ "Select Tunes\n",
	/* 69*/ "Select Tune\n",
	/* 70*/ "Team Control\n",
	/* 71*/ "Teams Enabled\n",
	/* 72*/ "Teams:\n",
	/* 73*/ "Auto Team...\n",
	/* 74*/ "Back\n",
	/* 75*/ "Auto Team\n",
	/* 76*/ "Two Teams\n",
	/* 77*/ "Three Teams\n",
	/* 78*/ "Four Teams\n",
	/* 79*/ "Maximum Teams\n",
	/* 80*/ "Humans vs. Simulants\n",
	/* 81*/ "Human-Simulant Pairs\n",
	/* 82*/ "Cancel\n",
	/* 83*/ "Simulants\n",
	/* 84*/ "Add Simulant...\n",
	/* 85*/ "1:\n",
	/* 86*/ "2:\n",
	/* 87*/ "3:\n",
	/* 88*/ "4:\n",
	/* 89*/ "5:\n",
	/* 90*/ "6:\n",
	/* 91*/ "7:\n",
	/* 92*/ "8:\n",
	/* 93*/ "Clear All\n",
	/* 94*/ "Back\n",
	/* 95*/ "Difficulty:\n",
	/* 96*/ "Change Type...\n",
	/* 97*/ "Character...\n",
	/* 98*/ "Delete Simulant\n",
	/* 99*/ "Back\n",
	/*100*/ "Simulant Character\n",
	/*101*/ "Add Simulant\n",
	/*102*/ "Change Simulant\n",
	/*103*/ "Normal Simulants\n",
	/*104*/ "Special Simulants\n",
	/*105*/ "Ready!\n",
	/*106*/ "...and waiting\n",
	/*107*/ "Limits\n",
	/*108*/ "Time\n",
	/*109*/ "Score\n",
	/*110*/ "Restore Defaults\n",
	/*111*/ "Back\n",
	/*112*/ "No Limit\n",
	/*113*/ "%d\n",
	/*114*/ "%d Min\n",
	/*115*/ "Arena\n",
	/*116*/ "Dark\n",
	/*117*/ "Classic\n",
	/*118*/ "Random\n",
	/*119*/ "Skedar",
	/*120*/ "Pipes",
	/*121*/ "Ravine",
	/*122*/ "G5 Building",
	/*123*/ "Sewers",
	/*124*/ "Warehouse",
	/*125*/ "Grid",
	/*126*/ "Ruins",
	/*127*/ "Area 52",
	/*128*/ "Base",
	/*129*/ "Rooftop",
	/*130*/ "Fortress",
	/*131*/ "Villa",
	/*132*/ "Car Park",
	/*133*/ "Temple",
	/*134*/ "Complex",
	/*135*/ "Felicity",
	/*136*/ "Random",
	/*137*/ "Load Player\n",
	/*138*/ "B Button to cancel\n",
	/*139*/ "Load Game Settings\n",
	/*140*/ "%s:  Scenario: %s   Arena: %s    Simulants: %d",
	/*141*/ "Presets\n",
	/*142*/ "Player Name\n",
	/*143*/ "Character\n",
	/*144*/ "Load Head...\n",
	/*145*/ "Statistics for %s\n",
	/*146*/ "Kills:\n",
	/*147*/ "Deaths:\n",
	/*148*/ "Accuracy:\n",
	/*149*/ "Head Shots:\n",
	/*150*/ "Ammo Used:\n",
	/*151*/ "Damage Dealt:\n",
	/*152*/ "Pain Received:\n",
	/*153*/ "Games Played:\n",
	/*154*/ "Games Won:\n",
	/*155*/ "Games Lost:\n",
	/*156*/ "Time Spent:\n",
	/*157*/ "Distance:\n",
	/*158*/ "Medals Won:\n",
	/*159*/ "   Accuracy:\n",
	/*160*/ "   Head Shot:\n",
	/*161*/ "   KillMaster:\n",
	/*162*/ "   Survivor:\n",
	/*163*/ "Your Title:\n",
	/*164*/ "Back\n",
	/*165*/ "Completed Challenges\n",
	/*166*/ "Back\n",
	/*167*/ "Options\n",
	/*168*/ "Highlight Pickups\n",
	/*169*/ "Highlight Players\n",
	/*170*/ "Highlight Teams\n",
	/*171*/ "Radar\n",
	/*172*/ "Back\n",
	/*173*/ "Weapons\n",
	/*174*/ "Set:\n",
	/*175*/ "Current Weapon Setup:\n",
	/*176*/ "1:\n",
	/*177*/ "2:\n",
	/*178*/ "3:\n",
	/*179*/ "4:\n",
	/*180*/ "5:\n",
	/*181*/ "6:\n",
	/*182*/ "Back\n",
	/*183*/ "Save Game Setup\n",
	/*184*/ "Do you want to save over\nyour original game file?\n",
	/*185*/ "Save Over Original\n",
	/*186*/ "Save Copy\n",
	/*187*/ "Do Not Save\n",
	/*188*/ "Game File Name\n",
	/*189*/ "Enter a name for your\ngame setup file:\n",
	/*190*/ "Confirm\n",
	/*191*/ "Your player file is\nalways saved\nautomatically.\n",
	/*192*/ "Save a copy now?\n",
	/*193*/ "No\n",
	/*194*/ "Yes\n",
	/*195*/ "Drop Out\n",
	/*196*/ "Are you sure you\nwant to drop out?\n",
	/*197*/ "Drop Out\n",
	/*198*/ "Cancel\n",
	/*199*/ "Control\n",
	/*200*/ "Control Style\n",
	/*201*/ "Reverse Pitch\n",
	/*202*/ "Look Ahead\n",
	/*203*/ "Head Roll\n",
	/*204*/ "Auto-Aim\n",
	/*205*/ "Aim Control\n",
	/*206*/ "Sight on Screen\n",
	/*207*/ "Show Target\n",
	/*208*/ "Zoom Range\n",
	/*209*/ "Ammo on Screen\n",
	/*210*/ "Gun Function\n",
	/*211*/ "Paintball\n",
	/*212*/ "Back\n",
	/*213*/ "Hold\n",
	/*214*/ "Toggle\n",
	/*215*/ "Combat Options\n",
	/*216*/ "Briefcase Options\n",
	/*217*/ "Hacker Options\n",
	/*218*/ "Pop a Cap Options\n",
	/*219*/ "Hill Options\n",
	/*220*/ "Capture Options\n",
	/*221*/ "Boxes Options\n",
	/*222*/ "One-Hit Kills\n",
	/*223*/ "Slow Motion\n",
	/*224*/ "Fast Movement\n",
	/*225*/ "Display Team\n",
	/*226*/ "No Radar\n",
	/*227*/ "No Auto-Aim\n",
	/*228*/ "No Player Highlight\n",
	/*229*/ "No Pickup Highlight\n",
	/*230*/ "Highlight Target\n",
	/*231*/ "Highlight Terminal\n",
	/*232*/ "Boxes on Radar\n",
	/*233*/ "Hill on Radar\n",
	/*234*/ "Mobile Hill\n",
	/*235*/ "Time\n",
	/*236*/ "Show on Radar\n",
	/*237*/ "Highlight Briefcase\n",
	/*238*/ "Show on Radar\n",
	/*239*/ "Back\n",
	/*240*/ "Off\n",
	/*241*/ "On\n",
	/*242*/ "Smart\n",
	/*243*/ "Scenario\n",
	/*244*/ "Free for All!\n",
	/*245*/ "-Teamwork-\n",
	/*246*/ "Combat",
	/*247*/ "Hold the Briefcase",
	/*248*/ "Hacker Central",
	/*249*/ "Pop a Cap",
	/*250*/ "King of the Hill",
	/*251*/ "Capture the Case",
	/*252*/ "Touch That Box",
	/*253*/ "Combat",
	/*254*/ "Briefcase",
	/*255*/ "Hacker",
	/*256*/ "Pop",
	/*257*/ "Hill",
	/*258*/ "Capture",
	/*259*/ "Boxes",
	/*260*/ "Game Over\n",
	/*261*/ "Title:\n",
	/*262*/ "Weapon of Choice:\n",
	/*263*/ "Awards:\n",
	/*264*/ "1st\n",
	/*265*/ "2nd\n",
	/*266*/ "3rd\n",
	/*267*/ "4th\n",
	/*268*/ "5th\n",
	/*269*/ "6th\n",
	/*270*/ "7th\n",
	/*271*/ "8th\n",
	/*272*/ "9th\n",
	/*273*/ "10th\n",
	/*274*/ "11th\n",
	/*275*/ "12th\n",
	/*276*/ "Player Ranking\n",
	/*277*/ "Deaths\n",
	/*278*/ "Score\n",
	/*279*/ "Team Ranking\n",
	/*280*/ "Stats for %s",
	/*281*/ "Suicides\n",
	/*282*/ "Deaths\n",
	/*283*/ "Kills\n",
	/*284*/ "Inventory\n",
	/*285*/ "Control\n",
	/*286*/ "Game Time:\n",
	/*287*/ "End Game\n",
	/*288*/ "Pause\n",
	/*289*/ "Unpause\n",
	/*290*/ "End Game\n",
	/*291*/ "Are you sure?\n",
	/*292*/ "Cancel\n",
	/*293*/ "End Game\n",
	/*294*/ "PerfectHead\n",
	/*295*/ "Load A Saved Head\n",
	/*296*/ "Make A New Head\n",
	/*297*/ "Edit A Loaded Head\n",
	/*298*/ "Edit A PerfectHead\n",
	/*299*/ "Choose slot to edit:\n",
	/*300*/ "Cancel\n",
	/*301*/ "Make A New Head\n",
	/*302*/ "Load A Saved Head\n",
	/*303*/ "Where do you want to be able\n",
	/*304*/ "to use this head?\n",
	/*305*/ "Combat Simulator\n",
	/*306*/ "All Missions\n",
	/*307*/ "Both\n",
	/*308*/ "Cancel\n",
	/*309*/ "Camera Setup\n",
	/*310*/ "Insert your camera into your\n",
	/*311*/ "Game Boy Pak.\n",
	/*312*/ "Then, insert your Game Boy Pak\n",
	/*313*/ "into any controller.\n",
	/*314*/ "OK\n",
	/*315*/ "Cancel\n",
	/*316*/ "Error\n",
	/*317*/ "Game Boy Camera Not Detected!\n",
	/*318*/ "Please check all connections\n",
	/*319*/ "and try again.\n",
	/*320*/ "Cancel\n",
	/*321*/ "Choose Camera\n",
	/*322*/ "More than one camera detected.\n",
	/*323*/ "Please select which camera you\nwant to use\n",
	/*324*/ "OK\n",
	/*325*/ "Cancel\n",
	/*326*/ "PerfectHead\n",
	/*327*/ "Take A Picture Now\n",
	/*328*/ "Load Picture From Camera\n",
	/*329*/ "Cancel\n",
	/*330*/ "Load From Camera\n",
	/*331*/ "Choose picture to read from camera:\n",
	/*332*/ "Cancel\n",
	/*333*/ "Take Picture\n",
	/*334*/ "Shoot!\n",
	/*335*/ "Cancel\n",
	/*336*/ "Keep Picture\n",
	/*337*/ "Try Again\n",
	/*338*/ "Load PerfectHead\n",
	/*339*/ "Insert the Controller Pak\n",
	/*340*/ "containing the head you\n",
	/*341*/ "wish to load into any\n",
	/*342*/ "controller.\n",
	/*343*/ "Controller Pak:\n",
	/*344*/ "Cancel\n",
	/*345*/ "Source:\n",
	/*346*/ "Pak 1",
	/*347*/ "Pak 2",
	/*348*/ "Pak 3",
	/*349*/ "Pak 4",
	/*350*/ "<none>",
	/*351*/ "PerfectHead Editor\n",
	/*352*/ "Take Another Picture\n",
	/*353*/ "Change Head\n",
	/*354*/ "Position Picture\n",
	/*355*/ "Color Face & Hair\n",
	/*356*/ "Shape Head\n",
	/*357*/ "Remove Head\n",
	/*358*/ "Cancel Changes\n",
	/*359*/ "Keep Changes\n",
	/*360*/ "Shape Head\n",
	/*361*/ "Depth\n",
	/*362*/ "OK\n",
	/*363*/ "Cancel\n",
	/*364*/ "Position Image\n",
	/*365*/ "Brightness\n",
	/*366*/ "OK\n",
	/*367*/ "Cancel\n",
	/*368*/ "Choose Head\n",
	/*369*/ "OK\n",
	/*370*/ "Cancel\n",
	/*371*/ "Remove PerfectHead\n",
	/*372*/ "Are you sure you want to\n",
	/*373*/ "remove this head from memory?\n",
	/*374*/ "Delete\n",
	/*375*/ "Cancel\n",
	/*376*/ "Cancel Changes\n",
	/*377*/ "Are you sure you want to\n",
	/*378*/ "throw away your changes?\n",
	/*379*/ "Throw Away\n",
	/*380*/ "Go Back To Editor\n",
	/*381*/ "Save PerfectHead\n",
	/*382*/ "You have edited this head.\n",
	/*383*/ "Do you want to keep your changes?\n",
	/*384*/ "Keep\n",
	/*385*/ "Revert\n",
	/*386*/ "Save PerfectHead\n",
	/*387*/ "Your changes will be kept in memory.\n",
	/*388*/ "Would you like to save your changes\n",
	/*389*/ "to the controller pak?\n",
	/*390*/ "Save\n",
	/*391*/ "Don't Save\n",
	/*392*/ "Save PerfectHead\n",
	/*393*/ "You can now save your head on to\n",
	/*394*/ "a controller pak if you wish.\n",
	/*395*/ "If you want to do this, please\n",
	/*396*/ "ensure a controller pak is inserted\n",
	/*397*/ "and choose \"Save\".\n",
	/*398*/ "Save\n",
	/*399*/ "Don't Save\n",
	/*400*/ "Head Complete!\n",
	/*401*/ "To use your head in the combat simulator,\n",
	/*402*/ "select the head from the character menu\n",
	/*403*/ "of the player/simulant settings menu.\n",
	/*404*/ "Your Mission heads will now appear\n",
	/*405*/ "in any of the missions you play.\n",
	/*406*/ "You can now edit your head further if you wish.\n",
	/*407*/ "Finish\n",
	/*408*/ "Edit Head\n",
	/*409*/ "Head Color\n",
	/*410*/ "Face:\n",
	/*411*/ "Hairstyle:\n",
	/*412*/ "OK\n",
	/*413*/ "Cancel\n",
	/*414*/ "Press the B Button to go back.\n",
	/*415*/ "Hangar Information\n",
	/*416*/ "Holotraining\n",
	/*417*/ "Device List\n",
	/*418*/ "Information\n",
	/*419*/ "Locations\n",
	/*420*/ "Vehicles\n",
	/*421*/ "Character Profiles\n",
	/*422*/ "Other Information\n",
	/*423*/ "Training Stats\n",
	/*424*/ "Time Taken:\n",
	/*425*/ "Completed!\n",
	/*426*/ "Failed!\n",
	/*427*/ "Ok\n",
	/*428*/ "Resume\n",
	/*429*/ "Cancel\n",
	/*430*/ "Abort\n",
	/*431*/ "Character Profile\n",
	/*432*/ "Name:\n",
	/*433*/ "Age:\n",
	/*434*/ "Race:\n",
	/*435*/ "Press the B Button to go back.\n",
	/*436*/ "Cheats\n",
	/*437*/ "It is now safe to turn off your computer.\n",
	/*438*/ "Cancel\n",
	/*439*/ "Bronze\n",
	/*440*/ "Silver\n",
	/*441*/ "Gold\n",
	/*442*/ "Difficulty\n",
	/*443*/ "Difficulty:\n",
	/*444*/ "Select Difficulty:\n",
	/*445*/ "   \n",
	/*446*/ "Weapon\n",
	/*447*/ "Training Info\n",
	/*448*/ "Training Stats\n",
	/*449*/ "Completed!\n",
	/*450*/ "Score:\n",
	/*451*/ "Targets Destroyed:\n",
	/*452*/ "Difficulty:\n",
	/*453*/ "Time Taken:\n",
	/*454*/ "Weapon:\n",
	/*455*/ "Accuracy:\n",
	/*456*/ "Not Failed\n",
	/*457*/ "Out of Ammo\n",
	/*458*/ "Time Over\n",
	/*459*/ "Score Unattainable\n",
	/*460*/ "Too Inaccurate\n",
	/*461*/ "Bull's-eye\n",
	/*462*/ "Zone 1\n",
	/*463*/ "Zone 2\n",
	/*464*/ "Zone 3\n",
	/*465*/ "Hit total\n",
	/*466*/ "Scoring\n",
	/*467*/ "10\n",
	/*468*/ "5\n",
	/*469*/ "2\n",
	/*470*/ "1\n",
	/*471*/ "Ammo Limit:\n",
	/*472*/ "Time Limit:\n",
	/*473*/ "Min Accuracy:\n",
	/*474*/ "Goal Targets:\n",
	/*475*/ "Goal Score:\n",
	/*476*/ "Cheats\n",
	/*477*/ "Done\n",
	/*478*/ "Warning\n",
	/*479*/ "If you activate any cheats, then you\nwill be unable to progress further in the game\nwhile those cheats are active.\n",
	/*480*/ "OK\n",
	/*481*/ "Cancel\n",
	/*482*/ "Player %d: ",
	/*483*/ "Press START!\n",
	/*484*/ "Searching for Camera!\n",
	/*485*/ "Calibrating Camera\n",
	/*486*/ "Downloading Image\n",
	/*487*/ "Loading Image\n",
	/*488*/ "Saving Image\n",
	/*489*/ "Transfering Image\n",
	/*490*/ "Uploading Segment\n",
	/*491*/ "Initializing Controller Pak\n",
	/*492*/ "Getting PerfectHead\n",
	/*493*/ "Saving PerfectHead\n",
	/*494*/ "Auto Camera Adjustment\n",
	/*495*/ "Please Wait...\n",
	/*496*/ "ENTROPICDECAY\n",
	/*497*/ "ZERO-TAU\n",
	/*498*/ NULL,
	/*499*/ NULL,
};

#include <ultra64.h>

char *lang[] = {
	/*  0*/ "|Hintergrund - \n\nW�hrend der Evakuierung des Carrington-Instituts wurde Joanna bewusstlos geschlagen. Als Sie das Bewusstsein wiedererlangt, befindet sie sich als Gefangene auf einem Schiff der Skedar.\n\n|Carrington - Nicht verf�gbar.\n\n|Elvis - \n\nJoanna! Ich folge dem Schiff, auf dem du dich befindest! Zwei der Maianer von der Delegation aus dem Wei�en Haus sind mit mir unterwegs. Wenn du uns an Bord bringst, k�nnen wir gemeinsam versuchen, das Schiff zu �bernehmen.\n\n|1. Ziel: - Setzen Sie den Schutzschild au�er Betrieb!\n\nDer Schutzschild verhindert jegliches Andockman�ver. Fahren Sie die Schilde herunter, um Elvis und seinen Begleitern den Zutritt zum Schiff zu erm�glichen.\n\n|2. Ziel: - �ffnen Sie die Hangartore!\n\nDas Andock-System wird im Normalfall automatisch gesteuert. Es muss von der Br�cke aus auf manuelle Bedienung umgestellt worden sein. �ffnen Sie die Tore mit Hilfe der lokalen Kontrollinstrumente, um Elvis das Andocken zu erm�glichen.\n\n|3. Ziel: - Nehmen Sie Einblick in die Sternenkarte!\n\nBringen Sie Elvis zu der Sternenkarte, damit er die Destination des Schiffes ausfindig machen kann. Eventuell sind auf der Karte auch die Positionen von Skedar-Festungen verzeichnet. Diese Information kann der Maianischen Flotte sehr n�tzlich sein.\n\n|4. Ziel: - Sabotieren Sie die Antriebssysteme!\n\nDer Plan, das Schiff zu �bernehmen, k�nnte schief gehen, wenn der Kommandant den vorgegebenen Kurs �ndert. Manipulieren Sie den Antrieb, um das Schiff zu stoppen.\n\n|5. Ziel: - Bringen Sie die Br�cke unter Ihre Kontrolle!\n\nSobald Sie die Br�cke eingenommen haben, befindet sich das Schiff nicht mehr unter der Kontrolle der Skedar. Nur der Kommandant verbleibt.\n\nENDE\n",
	/*  1*/ "SKEDAR KRIEGSSCHIFF\n",
	/*  2*/ "|Hintergrund - \n\nW�hrend der Evakuierung des Carrington-Instituts wurde Joanna bewusstlos geschlagen. Als Sie das Bewusstsein wiedererlangt, befindet sie sich als Gefangene auf einem Schiff der Skedar.\n\n|Carrington - Nicht verf�gbar.\n\n|Elvis - \n\nJoanna! Ich folge dem Schiff, auf dem du dich befindest! Zwei der Maianer von der Delegation aus dem Wei�en Haus sind mit mir unterwegs. Wenn du uns an Bord bringst, k�nnen wir gemeinsam versuchen, das Schiff zu �bernehmen.\n\n|1. Ziel: - Setzen Sie den Schutzschild au�er Betrieb!\n\nDer Schutzschild verhindert jegliches Andockman�ver. Fahren Sie die Schilde herunter, um Elvis und seinen Begleitern den Zutritt zum Schiff zu erm�glichen.\n\n|2. Ziel: - Nehmen Sie Einblick in die Sternenkarte!\n\nBringen Sie Elvis zu der Sternenkarte, damit er die Destination des Schiffes ausfindig machen kann. Eventuell sind auf der Karte auch die Positionen von Skedar-Festungen verzeichnet. Diese Information kann der Maianischen Flotte sehr n�tzlich sein.\n\n|3. Ziel: - Sabotieren Sie die Antriebssysteme!\n\nDer Plan, das Schiff zu �bernehmen, k�nnte schief gehen, wenn der Kommandant den vorgegebenen Kurs �ndert. Manipulieren Sie den Antrieb, um das Schiff zu stoppen.\n\n|4. Ziel: - Bringen Sie die Br�cke unter Ihre Kontrolle!\n\nSobald Sie die Br�cke eingenommen haben, befindet sich das Schiff nicht mehr unter der Kontrolle der Skedar. Nur der Kommandant verbleibt.\n\nENDE\n",
	/*  3*/ "|Hintergrund - \n\nW�hrend der Evakuierung des Carrington-Instituts wurde Joanna bewusstlos geschlagen. Als Sie das Bewusstsein wiedererlangt, befindet sie sich als Gefangene auf einem Schiff der Skedar.\n\n|Carrington - Nicht verf�gbar.\n\n|Elvis - \n\nJoanna! Ich folge dem Schiff, auf dem du dich befindest! Zwei der Maianer von der Delegation aus dem Wei�en Haus sind mit mir unterwegs. Wenn du uns an Bord bringst, k�nnen wir gemeinsam versuchen, das Schiff zu �bernehmen.\n\n|1. Ziel: - Setzen Sie den Schutzschild au�er Betrieb!\n\nDer Schutzschild verhindert jegliches Andockman�ver. Fahren Sie die Schilde herunter, um Elvis und seinen Begleitern den Zutritt zum Schiff zu erm�glichen.\n\n|2. Ziel: - Nehmen Sie Einblick in die Sternenkarte!\n\nBringen Sie Elvis zu der Sternenkarte, damit er die Destination des Schiffes ausfindig machen kann. Eventuell sind auf der Karte auch die Positionen von Skedar-Festungen verzeichnet. Diese Information kann der Maianischen Flotte sehr n�tzlich sein.\n\n|3. Ziel: - Bringen Sie die Br�cke unter Ihre Kontrolle!\n\nSobald Sie die Br�cke eingenommen haben, befindet sich das Schiff nicht mehr unter der Kontrolle der Skedar. Nur der Kommandant verbleibt.\n\nENDE\n",
	/*  4*/ "\n",
	/*  5*/ "Setzen Sie den Schild au�er Betrieb!\n",
	/*  6*/ "�ffnen Sie die Hangartore!\n",
	/*  7*/ "Nehmen Sie Einblick in die Sternenkarte!\n",
	/*  8*/ "Sabotieren Sie die Antriebssysteme!\n",
	/*  9*/ "Entern Sie die Br�cke!\n",
	/* 10*/ "Die Schilde wurden heruntergefahren.\n",
	/* 11*/ "Die Hangartore wurden ge�ffnet.\n",
	/* 12*/ "Elvis wurde eliminiert.\n",
	/* 13*/ "Navigationsinformation wurde erlangt.\n",
	/* 14*/ "Aufzug wurde aktiviert.\n",
	/* 15*/ "Alle Skedar im Hangarbereich wurden eliminiert.\n",
	/* 16*/ "Joanna! Fahr die Schilde runter! Dann \nk�nnen wir dir helfen.\n",
	/* 17*/ "Du musst die Hangartore �ffnen, sonst k�nnen wir nicht andocken!\n",
	/* 18*/ "Okay, wir sind drin. Wir treffen uns im Hangar.\n",
	/* 19*/ "Es ist sch�n dich zu sehen, Joanna.\n",
	/* 20*/ "Nimm das - das kannst du sicher gut gebrauchen...\n",
	/* 21*/ "AR34 erhalten\n",
	/* 22*/ "Wir sollten nach oben gehen. Ich nehme diesen Aufzug; \nnimm du den anderen.\n",
	/* 23*/ "Die Maschinen wurden unbrauchbar gemacht.\n",
	/* 24*/ "Vorsicht Joanna! Ich glaube, sie sind jetzt sauer...\n",
	/* 25*/ "Die Br�cke wurde eingenommen.\n",
	/* 26*/ "Du gehst voraus, Jo. Ich sichere diesen Teil des Schiffes. \nWir treffen uns sp�ter.\n",
	/* 27*/ "Ich muss die Schilde runterfahren, damit Elvis \nlanden kann. Ich brauche jede Hilfe, die ich kriegen kann.\n",
	/* 28*/ "Jetzt sind nur noch die Hangartore im Weg.\n",
	/* 29*/ "In dieser Maschine werden die Sternenkarten gespeichert.\n",
	/* 30*/ "Wenn wir die Br�cke einnehmen, geh�rt das Schiff uns.\n",
	/* 31*/ "Wir sollten nach oben gehen...\n",
	/* 32*/ "Oohhh... Ich hoffe, ich bin nicht da, wo ich bef�rchte zu sein.\n",
	/* 33*/ "Es ist sogar noch schlimmer als das, Sch�tzchen. Und sieh nur, wer dir Gesellschaft leistet.\n",
	/* 34*/ "Sie! Ich dachte, Sie w�ren entkommen. Wir konnten keine Spur von Ihnen finden.\n",
	/* 35*/ "Ihr konntet mich zwar nicht finden, die Skedar konnten es sehr wohl. Das d�rfte dir und Mr. Carrington auch aufgefallen sein.\n",
	/* 36*/ "Bleib da stehen! Ich werde sie ablenken. Das verschafft dir eine Chance, um hier rauszukommen. Nimm sie wahr, oder...\n",
	/* 37*/ "Warum tun Sie das, Cassandra?\n",
	/* 38*/ "Die Skedar haben mich benutzt. Du bietest mir die M�glichkeit, Rache zu nehmen.\n",
	/* 39*/ "Eeeeaaarrrrggghhh!!!\n",
	/* 40*/ "Wow. Das ist das erste Mal, dass ich einen anderen Planeten vom Weltall aus sehe. Wundersch�n!\n",
	/* 41*/ "Hmmmm?\n",
	/* 42*/ "Ich... Ich glaube das nicht!\n",
	/* 43*/ "Elvis? Was ist das?\n",
	/* 44*/ "Wohin gehst du?\n",
	/* 45*/ "Wir m�ssen die Oberfl�che erreichen! Folge mir!\n",
	/* 46*/ "Wir m�ssen hier raus!\n",
	/* 47*/ "Hangartore verriegelt - Schilde sind noch aktiv.\n",
	/* 48*/ "Wichtiges Objekt zerst�rt.\n",
	/* 49*/ "Die Konsolen k�nnen ohne Munition nicht zerst�rt werden.\n",
	/* 50*/ "Erlangen Sie De Vries Halskette!\n",
	/* 51*/ "Cassandra De Vries\n",
	/* 52*/ "Halskette\n",
	/* 53*/ "Cassandra De Vries Halskette\n",
	/* 54*/ "De Vries Halskette aufgenommen\n",
	/* 55*/ NULL,
};

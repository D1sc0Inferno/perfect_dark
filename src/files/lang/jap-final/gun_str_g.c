#include <ultra64.h>

char *lang[] = {
	/*  0*/ "\n",
	/*  1*/ "Hits",
	/*  2*/ "Ein Fehlversuch\n",
	/*  3*/ "Versagt",
	/*  4*/ "Fehlversuche",
	/*  5*/ "Selber schuld!",
	/*  6*/ "unbewaffnet\n",
	/*  7*/ "Falcon 2\n",
	/*  8*/ "Falcon 2 (Schalld.)\n",
	/*  9*/ "Falcon 2 (Zielf.)\n",
	/* 10*/ "MagSec 4\n",
	/* 11*/ "Mauler\n",
	/* 12*/ "DY357 Magnum\n",
	/* 13*/ "DY357-LX\n",
	/* 14*/ "Phoenix\n",
	/* 15*/ "CMP150\n",
	/* 16*/ "AR34\n",
	/* 17*/ "Dragon\n",
	/* 18*/ "SuperDragon\n",
	/* 19*/ "K7 Avenger\n",
	/* 20*/ "Cyclone\n",
	/* 21*/ "MagSec SMG\n",
	/* 22*/ "RC-P120\n",
	/* 23*/ "Callisto NTG\n",
	/* 24*/ "Laptop-Gewehr\n",
	/* 25*/ "Schrotflinte\n",
	/* 26*/ "Reaper\n",
	/* 27*/ "Raketenwerfer\n",
	/* 28*/ "Devastator\n",
	/* 29*/ "Slayer\n",
	/* 30*/ "Maianische Granate\n",
	/* 31*/ "FS XR-20\n",
	/* 32*/ "Sniper-Gewehr\n",
	/* 33*/ "Armbrust\n",
	/* 34*/ "Bet�ubungs-Gewehr\n",
	/* 35*/ "Kampfmesser\n",
	/* 36*/ "Granate\n",
	/* 37*/ "N-Bombe\n",
	/* 38*/ "Zeitz�nder-Mine\n",
	/* 39*/ "Ann�herungs-Mine\n",
	/* 40*/ "Fernz�nder-Mine\n",
	/* 41*/ "ECM-Mine\n",
	/* 42*/ "FlashBang\n",
	/* 43*/ "Verkleidung\n",
	/* 44*/ "Rakete\n",
	/* 45*/ "Zielsuch-Rakete\n",
	/* 46*/ "Granaten\n",
	/* 47*/ "Laser\n",
	/* 48*/ "Bolzen\n",
	/* 49*/ "Psychosis-Gewehr\n",
	/* 50*/ "PP9i\n",
	/* 51*/ "CC13\n",
	/* 52*/ "KLO1313\n",
	/* 53*/ "KF7 Spezial\n",
	/* 54*/ "ZZT (9mm)\n",
	/* 55*/ "DMC\n",
	/* 56*/ "AR53\n",
	/* 57*/ "RC-P45\n",
	/* 58*/ "Test\n",
	/* 59*/ "Nachtsicht-Ger�t\n",
	/* 60*/ "CamSpy\n",
	/* 61*/ "DrugSpy\n",
	/* 62*/ "BombSpy\n",
	/* 63*/ "T�r-Decoder\n",
	/* 64*/ "Sprengsatz\n",
	/* 65*/ "R�ntgen-Scanner\n",
	/* 66*/ "extraterrestrisches Medipack\n",
	/* 67*/ "Koffer\n",
	/* 68*/ "Verkleidung\n",
	/* 69*/ "IR-Scanner\n",
	/* 70*/ "R-Tracker\n",
	/* 71*/ "Aktenkoffer\n",
	/* 72*/ "Suizid-Kapsel\n",
	/* 73*/ "Tarnkappe\n",
	/* 74*/ "Adrenalin\n",
	/* 75*/ "Data Uplink\n",
	/* 76*/ "Horizont-Scanner\n",
	/* 77*/ "Falcon 2 (s)\n",
	/* 78*/ "Falcon 2 (+)\n",
	/* 79*/ "FS XR-20\n",
	/* 80*/ "R-Werfer\n",
	/* 81*/ "A-Mine\n",
	/* 82*/ "Psychosis\n",
	/* 83*/ "Messer\n",
	/* 84*/ "DY357\n",
	/* 85*/ "Einzelfeuer\n",
	/* 86*/ "Schnellfeuer\n",
	/* 87*/ "Feuersto�\n",
	/* 88*/ "Streufeuer\n",
	/* 89*/ "Schrotflintenfeuer\n",
	/* 90*/ "Rail-gun-Effekt\n",
	/* 91*/ "Raketenabschuss\n",
	/* 92*/ "kalibrierte Rakete\n",
	/* 93*/ "Fly-By-Wire-Rakete\n",
	/* 94*/ "Schlag \n",
	/* 95*/ "Explosiv-Munition\n",
	/* 96*/ "gezielte Sch�sse\n",
	/* 97*/ "Magazin-Entleerung\n",
	/* 98*/ "Granat-Werfer\n",
	/* 99*/ "Wandhaftung\n",
	/*100*/ "Schlag\n",
	/*101*/ "entwaffnen\n",
	/*102*/ "Zielaufschaltung\n",
	/*103*/ "Zielfernrohr kompatibel\n",
	/*104*/ "halbes Magazin wird entleert\n",
	/*105*/ "Doppelschuss\n",
	/*106*/ "Schleifer\n",
	/*107*/ "Sedativ\n",
	/*108*/ "letale Injektion\n",
	/*109*/ "Messerstich\n",
	/*110*/ "vergiftetes Wurfmesser\n",
	/*111*/ "Zielsucher\n",
	/*112*/ "sofortige Eliminierung\n",
	/*113*/ "Verst�rkung\n",
	/*114*/ "Umkehr\n",
	/*115*/ "High Impact-Munition\n",
	/*116*/ "Tarnung\n",
	/*117*/ "Selbstschussanlage\n",
	/*118*/ "Ann�herungsfunktion\n",
	/*119*/ "Gefahrenmelder\n",
	/*120*/ "verz�gerte Explosion\n",
	/*121*/ "Expl. bei N�herung\n",
	/*122*/ "ferngez. Explosion\n",
	/*123*/ "Detonator\n",
	/*124*/ "Vier-Sekunden-Z�ndung\n",
	/*125*/ "Ann�herungs-Pinball\n",
	/*126*/ "Verz�gerte Detonation\n",
	/*127*/ "Expl. bei N�herung\n",
	/*128*/ "dreifacher Schuss\n",
	/*129*/ "aufgeladener Schuss\n",
	/*130*/ "Hocken\n",
	/*131*/ "infizieren\n",
	/*132*/ "Feuerst��e\n",
	/*133*/ "Kurzstrecken-Strahl\n",
	/*134*/ "Kontakt-Detonation\n",
	/*135*/ "Restlichtverst�rker\n",
	/*136*/ "Mobile Kamera\n",
	/*137*/ "R�ntgen-Sicht\n",
	/*138*/ "Infrarot-Scanning\n",
	/*139*/ "Zoom\n",
	/*140*/ "St�rsender\n",
	/*141*/ "Verbindung\n",
	/*142*/ "Zielidentifizierung\n",
	/*143*/ "Kann angelegt werden\n",
	/*144*/ "Sprengs�tze m�ssen platziert werden\n",
	/*145*/ "Teleskop-Sicht\n",
	/*146*/ "Schalld�mpfer\n",
	/*147*/ "Magazin-Erweiterung\n",
	/*148*/ "Ziel-Laser\n",
	/*149*/ "dataDyne\n",
	/*150*/ "Carrington\n",
	/*151*/ "Chesluk Industries\n",
	/*152*/ "Skedar\n",
	/*153*/ "Maianisch\n",
	/*154*/ "JonesCorp\n",
	/*155*/ "Auch ohne Waffen sind Sie ein w�rdiger Gegner. Setzen Sie Ihre F�uste ein, um Gegner niederzuschlagen oder zu entwaffnen. Anschlie�end k�nnen Sie deren Waffen aufsammeln.\n",
	/*156*/ "Diese zielgenaue und treffsichere Waffe wird von den Mitarbeitern des Instituts bevorzugt eingesetzt. Verwenden Sie die Laser-Zieleinheit, um Sch�sse punktgenau zu platzieren. Im Gefecht empfiehlt es sich, von der Pistolen-Funktion Gebrauch zu machen.\n",
	/*157*/ "Eine verbesserte Falcon 2, die noch zus�tzlich �ber einen Schalld�mpfer verf�gt.\n",
	/*158*/ "Eine verbesserte Falcon 2, die durch ein Pr�zisions-Fernrohr noch zus�tzlich an Genauigkeit gewinnt.\n",
	/*159*/ "Eine state-of-the-art Milit�r-Pistole, die haupts�chlich von Friedenstruppen eingesetzt wird. Die Waffe verf�gt �ber eine leichte Zoom-Funktion und feuert drei Kugeln gleichzeitig ab (Sekund�r).\n",
	/*160*/ "Wenn Sie auf einen Skedar treffen, ist er vermutlich mit dieser Waffe ausgestattet. Ein gro�es Magazin macht diese Pistole zu einer formidablen Handfeuerwaffe. Aber die Sekund�r-Funktion ist noch bemerkenswerter. Die Feuerkraft kann durch Aufladen verst�rkt werden, kostet aber Munition.\n",
	/*161*/ "Die dataDyne DY357 ist die st�rkste Handfeuerwaffe der Welt. Jede Kugel verf�gt �ber einen hohen Penetrations-Faktor und schleudert das Ziel zur�ck. Modifizierte Modelle werden nur f�r spezielle Kunden angefertigt. NSA-Chef Trent Easton verf�gt angeblich �ber eine vergoldete Variante.\n",
	/*162*/ "Die DY357-LX wurde speziell f�r Trent Easton angefertigt. Neben einem mit Tigerleder �berzogenen Griff verf�gt diese Pistole �ber einen integrierten Beschleuniger, der jeder Kugel noch mehr Kraft verleiht.\n",
	/*163*/ "Die Maianische Standard-Waffe. Eine flexible Waffe, die in der Lage ist, sowohl normale als auch Explosiv-Geschosse abzufeuern. Bei letzterer Variante wird nicht mehr Munition als sonst verbraucht.\n",
	/*164*/ "Ein dataDyne-Klassiker und Bestseller! Dieses Maschinengewehr verf�gt �ber ein 32er Magazin und eine Sonderfunktion. Jedes sichtbare Ziel kann fixiert werden. Dieses Feature macht jeden durchschnittlichen Sch�tzen zu einem Profi. Vorausgesetzt nat�rlich, er oder sie ist intelligent genug, die Waffe zu bedienen. Durchschnittliche Feuerrate: 900 rpm.\n",
	/*165*/ "Das Sturmgewehr des Carrington Instituts. Diese Waffe zeichnet sich durch hohe Reichweite und Magazin-Kapazit�t aus. Die Sekund�r-Funktion erm�glicht es dem Sch�tzen, sich zu bewegen, w�hrend er auf ein Ziel zoomt. Durchschnittliche Feuerrate: 750 rpm.\n",
	/*166*/ "Ein Standard-Gewehr mit �berraschungseffekt. Die Sekund�r-Funktion verwandelt es in eine Mine, die auf Bewegungen reagiert, aber nach wie vor wie ein herumliegendes Gewehr aussieht. Durchschnittliche Feuerrate: 700 rpm.\n",
	/*167*/ "Eine Variante des Dragon. Anstatt der Minen-Funktion verf�gt die Waffe �ber einen kleinen Granat-Werfer. Hervorragend als Unterst�tzung. Durchschnittliche Feuerrate: 700 rpm.\n",
	/*168*/ "High-tech pur von dataDyne. Der Avenger wird als Sturmgewehr eingesetzt. Die wichtigste Funktion ist ein Gefahren-Melder, der auf die Anwesenheit von Sprengk�rpern, Selbstschu�anlagen und �hnlichem reagiert. Durchschnittliche Feuerrate: 950 rpm.\n",
	/*169*/ "Speziell f�r Bodyguards. Die Cyclone wird auch von der Leibwache des Pr�sidenten eingesetzt. In Extremsituationen kann die Feuerrate um mehr als das Doppelte erh�ht werden. Allerdings wird durch diese Aktion das Magazin in sekundenschnelle geleert. Durchschnittliche Feuerrate: 900 rpm bzw. 2000 rpm.\n",
	/*170*/ "Die geheime Waffe des Carrington Instituts. Verf�gt �ber eine hohe Feuerrate und ein gro�es Magazin. Die Sekund�r-Funktion aktiviert eine Tarnfunktion, allerdings auf Kosten der Munition. Daher sollte diese Funktion mit gr��ter Vorsicht gehandhabt werden. Durchschnittliche Feuerrate: 1100 rpm.\n",
	/*171*/ "Ein weiteres Beispiel Maianischer Waffentechnik. Diese Waffe feuert normale Munition mit der gleichen Geschwindigkeit ab, wie jedes andere Gewehr. Es sind aber auch Hochgeschwindigkeits-Sch�sse m�glich, die Deckungen durchbrechen k�nnen. Der Nachteil dabei ist, dass die Feuerrate sinkt und aufgrund des R�cksto�es die Genauigkeit leidet. Durchschnittliche Feuerrate: 900 rpm bzw. 300 rpm.\n",
	/*172*/ "Ein Maschinengewehr, das in der Form eines Laptops designt wurde. In Tarnform kann nicht gefeuert werden. Diese Waffe h�lt auch einer genaueren Untersuchung stand. Sie wird wie jeder PC gebootet, verf�gt aber nur �ber ein Viertel des Speichers. Durschnittliche Feuerrate: 1000 rpm.\n",
	/*173*/ "Eine dataDyne-Waffe f�r die hausinterne Security. Ein neunfaches Magazin in Kombination mit Einfach- oder Doppelfeuer macht diese Waffe zu einem gef�hrlichen Nahkampf-Instrument.\n",
	/*174*/ "In den H�nden von jemandem, der den starken R�cksto� ausgleichen kann, ist dies wohl die schrecklichste aller Waffen. Auf jeden Fall eignet sie sich hervorragend f�r Gefechte in engen Korridoren. Maximale Feuerrate: 1800 rpm.\n",
	/*175*/ "An und f�r sich eine sehr unhandliche Waffe. Sie feuert eine Standard-Rakete oder eine langsamere Zielsuch-Rakete auf das Ziel ab.\n",
	/*176*/ "Ein von dataDyne entworfener Granatwerfer. Die Sekund�rfunktion umh�llt die Granate mit einer klebrigen Substanz, welche die Haftung an W�nden und Decken erm�glicht. Einige Sekunden sp�ter f�llt die Granate zu Boden, wo sie detoniert.\n",
	/*177*/ "Die Skedar lieben es, die Angst in den Augen ihrer Gegner zu sehen. Daher ist es beinahe selbstverst�ndlich, dass sie mit der Sekund�r-Funktion ihres Raketenwerfers ein Geschoss fernsteuern k�nnen. So k�nnen sie sich an den vergeblichen Fluchtversuchen ihrer Opfer weiden.\n",
	/*178*/ "Das Fernsicht-Gewehr ist ein Maianischer Hybrid zwischen einem R�ntgen-Scanner und einem Gewehr, das durch feste Objekte schie�en kann. Das Fernrohr ist in der Lage, langsame lebende Objekte zu erfassen und als festgelegten Zielpunkt zu speichern.\n",
	/*179*/ "Ausgestattet mit hervorragender Zoom-F�higkeit und Hochgeschwindigkeits-Kugeln ist dies wohl eines der besten Sniper-Gewehre aller Zeiten. In geduckter Haltung erzielen Sie die bestm�gliche Genauigkeit.\n",
	/*180*/ "Die Armbrust ist nicht gr��er als eine Pistole, und wird am Handgelenk des Agenten befestigt. Die Spannweite der Waffe kann aus Gr�nden der Geheimhaltung verringert werden. Die Munition umfasst bis zu f�nf entweder vergiftete oder regelrecht letale Bolzen.\n",
	/*181*/ "Eine Vorrichtung, die im Notfall auch als Waffe benutzt werden kann. Der eigentliche Verwendungszweck dient aber der Verabreichung von Sedativen. Eine volle Entladung des Reservoirs kann durchaus fatale Folgen haben.\n",
	/*182*/ "Ein sehr gro�es Kampfmesser. Es enth�lt eine Giftkapsel, die beim Aufprall nach einem Wurf zerbricht. Das Gift entfaltet im Normalfall nach ca. sechs Sekunden seine Wirkung. Eine typische dataDyne-Waffe.\n",
	/*183*/ "Eine verbesserte Version der Granate. Kann sowohl mit verz�gerter Detonation als auch mit Ann�herungs-Sensor eingesetzt werden. \n",
	/*184*/ "Eine kleine Neutronenbombe mit reduziertem Wirkungsradius. Die Detonation kann, je nach Wunsch, beim Aufprall oder bei Ann�herung erfolgen.\n",
	/*185*/ "Eine Mine mit verz�gerter Detonation. Diese Waffe verf�gt �ber einen Gefahren-Sensor, der als Sekund�r-Funktion aktiviert werden kann.\n",
	/*186*/ "Eine Mine, die auf Bewegung reagiert. Diese Waffe verf�gt �ber einen Gefahren-Sensor, der als Sekund�r-Funktion aktiviert werden kann.\n",
	/*187*/ "Diese Mine kann ferngez�ndet werden. Die Sekund�r-Funktion stellt quasi die Aktivierung dar.\n",
	/*188*/ "Diese St�rsender-Vorrichtung ist in der Lage, in jedem System, mit dem sie verbunden ist, eine fokusierte elektrische St�rung zu simulieren. Voraussetzung ist ein unmittelbarer Kontakt mit dem System.\n",
	/*189*/ "Der Laser wird am Handgelenk getragen und verf�gt �ber perfekte Pr�zision. Man kann mit ihm entweder Langstrecken-Energiest��e oder einen konstanten, hochkonzentrierten Kurstrecken-Energiestrom entladen.\n",
	/*190*/ "Genetische Stimulation f�r die Anwendung im Kampf. Nach der Anwendung erscheint der zeitliche Ablauf verlangsamt, was eine wesentlich h�here Reaktionsf�higkeit zur Folge hat.\n",
	/*191*/ "Das neueste Produkt in einer Reihe von Ger�ten, das nicht nur Restlicht verst�rkt, um eine klarere Wahrnehmung der Umgebung zu erm�glichen, sondern auch mit Hilfe eines Ziel-Algorithmus m�gliche Gefahren erkennt und entsprechend hervorhebt.\n",
	/*192*/ "Dieses Ger�t beinhaltet die kleinstm�gliche Antigravitations-Technologie. Als ultimative Spionage-Einheit bietet der CamSpy Video- und Audio-Links, Aufzeichnungsfunktion und eine integrierte Vorrichtung f�r spektroskopische Holografie.\n",
	/*193*/ "Dieser Scanner kann auf kurze Strecken jegliches Material durchleuchten. Blei bildet hier keine Ausnahme! Der Anwender nimmt eine vereinfachte, chromatisierte Darstellung der Umgebung wahr.\n",
	/*194*/ "Der IR-Scanner setzt mit Ultraschall modulierte Infrarot-Strahlung ein, um die Umgebung auf strukturelle Irregularit�ten zu untersuchen. Der Anwender erh�lt ein erstaunlich detailliertes Bild der Gegebenheiten. Au�erdem durchdringt der Scanner auch jegliche Art von Tarnkappen-Technologie und andere optische T�uschungen.\n",
	/*195*/ "Diese Maschine nutzt die lichtbrechenden Eigenschaften einer kristallinen extraterrestrischen Substanz, um den Tr�ger unsichtbar erscheinen zu lassen. Solange es zu keinen kybernetischen St�rungen kommt, bleibt das Feld intakt. Aber schon der Einsatz einer Waffe unterbricht diese Funktion.\n",
	/*196*/ "Ein binokularer Langstrecken-Scanner. Im Sichtfenster erscheint ein Bild, welches aus den beiden optischen Eingaben zusammengestellt wird. Zoom vorhanden.\n",
	/*197*/ "Mit Hilfe dieses Ger�ts k�nnen nahezu alle Arten von gespeicherten Daten abgerufen und direkt an die Hacker des Instituts gesandt werden. Eine Variante dieser Maschine erlaubt den Hackern durch einen direkten Link den Zutritt zum lokalen System.\n",
	/*198*/ "Ein ausgezeichnetes Suchger�t, das auf jegliche Parameter konfiguriert werden kann: Personen, Waffen, Gegenst�nde und Orte sind nur ein Bruchteil der Optionen, welche der Tracker anbietet.\n",
	/*199*/ "Ein modifizierter medizinischer Scanner, der die aktuellen Vital-Werte des Pr�sidenten anzeigt. Es werden auch �ltere Daten und verschiedene Behandlungen archiviert. Der Scanner ist in der Lage, die entsprechenden Werte auch �ber gr��ere Entfernungen zu erfassen. Dies ist auch m�glich, wenn sich das Ziel inmitten einer Menschenmenge befindet.\n",
	/*200*/ "Ein einfacher, aber wirkungsvoller Safeknacker, der elektronisch codierte Schl�sser normalerweise innerhalb von Sekunden knackt. Selbstverst�ndlich h�ngt dies auch vom jeweiligen Schloss ab.\n",
	/*201*/ "Ein Wunder Maianischer Technologie. Dieses Instrument erstellt eine automatische Diagnose und f�hrt die entsprechenden chirurgischen Eingriffe OHNE Einschnitte durch. Der Nachteil ist, dass es nur bei Maianern funktioniert.\n",
	/*202*/ "Ein kleiner Plastik-Sprengsatz, dessen Timer durch ein Siegel vor Missbrauch gesch�tzt wird. Die Schrapnelle sind mit Teflon ummantelt. Sehr b�se!\n",
	/*203*/ "Hierbei handelt es sich um eine direktionale Fusionsbombe, die so platziert wird, dass die Entladung nach unten geht. Dadurch werden die dataDyne-Labors verw�stet, und der Rest des Geb�udes st�rzt in das so entstandene Loch.\n",
	/*204*/ "Eine kleine Wanze, die an jedem Kommunikations-Ger�t angebracht werden kann. Diese Vorrichtung benutzt das Fremdsignal, um eine Verbindung zwischen dem Agenten und dem Institut herzustellen. Das Signal kann auch zur�ckverfolgt werden, um den Standort des Agenten zu bestimmen. Vor allem in Situationen h�chster Bedr�ngnis hat sich der Einsatz hervorragend bew�hrt. Ein unverzichtbares Zubeh�r f�r jeden Agenten.\n",
	/*205*/ "Das Innenleben dieser Wanze ist ein gut geh�tetes Geheimnis. Fest steht, dass der Selbstzerst�rungsmechanismus ein wichtiger Bestandteil ist. Man vermutet, das die Wanze auf quantenmolekularer Kommunikation aufbaut, welche die ph�nomenale Verl�sslichkeit des Ger�ts erkl�ren w�rde.\n",
	/*206*/ "Quantenmolekulare Technologie erm�glicht au�erordentlich akkurate Zielerfassung f�r Orbitalwaffen. Dadurch wird der Schadensradius auf den n�tigen Umfang beschr�nkt. \n",
	/*207*/ "Detaillierte Flugpl�ne, Kommunikationscodes und Frequenzen f�r die Air Force One. Beinhaltet auch Dechiffrier-Codes.\n",
	/*208*/ "Betrifft alle Daten der Forschungsarbeit, die durch dataDyne von der gekaperten Pelagic II am Meeresgrund durchgef�hrt wurden. Der Inhalt besteht aus Sonar-Karten, geologischen Daten, Gewebeproben etc.\n",
	/*209*/ "Die letzte Aufzeichnung der Pers�nlichkeit der k�nstlichen Intelligenz, die sich selbst Dr. Caroll nennt. Die Aufzeichnung wurde vor der L�schung und cerebralen Restrukturierung durchgef�hrt. Kann zu Studienzwecken herangezogen worden. dataDyne I.S.C.E.O. 23/6/23\n",
	/*210*/ "Ein chemischer Cocktail, der die Realit�tswahrnehmung der Zielperson umkehrt. Gut wird zu B�se, B�se wird zu gut, Freund und Feind tauschen die Pl�tze. Ein weiteres Forschungsergebnis, entwickelt von Trent Easton in der Area 51.\n",
	/*211*/ "Tragen Sie diese Verkleidung, um unerkannt zu bleiben.\n",
	/*212*/ "BEWEG\n",
	/*213*/ "ZEIT\n",
	/*214*/ "FERN\n",
	/*215*/ "AUTO\n",
	/*216*/ "SCHLAG\n",
	/*217*/ "Big King-Rakete\n",
	/*218*/ "Data Uplink\n",
	/*219*/ "Pr�sidenten-Scanner\n",
	/*220*/ "Auto-Chirurg\n",
	/*221*/ "Skedar-Bombe\n",
	/*222*/ "Komm-Wanze\n",
	/*223*/ "Wanze\n",
	/*224*/ "Peilger�t\n",
	/*225*/ "Flugpl�ne\n",
	/*226*/ "Forschungsdaten\n",
	/*227*/ "Sicherungsdiskette\n",
	/*228*/ "Schl�sselkarte\n",
	/*229*/ "Aktentasche\n",
	/*230*/ "Halskette\n",
	/*231*/ "Pr�sidentScan\n",
	/*232*/ "Adrenalin\n",
	/*233*/ "R-Scanner\n",
	/*234*/ "H-Scanner\n",
	/*235*/ "Ziel-Verst.\n",
	/*236*/ "Bei dieser Version des CamSpy wurde die Aufzeichnungs-Funktion durch einen starken Plastik-Sprengsatz ersetzt.\n",
	/*237*/ "Diese Version des CamSpy verf�gt �ber ein paralysierendes Nervengift, das die Zielperson fast augenblicklich in Katatonie versetzt.\n",
	/*238*/ "Cassandra De Vries Halskette. Beinhaltet eine Ann�herungs-Schl�sselkarte, um Sperrzonen betreten zu k�nnen. Das MK3 Modell funktioniert nur, solange der Besitzer am Leben ist. Sicherheitsklasse AA-1 (gamma).",
	/*239*/ "Cassandra De Vries Ersatzhalskette. Benuzername: %s  Passwort: %s\n",
	/*240*/ "Schild\n",
	/*241*/ "Der Schild sch�tzt den Tr�ger, indem er automatisch Gefahren erkennt und ein tempor�res Kraftfeld errichtet. Dadurch wird die Attacke neutralisiert. Der Schild verf�gt �ber einen begrenzten Energievorrat. Die Schutzfunktion kann also nur �ber eine bestimmte Zeitspanne gew�hrleistet werden. Im Normalfall werden Schilde aktiv, sobald sie von jemandem getragen werden, auch wenn es so aussieht, als w�re dieser spezielle Schild ein nicht-funktionabler Prototyp.\n",
	/*242*/ "Adrenalin\n",
	/*243*/ "Data Uplink\n",
	/*244*/ "Nachtsicht\n",
	/*245*/ "Decoder\n",
	/*246*/ "Suizid-Pille\n",
	/*247*/ "B-Gewehr\n",
	/*248*/ "Medipack\n",
	/*249*/ "Backup\n",
	/*250*/ "Verkl.\n",
	/*251*/ "Laptop\n",
	/*252*/ "F-Mine\n",
	/*253*/ "Schrotfl.\n",
	/*254*/ "Sniper\n",
	/*255*/ "Z-Mine\n",
	/*256*/ NULL,
	/*257*/ NULL,
	/*258*/ NULL,
	/*259*/ NULL,
	/*260*/ NULL,
	/*261*/ NULL,
	/*262*/ NULL,
	/*263*/ NULL,
};

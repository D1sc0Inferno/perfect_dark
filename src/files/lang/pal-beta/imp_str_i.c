#include <ultra64.h>

char *lang[] = {
	/*  0*/ "|Situazione - \n\nDopo aver visto andare in fumo il loro piano grandioso gli Skedar, in segno di vendetta, attaccano la fonte di tutti i loro guai, il Carrington Institute. Con un'azione organizzata al limite dell'impossibile tocca ora a Joanna salvare l'istituto dalla distruzione totale.\n\n|Carrington - \n\nCi hanno preso in contropiede, Jo! Salva il salvabile, cose e persone, poi scappa anche tu! Dopotutto l'istituto sono le persone e non l'edificio.\n\n|Obiettivo 1: - Riattiva le difese automatiche\n\nIn punti strategici del Carrington Institute sono collocate armi automatiche di difesa. Al momento non sono attive, ma se riesci a raggiungere i quadri comandi per attivarle, ti aiuteranno a sconfiggere gli invasori.\n\n|Obiettivo 2: - Libera gli ostaggi\n\nGli invasori tengono in ostaggio personale indispensabile per l'istituto. Salva quanti pi� ostaggi possibile! Guarda in tutti i laboratori dei piani superiori dell'edificio.\n\n|Obiettivo 3: - Recupera l'arma sperimentale\n\nNel laboratorio armi di Foster si trova il prototipo del fucile mitragliatore. Attenzione: non deve assolutamente cadere nelle mani del nemico, poich� � in grado di creare un campo mimetico temporaneo. Trovalo e porta a termine alcune 'ricerche di campo'!\n\n|Obiettivo 4: - Distruggi le informazioni riservate\n\nNell'ufficio di Daniel si trova una cassaforte che custodisce l'algoritmo che a suo tempo lui stesso us� per decifrare il codice di comunicazione Maian. Devi distruggerlo prima che cada nelle mani della dataDyne o degli Skedar. Usa il laser per aprire un varco attraverso la porta.\n\n|Obiettivo 5: - Disattiva la bomba\n\nI nostri sensori hanno rilevato una bomba nell'astronave degli Skedar sulla base di atterraggio! L'unico strumento utile � il Connettore Dati: avvicinati al mezzo e usa il Connettore Dati per installare un virus. A questo punto il mezzo si sollever� allontanandosi dall'istituto e la bomba esploder� senza danneggiare nessuno.\n\nFINE\n",
	/*  1*/ "CARRINGTON INSTITUTE\n",
	/*  2*/ "|Situazione - \n\nDopo aver visto andare in fumo il loro piano grandioso gli Skedar, in segno di vendetta, attaccano la fonte di tutti i loro guai, il Carrington Institute. Con un'azione organizzata al limite dell'impossibile tocca ora a Joanna salvare l'istituto dalla distruzione totale.\n\n|Carrington - \n\nCi hanno preso in contropiede, Jo! Salva il salvabile, cose e persone, poi scappa anche tu! Dopotutto l'istituto sono le persone e non l'edificio.\n\n|Obiettivo 1: - Riattiva le difese automatiche\n\nIn punti strategici del Carrington Institute sono collocate armi automatiche di difesa. Al momento non sono attive, ma se riesci a raggiungere i quadri comandi per attivarle, ti aiuteranno a sconfiggere gli invasori.\n\n|Obiettivo 2: - Libera gli ostaggi\n\nGli invasori tengono in ostaggio personale indispensabile per l'istituto. Salva quanti pi� ostaggi possibile! Guarda in tutti i laboratori dei piani superiori dell'edificio.\n\n|Obiettivo 3: - Recupera l'arma sperimentale\n\nNel laboratorio armi di Foster si trova il prototipo del fucile mitragliatore. Attenzione: non deve assolutamente cadere nelle mani del nemico, poich� � in grado di creare un campo mimetico temporaneo. Trovalo e porta a termine alcune 'ricerche di campo'!\n\n|Obiettivo 4: - Disattiva la bomba\n\nI nostri sensori hanno rilevato una bomba nell'astronave degli Skedar sulla base di atterraggio! L'unico strumento utile � il Connettore Dati: avvicinati al mezzo e usa il Connettore Dati per installare un virus. A questo punto il mezzo si sollever� allontanadosi dall'istituto e la bomba esploder� senza danneggiare nessuno.\n\nFINE\n",
	/*  3*/ "|Situazione - \n\nDopo aver visto andare in fumo il loro piano grandioso gli Skedar, in segno di vendetta, attaccano la fonte di tutti i loro guai, il Carrington Institute. Con un'azione organizzata al limite dell'impossibile tocca ora a Joanna salvare l'istituto dalla distruzione totale.\n\n|Carrington - \n\nCi hanno preso in contropiede, Jo! Salva il salvabile, cose e persone, poi scappa anche tu! Dopotutto l'istituto sono le persone e non l'edificio.\n\n|Obiettivo 1: - Libera gli ostaggi\n\nGli invasori tengono in ostaggio personale indispensabile per l'istituto. Salva quanti pi� ostaggi possibile! Guarda in tutti i laboratori dei piani superiori dell'edificio.\n\n|Obiettivo 2: - Recupera l'arma sperimentale\n\nNel laboratorio armi di Foster si trova il prototipo del fucile mitragliatore. Attenzione: non deve assolutamente cadere nelle mani del nemico, poich� � in grado di creare un campo mimetico temporaneo. Trovalo e porta a termine alcune 'ricerche di campo'!\n\n|Obiettivo 3: - Disattiva la bomba\n\nI nostri sensori hanno rilevato una bomba nell'astronave degli Skedar sulla base di atterraggio! L'unico strumento utile � il Connettore Dati: avvicinati al mezzo e usa il Connettore Dati per installare un virus. A questo punto il mezzo si sollever� allontanadosi dall'istituto e la bomba esploder� senza danneggiare nessuno.\n\nFINE\n",
	/*  4*/ "\n",
	/*  5*/ "Riattiva le difese automatiche\n",
	/*  6*/ "Libera gli ostaggi\n",
	/*  7*/ "Recupera l'arma sperimentale\n",
	/*  8*/ "Distruggi le informazioni riservate\n",
	/*  9*/ "Disattiva la bomba\n",
	/* 10*/ "Procurati informazioni riservate\n",
	/* 11*/ "Guardia:\n",
	/* 12*/ "Informazioni riservate \n",
	/* 13*/ "Informazioni riservate\n",
	/* 14*/ "Prese informazioni riservate\n",
	/* 15*/ "Attivate armi automatiche\n",
	/* 16*/ "Uccisi troppi ostaggi\n",
	/* 17*/ "Salvati gli ostaggi\n",
	/* 18*/ "Distrutte informazioni riservate\n",
	/* 19*/ "Carrington � stato ucciso\n",
	/* 20*/ "Joanna! Ci attaccano!\n",
	/* 21*/ "Riattiva le armi! Presto!\n",
	/* 22*/ "Gli Skedar hanno degli ostaggi!\n",
	/* 23*/ "Corri negli uffici e salvali!\n",
	/* 24*/ "Usano una nuova forma di tecnologia scudo.\n",
	/* 25*/ "Foster lavorava ad una nuova arma \nche potrebbe tornare utile.\n",
	/* 26*/ "Dannazione! Il mio ufficio... se entrano...\n",
	/* 27*/ "Jo, va sul luogo e distruggi i file!\n",
	/* 28*/ "La situazione � disperata! Hanno messo una bomba!\n",
	/* 29*/ "Trovala e allontanala dall'edificio!\n",
	/* 30*/ "ACCESSO NEGATO - Autorizzazione non concessa\n",
	/* 31*/ "Sono state adottate misure d'emergenza.\n",
	/* 32*/ "Bel lavoro, Joanna. Ce l'abbiamo quasi fatta!\n",
	/* 33*/ "L'ultima navetta ti sta aspettando! Presto!\n",
	/* 34*/ "Distrutto strumento essenziale alla missione.\n",
	/* 35*/ "La difesa automatica mi aiuter� a venirne fuori!\n",
	/* 36*/ "Ecco a cosa stava lavorando Foster!\n",
	/* 37*/ "Devo andarci piano... Gli ostaggi \ncontano su di me.\n",
	/* 38*/ "Cos� almeno non sapr� se sto facendo \nqualcosa che non va.\n",
	/* 39*/ "La bomba � esplosa...\n",
	/* 40*/ "Hai trovato un Devastatore.\n",
	/* 41*/ "Sei pronta, Joanna? Non possiamo far aspettare la delegazione Maian o il Presidente, naturalmente!\n",
	/* 42*/ "Se sono pronta?! Sta scherzando? Ero gi� pronta mezz'ora fa. Ci ha trattenuto lei!\n",
	/* 43*/ "Ma lo sai com'�, Joanna... Dovevo assicurarmi di avere i capelli in ordine e poi... il vestito...\n",
	/* 44*/ "Dovrebbero tenerla lontana dallo specchio! Nervoso?\n",
	/* 45*/ "S�, molto. Sono anni che aspetto questo momento. L'istituto � stato fondato proprio per i contatti, i rapporti d'amicizia tra gli umani e i Maian... e tra pochi minuti saremo alla Casa Bianca... e finalmente arriver� il grande momento...\n",
	/* 46*/ "Da dove sono sbucati?\n",
	/* 47*/ "Dal pianterreno... Sicuro!\n",
	/* 48*/ "C'� qualcuno che non capisce quando � ora di finirla. Dobbiamo tirar fuori tutti di qui!\n",
	/* 49*/ "Si metta in salvo! Me ne occupo io! Pu� tornare a prendermi pi� tardi!\n",
	/* 50*/ "O almeno, lo spero!\n",
	/* 51*/ "Ti serve il Connettore Dati!\n",
	/* 52*/ "Connessione avvenuta\n",
	/* 53*/ "Sistemi di sicurezza superati\n",
	/* 54*/ "Il virus � stato scaricato.\n",
	/* 55*/ "I motori della navetta si sono accesi.\n",
	/* 56*/ "Connessione alla navetta interrotta.\n",
	/* 57*/ "Procurati Connettore Dati.\n",
	/* 58*/ "\n",
	/* 59*/ "C. Dati\n",
	/* 60*/ "Connettore Dati\n",
	/* 61*/ "Preso Connettore Dati.\n",
	/* 62*/ NULL,
	/* 63*/ NULL,
};

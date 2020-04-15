#include <ultra64.h>

char *lang[] = {
	/*  0*/ "\n",
	/*  1*/ "Cuenta de muertes",
	/*  2*/ "Muerto una vez\n",
	/*  3*/ "Muerto",
	/*  4*/ "veces",
	/*  5*/ "Cuenta de suicidios",
	/*  6*/ "Desarmado\n",
	/*  7*/ "Falcon 2\n",
	/*  8*/ "Falcon 2 (silenc.)\n",
	/*  9*/ "Falcon 2 (mirilla)\n",
	/* 10*/ "MagSec 4\n",
	/* 11*/ "Mauler\n",
	/* 12*/ "DY357 Magnum\n",
	/* 13*/ "DY357-LX\n",
	/* 14*/ "Phoenix\n",
	/* 15*/ "CMP150\n",
	/* 16*/ "AR34\n",
	/* 17*/ "Drag�n\n",
	/* 18*/ "SuperDrag�n\n",
	/* 19*/ "Vengador K7\n",
	/* 20*/ "Cicl�n\n",
	/* 21*/ "MagSec SMG\n",
	/* 22*/ "RC-P120\n",
	/* 23*/ "Calisto NTG\n",
	/* 24*/ "Arma PC\n",
	/* 25*/ "Escopeta\n",
	/* 26*/ "Segadora\n",
	/* 27*/ "Lanzacohetes\n",
	/* 28*/ "Devastador\n",
	/* 29*/ "Slayer\n",
	/* 30*/ "Granada Maian\n",
	/* 31*/ "FarSight XR-20\n",
	/* 32*/ "R. Francotirador\n",
	/* 33*/ "Ballesta\n",
	/* 34*/ "Tranquilizador\n",
	/* 35*/ "Cuchillo de combate\n",
	/* 36*/ "Granada\n",
	/* 37*/ "Bomba-N\n",
	/* 38*/ "Mina de Tiempo\n",
	/* 39*/ "Mina de Proximidad\n",
	/* 40*/ "Mina Remota\n",
	/* 41*/ "Mina ECM\n",
	/* 42*/ "FlashBang\n",
	/* 43*/ "Disfraz\n",
	/* 44*/ "Cohete\n",
	/* 45*/ "Cohete Buscador\n",
	/* 46*/ "Cinto de Granadas\n",
	/* 47*/ "L�ser\n",
	/* 48*/ "Rayo\n",
	/* 49*/ "Psicosis\n",
	/* 50*/ "PP9i\n",
	/* 51*/ "CC13\n",
	/* 52*/ "KL01313\n",
	/* 53*/ "KF7 Especial\n",
	/* 54*/ "ZZT (9mm)\n",
	/* 55*/ "DMC\n",
	/* 56*/ "AR53\n",
	/* 57*/ "RC-P45\n",
	/* 58*/ "Testeador\n",
	/* 59*/ "Visi�n Nocturna\n",
	/* 60*/ "CamSpy\n",
	/* 61*/ "DrugSpy\n",
	/* 62*/ "BombSpy\n",
	/* 63*/ "Decodificador\n",
	/* 64*/ "Explosivos\n",
	/* 65*/ "Esc�ner Rayos-X\n",
	/* 66*/ "Paquete M�dico\n",
	/* 67*/ "Maleta\n",
	/* 68*/ "Disfraz\n",
	/* 69*/ "Esc�ner IR\n",
	/* 70*/ "Rastreador-R\n",
	/* 71*/ "Malet�n\n",
	/* 72*/ "Pildora Suicidio\n",
	/* 73*/ "Disp. Ocultaci�n\n",
	/* 74*/ "Reforzador\n",
	/* 75*/ "C. Datos\n",
	/* 76*/ "Esc. Horizonte\n",
	/* 77*/ "Falcon 2 (+)\n",
	/* 78*/ "Falcon 2 (s)\n",
	/* 79*/ "FarSight\n",
	/* 80*/ "L.Cohetes\n",
	/* 81*/ "Mina Prox.\n",
	/* 82*/ "Psicosis\n",
	/* 83*/ "Cuchillo\n",
	/* 84*/ "DY357\n",
	/* 85*/ "Disparo �nico\n",
	/* 86*/ "Fuego r�pido\n",
	/* 87*/ "Fuego en r�faga\n",
	/* 88*/ "Cosechar\n",
	/* 89*/ "Fuego de escopeta\n",
	/* 90*/ "Efecto carrete\n",
	/* 91*/ "Lanzacohetes\n",
	/* 92*/ "Cohete Dirigido\n",
	/* 93*/ "Cohete Teledirigido\n",
	/* 94*/ "Culatazo\n",
	/* 95*/ "Cartuchos Explosivos\n",
	/* 96*/ "Disparos Guiados\n",
	/* 97*/ "Descarga de Cartucho\n",
	/* 98*/ "Lanzagranadas\n",
	/* 99*/ "Mina Lapa\n",
	/*100*/ "Pu�etazo\n",
	/*101*/ "Desarmar\n",
	/*102*/ "Seguir Objetivo\n",
	/*103*/ "Usar Mirilla\n",
	/*104*/ "Descarga Medio Cartucho\n",
	/*105*/ "Doble Explosi�n\n",
	/*106*/ "Trituradora\n",
	/*107*/ "Sedante\n",
	/*108*/ "Inyecci�n Letal\n",
	/*109*/ "Cuchillada\n",
	/*110*/ "Cuchillo Envenenado\n",
	/*111*/ "Localizador de Objetivos\n",
	/*112*/ "Muerte Instant�nea\n",
	/*113*/ "Reforzador\n",
	/*114*/ "Revertir\n",
	/*115*/ "Cartuchos Alto-Impacto\n",
	/*116*/ "Ocultaci�n\n",
	/*117*/ "Dejar como Centinela\n",
	/*118*/ "Autodestrucci�n Proximidad\n",
	/*119*/ "Detector de Trampas\n",
	/*120*/ "Explosivo de Tiempo\n",
	/*121*/ "Explosivo de Proximidad\n",
	/*122*/ "Explosivo Remoto\n",
	/*123*/ "Detonaci�n\n",
	/*124*/ "Fusible 4 segundos\n",
	/*125*/ "Pinball Proximidad\n",
	/*126*/ "Detonaci�n temporal\n",
	/*127*/ "Detonaci�n Proximidad\n",
	/*128*/ "R�faga 3 Cartuchos\n",
	/*129*/ "Disparo Cargado\n",
	/*130*/ "Agacharse\n",
	/*131*/ "Infectar\n",
	/*132*/ "Disparo con Ritmo\n",
	/*133*/ "Descarga de Bajo Alcance\n",
	/*134*/ "Detonaci�n por Impacto\n",
	/*135*/ "Amplificador de Luz\n",
	/*136*/ "C�mara M�vil\n",
	/*137*/ "Visi�n de Rayos-X\n",
	/*138*/ "Imagen Termal\n",
	/*139*/ "Zoom\n",
	/*140*/ "Dispositivo de Bloqueo\n",
	/*141*/ "Conectar\n",
	/*142*/ "Identificar Objetivos\n",
	/*143*/ "Llevar Disfraz\n",
	/*144*/ "Colocar Explosivos\n",
	/*145*/ "Mira Telesc�pica\n",
	/*146*/ "Silenciador\n",
	/*147*/ "Extensi�n de Cartucho\n",
	/*148*/ "Mira L�ser\n",
	/*149*/ "dataDyne\n",
	/*150*/ "Carrington\n",
	/*151*/ "Industrias Chesluk\n",
	/*152*/ "Skedar\n",
	/*153*/ "Maian\n",
	/*154*/ "JonesCorp\n",
	/*155*/ "Incluso desarmado, eres un adversario respetable. Usa tus pu�os para noquear a tus oponentes o desarmarles para usar sus armas contra ellos.\n",
	/*156*/ "Precisa y digna de confianza, esta arma es el caballo de batalla de las operaciones del Instituto. Usa la mira l�ser para situar las balas con un efecto mortal, o golpea a los adversarios para noquearles.\n",
	/*157*/ "Una Falcon 2 mejorada, con la ventaja a�adida de que es silenciosa, pero mortal.\n",
	/*158*/ "Una Falcon 2 mejorada, que cuenta con una mirilla duplicadora que te permite beneficiarte de la superior precisi�n de la Falcon.\n",
	/*159*/ "Una pistola de tecnolog�a militar punta, usada en gran parte por fuerzas de paz. Cuenta con una ligera capacidad de zoom, y tiene un modo secundario de disparo de r�faga de tres cartuchos.\n",
	/*160*/ "Si ves a un Skedar viniendo hacia ti, es m�s que posible que lleve una de �stas. Un amplio cargador y su ca��n rayado hacen de esta pistola una formidable arma de mano, pero la descarga asesina viene del modo secundario: carga el disparo para fuerza extra al coste de unos cuantos cartuchos.\n",
	/*161*/ "La DY357 de dataDyne es la m�s poderosa arma de mano del mundo. Cada cartucho tiene un factor de penetraci�n incre�ble y noquea al objetivo con el peso y fuerza del disparo. Se han hecho modelos de encargo para clientes importantes; se rumorea que el director de ANS, Trent Easton, tiene una variante ba�ada en oro.\n",
	/*162*/ "La DY357-LX fue dise�ada especialmente para el director de la ANS, Trent Easton. Adem�s de tener una atractiva empu�adura de genuina piel de tigre, este arma dorada incluye un ca��n optimizado, lo que significa que cada bala siempre encuentra su objetivo con una fuerza mort�fera.\n",
	/*163*/ "El arma Maian est�ndar. Se trata de un arma flexible, una pistola que dispara tiros est�ndar o tiros explosivos sin que afecte a la capacidad del cargador.\n",
	/*164*/ "Un cl�sico de dataDyne, y excelentemente vendida, esta metralleta cuenta con un cargador de 32 cartuchos y una caracter�stica especial: la habilidad de designar y fijar objetivos en la l�nea de fuego. Convierte a un tirador medio en uno excelente, siempre que sea inteligente para manejar el arma. Ratio de disparo normal: 900 rpm.\n",
	/*165*/ "El principal rifle de asalto del Instituto Carrington. Su gran alcance y el tama�o de su cargador hacen de ella un arma muy �til; el modo secundario permite al usuario moverse mientras hace zoom sobre un adversario. Ratio de disparo normal: 750 rpm.\n",
	/*166*/ "Un rifle de asalto est�ndar con un giro diab�lico: cuando se activa el modo secundario, se convierte en una mina activada por proximidad que parece un arma. Ratio de disparo normal: 700 rpm.\n",
	/*167*/ "Es una variante del rifle de asalto Drag�n: en vez de un explosivo de proximidad, es un peque�o lanzagranadas. Es una excelente arma de apoyo. Ratio de disparo normal: 700 rpm.\n",
	/*168*/ "Es otra pieza de alta tecnolog�a de dataDyne. Ordinariamente es un rifle de asalto con un cargador m�s bien peque�o y una descarga poderosa, cuenta con un modo detector de trampas que muestra explosivos, armas de pared y peligros similares. Ratio de disparo normal: 950 rpm.\n",
	/*169*/ "Dise�ado para ser usado por guardaespaldas, el Cicl�n ha sido adoptado por la Seguridad Presidencial debido a su excelente capacidad cuando es usado para 'suprimir'. En circunstancias extremas, puede m�s que doblar el ritmo de disparo, descargando el cargador completo en un segundo. Ratio de disparo normal: 900 rpm. Descarga a 2000 rpm.\n",
	/*170*/ "El arma secreta del Instituto Carrington. Dispara a un ritmo fenomenal y cuenta con una capacidad de cargador gigantesca. El modo secundario es un dispositivo de ocultaci�n que funciona con la munici�n del cargador. Es un arma devastadora. Ratio de disparo normal: 1100 rpm.\n",
	/*171*/ "Se trata de otro ejemplo del excelente dise�o de armas de fuego Maian. Puede disparar tiros est�ndar tan r�pido como cualquier otro SMG, o puede disparar cartuchos de alta velocidad que pueden penetrar f�cilmente en objetos para encontrar al objetivo al otro lado. La �nica desventaja con el modo de disparo secundario es que el ritmo de disparo es lento y la precisi�n sufre con la potencia del disparo. Ratio de disparo normal: 950 rpm., (s/f:300 rpm).\n",
	/*172*/ "Una ametralladora dise�ada para parecer un PC port�til. Disimulada, el arma no puede disparar, pero una vez activada, se despliega. El Arma PC no permite inspecciones detalladas; puede arrancar, pero la memoria es un cuarto de lo que se supone que es. Ratio de disparo normal: 1000 rpm.\n",
	/*173*/ "Es un arma de dataDyne fabricada para fuerzas de seguridad. Su cargador de nueve cartuchos combinado con modos de disparo simple o doble hacen que se trate de una peligrosa arma de cerca.\n",
	/*174*/ "Es un arma realmente aterradora en manos de alguien lo suficientemente fuerte para controlar su gran retroceso; para el resto, un arma dif�cil de manejar pero efectiva para despejar pasillos. Ratio de disparo normal: 1800 rpm.\n",
	/*175*/ "Es un arma inc�moda. Dispara tanto un cohete est�ndar como un cohete m�s lento dirigido cuando se centra en el desafortunado objetivo.\n",
	/*176*/ "Se trata de un sistema lanzador de granadas de largo alcance fabricado por dataDyne. El modo de disparo secundario recubre las granadas con una sustancia pegajosa; cuando se dispara la bomba, �sta se pega en las paredes o el techo. Tras unos cuantos segundos, se suelta para caer al suelo, donde detona.\n",
	/*177*/ "Los Skedar disfrutan viendo a sus enemigos aterrorizados. Parece natural que cuenten con un cohete a control remoto como modo secundario de fuego en su lanzacohetes b�sico, as� pueden tener el placer de sentir los vanos intentos de escapar de su presa del proyectil que se acerca.\n",
	/*178*/ "El rifle FarSight es un h�brido Maian de un dispositivo de esc�ner de Rayos-Xemparejado con un rifle que puede disparar a trav�s de objetos. La mira puede centrarse en formas de vida, aunque el dispositivo no puede centrar tan r�pido como se mueve el enemigo.\n",
	/*179*/ "Con su poderoso zoom y sus balas de alta velocidad, este arma del Instituto Carrington es uno de los mejores rifles de francotirador jam�s hechos. Ag�chate para una mayor precisi�n.\n",
	/*180*/ "Esta ballesta es un ejemplo de 'pistola' de corto alcance, montada en la mu�eca de un agente del Instituto Carrington. Se pliega para ocultarla y puede disparar hasta cinco flechas, entre los m�s usuales tiros sedantes o los dardos mortales.\n",
	/*181*/ "Es un dispositivo de fuego r�pido, que puede ser usado como arma en un caso de emergencia, pero que est� dise�ado en principio como un inyector d�rmico de sedantes. Los usuarios son advertidos que una descarga completa de la reserva de droga puede ser fatal.\n",
	/*182*/ "Es una versi�n ampliada del cuchillo de combate. Contiene una ampolla de veneno que se hace a�icos cuando se lanza, dando al enemigo unos seis segundos de vida. Un arma que s�lo pod�a haber sido creada por dataDyne.\n",
	/*183*/ "Es una versi�n mejorada de la fiel granada. Puede ser lanzada con un fusible de cuatro segundos, o ser usada como una bomba de proximidad que rebota.\n",
	/*184*/ "Es una bomba de neutrones de mano que afecta a un �rea muy peque�a. Puede detonar por impacto o ser fijada en detonaci�n por proximidad.\n",
	/*185*/ "Es una mina con un corto fusible de tiempo. Tiene un sensor de detecci�n/evaluaci�n que puede ser activado como modo secundario.\n",
	/*186*/ "Es una mina con un sensor de proximidad. Tiene un sensor de detecci�n/evaluaci�n que puede ser activado como modo secundario.\n",
	/*187*/ "Es una mina que puede ser activada remotamente. El comando de activaci�n es el modo secundario.\n",
	/*188*/ "Se trata de un dispositivo de bloqueo de 'ruido-blanco', capaz de simular alguno de los fallos el�ctricos m�s comunes en cualquier sistema donde sea directamente colocado.\n",
	/*189*/ "El l�ser est� montado en la mu�eca y su precisi�n es mortal. Puede disparar 'pulsos' de larga distancia, o puede mantener una constante y concentrada corriente de energ�a en corto alcance.\n",
	/*190*/ "Son estimulantes gen�ticos dise�ados para aplicar en combate. Cuando son administrados, parecen frenar el paso del tiempo para abrir una 'ventana de reacci�n'.\n",
	/*191*/ "Lo �ltimo en la l�nea de miras 'starlight' que mejoran la luz visible para producir una imagen clara del ambiente que la rodea. Usa un algoritmo de movimiento de objetivo para mostrar posibles trampas.\n",
	/*192*/ "Usando la aplicaci�n m�s peque�a de la tecnolog�a anti-gravedad, esto es lo �ltimo en dispositivos para fisgar. Tiene una conexi�n de audio/v�deo con funci�n de grabaci�n y la posibilidad interna de holografiar espectrosc�picamente.\n",
	/*193*/ "Una mira de corto alcance que puede ver a trav�s de algunos materiales, incluso el acero, produciendo una representaci�n crom�tica simplificada del entorno.\n",
	/*194*/ "Esta mira usa escaneo de infrarrojos modulados con datos ultras�nicos para ofrecer no s�lo una imagen clara del �rea colindante, sino tambi�n la ubicaci�n de irregularidades estructurales. Tambi�n puede localizar enemigos que empleen tecnolog�a de ocultaci�n u otros desconciertos �pticos.\n",
	/*195*/ "Usa las cualidades de 'salto de luz' de cristales alien�genas para crear un campo refractivo alrededor del portador. Funciona mientras s�lo existan peque�as perturbaciones kin�ticas en el campo l�mite; el acto de disparar un arma es suficiente para causar que vuelva la visibilidad.\n",
	/*196*/ "Es un esc�ner binocular de largo alcance. El visor muestra una imagen compuesta por las dos fuentes recibidas. Tambi�n cuenta con funci�n zoom.\n",
	/*197*/ "Es capaz de consultar remotamente casi cualquier tipo de datos guardados, los cuales son directamente enviados a los 'hackers' del Instituto. Una variante de este dispositivo provee a los 'hackers' de conexi�n directa con los sistemas locales.\n",
	/*198*/ "Es un poderoso sistema de rastreo que puede ser preparado para encajar con cualquier tipo de par�metros: gente, armas, objetos y lugares son algunas de las posibilidades.\n",
	/*199*/ "Se trata de un esc�ner m�dico modificado que contiene la m�s moderna informaci�n acerca del estado de salud del Presidente y una biblioteca de pasadas condiciones y tratamientos. Puede detectar las funciones vitales del Presidente a gran distancia, incluso cuando el objetivo est� en medio de una multitud.\n",
	/*200*/ "Abre cajas fuertes, simple y llanamente. Rompe cierres codificados electr�nicamente, habitualmente en cuesti�n de segundos, aunque esto, por supuesto, depende de cada cerradura.\n",
	/*201*/ "Esta maravilla m�dica Maian puede auto-diagnosticar y realizar operaciones quir�rgicas sin necesidad de cortes. Una desventaja es que s�lo funciona en Maian; la otra desventaja es que no tiene habilidad en el trato a los pacientes.\n",
	/*202*/ "Se trata de una peque�a carga de explosivo pl�stico, completada con un temporizador sellado, e incrustada dentro de una capa de tefl�n con metralla. Muy desagradable.\n",
	/*203*/ "Como ya eres consciente, se trata de una bomba de fusi�n direccional, que se coloca para que la carga se dirija hacia abajo. Esto arrasar� los laboratorios de investigaci�n de dataDyne y causar� que el resto del edificio se colapse y caiga al agujero.\n",
	/*204*/ "Es un peque�o 'bicho' que se coloca en cualquier parte de un transmisor de comunicaciones. Se oculta en la se�al oficial, permitiendo la conexi�n entre el Instituto y el agente aunque haya importantes contramedidas locales; para todas las posibilidades y prop�sitos, es parte de la localizaci�n de las comunicaciones de los objetivos.\n",
	/*205*/ "El funcionamiento interno de este 'bicho' es alto secreto: gran parte del dispositivo pertenece al mecanismo de autodestrucci�n. Se especula que esto es un ejemplo de comunicaci�n molecular cu�ntica, lo cual explica la fenomenal fiabilidad del dispositivo cuando se usa.\n",
	/*206*/ "Usa tecnolog�a de comunicaci�n cu�ntica para proveer informaci�n precisa de los objetivos a las armas orbitales, ayud�ndolas a minimizar los da�os colaterales. La misma tecnolog�a es usada en los rastreadores del Instituto Carrington.\n",
	/*207*/ "Son detalles de la trayectoria de vuelo y los c�digos de comunicaci�n y frecuencias del Air Force One: incluso las claves actuales de encriptaci�n.\n",
	/*208*/ "Todos los datos relacionados con la investigaci�n en el fondo oce�nico desarrollada por dataDyne con el nav�o de operaciones submarinas Pelagic II. El contenido incluye mapeados de s�nar, datos geol�gicos, datos del artefacto alien�gena, muestras del casco, etc.\n",
	/*209*/ "Es la �ltima grabaci�n del estado de personalidad de la inteligencia artificial, que se llama a s� misma Dr. Caroll, antes de su lavado de cerebro y reestructura cerebral. Usada para el estudio del caso, contiene s�lo proyecciones te�ricas. Moralmente incorrupta, y por lo tanto peligrosa. dataDyne I.S.C.E.O. 23/6/23\n",
	/*210*/ "Se trata de un c�ctel qu�mico que cambia la realidad que el objetivo percibe. Lo bueno es malo, lo malo es bueno; enemigos y amigos intercambian sus lugares. Se trata de otra de las investigaciones 'oscuras' del �rea 51 de Trent Easton.\n",
	/*211*/ "No es tu vestimenta habitual. Ll�valo para pretender no ser t�.\n",
	/*212*/ "PROX.\n",
	/*213*/ "TIEMPO\n",
	/*214*/ "REMOTO\n",
	/*215*/ "AUTOARMA\n",
	/*216*/ "IMPACTO\n",
	/*217*/ "Cohete Big King\n",
	/*218*/ "Conector de Datos\n",
	/*219*/ "Esc. Presidencial\n",
	/*220*/ "AutoCirujano\n",
	/*221*/ "Bomba Skedar\n",
	/*222*/ "Contr. Comunicaciones\n",
	/*223*/ "'Bicho' Rastreador\n",
	/*224*/ "Amplificador\n",
	/*225*/ "Planes de Vuelo\n",
	/*226*/ "Cinta Investigaci�n\n",
	/*227*/ "Copia de Seguridad\n",
	/*228*/ "Llave Magn�tica\n",
	/*229*/ "Malet�n\n",
	/*230*/ "Collar\n",
	/*231*/ "Esc�ner Pres.\n",
	/*232*/ "Reforzador\n",
	/*233*/ "Esc. R-X\n",
	/*234*/ "Esc. Horiz.\n",
	/*235*/ "Amplific.\n",
	/*236*/ "En este modelo de la C�mara Esp�a el dispositivo de grabaci�n ha sido reemplazado por un poderoso explosivo pl�stico.\n",
	/*237*/ "Este modelo de la C�mara Esp�a usa una toxina nerviosa paralizadora para que los blancos queden en estado catat�nico.\n",
	/*238*/ "Es el collar de Cassandra De Vries. Est� equipado con una llave de proximidad que permite el acceso a �reas restringidas. El modelo Mk3 s�lo funciona si el propietario est� vivo. Clase de Seguridad AA-1 (gamma).",
	/*239*/ "Collar de repuesto de Cassandra De Vries.  Usuario: %s  Clave: %s\n",
	/*240*/ "Escudo\n",
	/*241*/ "El escudo protege al usuario detectando un ataque y generando moment�neamente un campo de fuerza concentrado para repeler el ataque. El escudo tiene una reserva de energ�a limitada, as� que s�lo puede proteger al usuario hasta cierto punto. Los escudos suelen permanecer activos cuando el usuario los lleva, aunque este escudo en particular parece no ser funcional, como un prototipo no finalizado.\n",
	/*242*/ "Reforzadores\n",
	/*243*/ NULL,
};

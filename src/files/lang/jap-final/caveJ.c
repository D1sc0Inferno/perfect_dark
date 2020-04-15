#include <ultra64.h>

char *lang[] = {
	/*  0*/ "|Üâ¾\n\nÛÕÒïâÆÏþÏ»ÉÉ»ÒÓ ¡¢ÒãùÏãÑÜãÏðÂóáÓÆÇÈÒ£¤Ò¥ÒÉÛÏÐöÜÕÒÃ¦§ÖÍ¨ÄÅÌ»âÂºÒÒïâÆÏþÏßãõóáàÓÃÃ¿àÆÇÈÖÒ ©ÎÄÀ¸ÜßãÄÇâÜÒÍªåãâÂÈã¸«¬ÇÑõÎàÎ»Â\n\n|ÖË÷ÏãÏ¾\n\nÒÓ­Ï®´æðïÍÐÏäÂÃ¦§ÏÓãùÏãÉÊÒ¯ÏÓªÒ°ÜÎ»±ÜÉÁÄ¹»Ì»âÂºÁØóÜãùÏãÒ²¼ÍïâÆÏþÏ»É µ³ÎðÂæÒÒ´ÑðÂóÀâðÂµÁÊÍÅÌ»ÉÔæ±¶Ò¡¢ßÓÞÁÎâðä¼Â\n\n|µ¶¾ÜàÌûÜÏÊÍÇß\n\n·¸ÈÆâÆÇÈ¹ÂÒÜàÌûÜæØÜÎÁØøÕóÈÊàÏòóÆâÂÛÜÒÊþÒÏÓôåëÉðæºâÓíðÂÛÜÍÈÒüîÏÏÓº´ÌÜà»ôåëÉð¸öÝÅÈãóÊÍÅÌ§ÖöâÒðÂÛÜÉÊÓãùÏãÒ¯ÍÓªÒ°ÜÎ»±ÉÊÎÒóÁãèãÜàó×´ÉáÅÎ»ß¼ÏÂ\n\n|µ¶¾Í»¸¼ÙÁÛ\n\nÌ½ÎôÒ¾Å»ÕÊ°ó§ÒÊÍæÉÎàãÎ»ß¼ÏÍ»¸ÎâøÁÁ«¿àÅÌÝ¿°¼ÙÁÙÒÙÏÐÏÒÇâÒðÂÍáº½íÍ»¸ÕÁóÀâØÜ¸ÄæÆæºâÎÂ\n\n|µ¶¾Ý¿°ÂÛÜâð¸ã\n\nÊÍÏßá±ÓðØÆÃÍæóÀâðä¼æ¿°ÏÓÿÒüÃæÍÎâÂ§ÒÄÂÉÍ»¿àÌ½ÎôæÅÄããõÆèÏÐöðæÎá§ÓúÊ×ÄãÌÅØ¼óºä¼ÂÝ¿°ÂÛÜâðÒÜÑÊà¸ÈÉÅÃã¸¨ÏÇßÂ\n\n|µ¶¾ëöÑãöÏ¸öÝÇß\n\nÆÇÈ¹ÂÒÆÇÈ¸Éæ§ÒÊÏºéÄãÌ»âÂ§æÃã¸öÝÆãõÑÍ»¼ÍÀÏÈÒß¸ÜÍÏÓøÜ¸ÈÊàÏ¿åÇâÃÍæóÀâÂ\n\n|µ¶¾ÆÇÈ¹ÂÏËÀÇß\n\nÆÇÈ¹ÂÒÌÍÏÀáãÎ»ß¼ÏÆâÒðÂÊÍÒÜÝæØðáÜóºãõÛËãø¸ù´ÌËÀóÀâÓíðÂÈãæñÎÎÓª¿ÿÒÔÏ¸Ð½âæºâðä¼Â\n\nEND\n",
	/*  1*/ "ÆÇÈ¹ÂßïäøÐöÜÕÃ¦§\n",
	/*  2*/ "|Üâ¾\n\nÛÕÒïâÆÏþÏ»ÉÉ»ÒÓ ¡¢ÒãùÏãÑÜãÏðÂóáÓÆÇÈÒ£¤Ò¥ÒÉÛÏÐöÜÕÒÃ¦§ÖÍ¨ÄÅÌ»âÂºÒÒïâÆÏþÏßãõóáàÓÃÃ¿àÆÇÈÖÒ ©ÎÄÀ¸ÜßãÄÇâÜÒÍªåãâÂÈã¸«¬ÇÑõÎàÎ»Â\n\n|ÖË÷ÏãÏ¾\n\nÒÓ­Ï®´æðïÍÐÏäÂÃ¦§ÏÓãùÏãÉÊÒ¯ÏÓªÒ°ÜÎ»±ÜÉÁÄ¹»Ì»âÂºÁØóÜãùÏãÒ²¼ÍïâÆÏþÏ»É µ³ÎðÂæÒÒ´ÑðÂóÀâðÂµÁÊÍÅÌ»ÉÔæ±¶Ò¡¢ßÓÞÁÎâðä¼Â\n\n|µ¶¾ÜàÌûÜÏÊÍÇß\n\n·¸ÈÆâÆÇÈ¹ÂÒÜàÌûÜæØÜÎÁØøÕóÈÊàÏòóÆâÂÛÜÒÊþÒÏÓôåëÉðæºâÓíðÂÛÜÍÈÒüîÏÏÓº´ÌÜà»ôåëÉð¸öÝÅÈãóÊÍÅÌ§ÖöâÒðÂÛÜÉÊÓãùÏãÒ¯ÍÓªÒ°ÜÎ»±ÉÊÎÒóÁãèãÜàó×´ÉáÅÎ»ß¼ÏÂ\n\n|µ¶¾Í»¸¼ÙÁÛ\n\nÌ½ÎôÒ¾Å»ÕÊ°ó§ÒÊÍæÉÎàãÎ»ß¼ÏÍ»¸ÎâøÁÁ«¿àÅÌÝ¿°¼ÙÁÙÒÙÏÐÏÒÇâÒðÂÍáº½íÍ»¸ÕÁóÀâØÜ¸ÄæÆæºâÎÂ\n\n|µ¶¾Ý¿°ÂÛÜâð¸ã\n\nÊÍÏßá±ÓðØÆÃÍæóÀâðä¼æ¿°ÏÓÿÒüÃæÍÎâÂ§ÒÄÂÉÍ»¿àÌ½ÎôæÅÄããõÆèÏÐöðæÎá§ÓúÊ×ÄãÌÅØ¼óºä¼ÂÝ¿°ÂÛÜâðÒÜÑÊà¸ÈÉÅÃã¸¨ÏÇßÂ\n\n|µ¶¾ÆÇÈ¹ÂÏËÀÇß\n\nÆÇÈ¹ÂÒÌÍÏÀáãÎ»ß¼ÏÆâÒðÂÊÍÒÜÝæØðáÜóºãõÛËãø¸ù´ÌËÀóÀâÓíðÂÈãæñÎÎÓª¿ÿÒÔÏ¸Ð½âæºâðä¼Â\n\nEND\n",
	/*  3*/ "|Üâ¾\n\nÛÕÒïâÆÏþÏ»ÉÉ»ÒÓ ¡¢ÒãùÏãÑÜãÏðÂóáÓÆÇÈÒ£¤Ò¥ÒÉÛÏÐöÜÕÒÃ¦§ÖÍ¨ÄÅÌ»âÂºÒÒïâÆÏþÏßãõóáàÓÃÃ¿àÆÇÈÖÒ ©ÎÄÀ¸ÜßãÄÇâÜÒÍªåãâÂÈã¸«¬ÇÑõÎàÎ»Â\n\n|ÖË÷ÏãÏ¾\n\nÒÓ­Ï®´æðïÍÐÏäÂÃ¦§ÏÓãùÏãÉÊÒ¯ÏÓªÒ°ÜÎ»±ÜÉÁÄ¹»Ì»âÂºÁØóÜãùÏãÒ²¼ÍïâÆÏþÏ»É µ³ÎðÂæÒÒ´ÑðÂóÀâðÂµÁÊÍÅÌ»ÉÔæ±¶Ò¡¢ßÓÞÁÎâðä¼Â\n\n|µ¶¾ÜàÌûÜÏÊÍÇß\n\n·¸ÈÆâÆÇÈ¹ÂÒÜàÌûÜæØÜÎÁØøÕóÈÊàÏòóÆâÂÛÜÒÊþÒÏÓôåëÉðæºâÓíðÂÛÜÍÈÒüîÏÏÓº´ÌÜà»ôåëÉð¸öÝÅÈãóÊÍÅÌ§ÖöâÒðÂÛÜÉÊÓãùÏãÒ¯ÍÓªÒ°ÜÎ»±ÉÊÎÒóÁãèãÜàó×´ÉáÅÎ»ß¼ÏÂ\n\n|µ¶¾Ý¿°ÂÛÜâð¸ã\n\nÊÍÏßá±ÓðØÆÃÍæóÀâðä¼æÝ¿°ÏÓÿÒüÃæÍÎâÂ§ÒÕËÍ»¿àÌ½ÎôæÅÄããõÆèÏÐöðæÎá§ÓúÊ×ÄãÌÅØ¼óºä¼ÂÝ¿°ÂÛÜâðÒÜÑÊà¸ÈÉÅÃã¸¨ÏÇßÂ\n\n|µ¶¾ÆÇÈ¹ÂÏËÀÇß\n\nÆÇÈ¹ÂÒÌÍÏÀáãÎ»ß¼ÏÆâÒðÂÊÍÒÜÝæØðáÜóºãõÛËãø¸ù´ÌËÀóÀâÓíðÂÈãæñÎÎÓª¿ÿÒÔÏ¸Ð½âæºâðä¼Â\n\nEND\n",
	/*  4*/ "\n",
	/*  5*/ "ÜàÌûÜÏÊÍÇß\n",
	/*  6*/ "Í»¸¼ÙÁÛ\n",
	/*  7*/ "Ý¿°ÂÛÜâð¸ã\n",
	/*  8*/ "ëöÑãöÏ¸öÝÇß\n",
	/*  9*/ "ÆÇÈ¹ÂÏËÀÇß\n",
	/* 10*/ "Obtain suitcase.\n",
	/* 11*/ "\n",
	/* 12*/ "ÐßÊÛÌØÜ\n",
	/* 13*/ "ÐßÊÛÌØÜ\n",
	/* 14*/ "ÐßÊÛÌØÜ¸ÝÏöãÉ\n",
	/* 15*/ "Obtain air stewardess uniform.\n",
	/* 16*/ "\n",
	/* 17*/ "ôåëÉð\n",
	/* 18*/ "ôåëÉð\n",
	/* 19*/ "ÜàÌûÜÒôåëÉð¸ÝÏöãÉ\n",
	/* 20*/ "Obtain flight plans from safe.\n",
	/* 21*/ "\n",
	/* 22*/ "ëöÑãöÏ\n",
	/* 23*/ "ëöÑãöÏ\n",
	/* 24*/ "ëöÑãöÏ¸ÝÏöãÉ\n",
	/* 25*/ "ÖË´Ñöîß´\n",
	/* 26*/ "Òý±æÙÄãÉ\n",
	/* 27*/ "ÛÓÆÓÔÀ\n",
	/* 28*/ "ËÂ¸Õ¹óÁâ\n",
	/* 29*/ "Ã¹ÏÊÓÂ\n",
	/* 30*/ "ÁÚÂÖÒÚÀÔÓêÖÅÑÂ\n",
	/* 31*/ "ÈÒÌ½ÓÃÃóÅÌÌÄ»Â\n",
	/* 32*/ "ªÌÃÍ´´´\n",
	/* 33*/ "Ì½ÎôÒÕÊÃÙÓ¯¬ÄãÌ»ØÆ´\n",
	/* 34*/ "¨¤¸Õ÷å\n",
	/* 35*/ "ÛÜâðÒÛËÊãÒÏ×Ø\n",
	/* 36*/ "Ý¿°ÂÛÜâðæÛËÊãÒÏÄãÉ\n",
	/* 37*/ "Ì½æÅÄãÉ\n",
	/* 38*/ "ÐßÊÛÌØÜ¸ÄÂÉ\n",
	/* 39*/ "ÐßÊÛÌØÜÒÍ»æÅÄãÉ\n",
	/* 40*/ "¾»ÃàÂÃÃÓ°îüÊöá¯¬ðï´\n",
	/* 41*/ "Î¹ðÀÔîÓÙ±¿À\n",
	/* 42*/ "¾»ÈãÓÔùÒÐßÊÛÌØÜðïÂ\n",
	/* 43*/ "¾Ó¸Õ¹óÁãÔùæÃ»ËÒ³Ý¸Æâ\n",
	/* 44*/ "ÃÊà½ðÂÑöî¸ÈÉÅÉ\n",
	/* 45*/ "ùþ÷ÊÛÜâðÖÒÐ×ÝÜæÚÛÄãÉ\n",
	/* 46*/ "ùþ÷ÊÛÜâðæÔúÅÉ\n",
	/* 47*/ "üÒ±ÉÊæÜÁýÝÑÏÎ´É\n",
	/* 48*/ "º»Ëà¿àÊ¸¬´ÌÁã\n",
	/* 49*/ "ôåëÉðóÊÍÅÉ\n",
	/* 50*/ "àËÏÜð´ÜàÌûÜÒÊþ¸\nß´ÌôåëÉð¸öÝÆâÒðÂ\n",
	/* 51*/ "ÈÒØÜ¸ù´Ì§ÒÍ»¸¼ÙÁÚÒð\n",
	/* 52*/ "ÃÒÐßÊÛÌØÜÓÃÒØØóÓ¬ÛàãÌÅØ¼ï\n",
	/* 53*/ "ºãæÆÇÈ¹ÒÓÐëÉÜûÏÀ\nª´ÉßáàÄ»ÒÑÂ\n",
	/* 54*/ "ÐÑáà¸¬ÛÌÁã´À´ÍÊ¸Ö´Ìâ¹ð\n",
	/* 55*/ "ÓÈÏã×ÜßÏÑ¨¤Â\n§ÒöØøÕòóÎ¸¹ÇÂ\n",
	/* 56*/ "»»ïÍÐÏäÂØøÕÓ\nÈ´ÊÏ¿´Ì»âÂ\npÜàÌûÜæÀ´ÉÒ¸\näÒÜÑæ¹ÇÅÉÂ\npÃ¦§ÒãÜöðÂ\nÁô»ß¼ðæ\n",
	/* 57*/ "§Ò±ýÓ¼°ÎÒó\n×´ÊµñÎ¹óÅ·Â\npÍÃäóÒóáàÓô¼ÎÒÀ\n",
	/* 58*/ "ãùÏãæôÒ«¬Ò±ýÏØó\nð¸ä½Ì»âÒ¿Ó ìðÂ\npðæãùÏãÒ¼ÁÏ»âãÓ\nÛÒðÏåå´Ì»âÓíðÂ\np¹ÂÏÀáÒèéÔ¸\nÆÇÈÏÉÇâÒðÂ\n",
	/* 59*/ "ÈÅÌÆÇÈ¸¬ã´ÌÃÍÑÂ\nãùÏãÒðÓª¿å¿´ÉÀ\npºÍºÒïâÆÏþÏæÉ\núÏìÐÒÓªîÀ\n",
	/* 60*/ "ØðîïÒÐ½ÎÒó©¼ÒÓ\nÝÛÌ¾Ã¼ÂþÊöÊ×Â\n",
	/* 61*/ "Óùßð¬ÛÜâðÛÄ\n",
	/* 62*/ "µ¶ÚÏ ¡Î±°æÙÄãÉ\n",
	/* 63*/ "µ¶ÚÏ ¡ÎæÎÏÄãÉ\n",
	/* 64*/ "§ÖÒ·öóô\n",
	/* 65*/ "éÑËÊ×æ»âï´\n",
	/* 66*/ "Ý¿°¼ÙÁÙÒÙÏÐæð¬ÅÉ\n",
	/* 67*/ "Í»Ò¼ÙÁÙæóÀØÇ¹\n",
};

#include <ultra64.h>

char *lang[] = {
	/*  0*/ "�Ӏ���\n",
	/*  1*/ "��ʀۀ̀τ��Ӂ���؁ǁ�\n",
	/*  2*/ "\n",
	/*  3*/ "���� ",
	/*  4*/ " ���\n",
	/*  5*/ " �����\n",
	/*  6*/ " ���\n",
	/*  7*/ "���̀���\n",
	/*  8*/ "���ڂ������������ǆ�Ł́����ā�\n",
	/*  9*/ "�݁���\n",
	/* 10*/ "�������ȁ҂��Ӏ�\n",
	/* 11*/ "�����Á��ʁσ��⁹�쁵�΁���\n",
	/* 12*/ "S/MPS",
	/* 13*/ "H/M",
	/* 14*/ "Y/D",
	/* 15*/ "P/D",
	/* 16*/ "CI 2023",
	/* 17*/ "YKK: 95935",
	/* 18*/ "CAMSPY",
	/* 19*/ "MODEL 1.2",
	/* 20*/ "GYROSTAT",
	/* 21*/ "�ل�",
	/* 22*/ "��",
	/* 23*/ "��",
	/* 24*/ "��",
	/* 25*/ "��",
	/* 26*/ "��",
	/* 27*/ "�ل��߀с�",
	/* 28*/ "���߀с�",
	/* 29*/ "���߀с�",
	/* 30*/ "���߀с�",
	/* 31*/ "�߀߀с�",
	/* 32*/ "���߀с�",
	/* 33*/ "�����߀с�",
	/* 34*/ "�����߀с�",
	/* 35*/ "���Ȁ߀с�",
	/* 36*/ "����߀с�",
	/* 37*/ "���݀߀с�",
	/* 38*/ "�����߀с�",
	/* 39*/ "�����߀с�",
	/* 40*/ "���ǀ߀с�",
	/* 41*/ "�����߀с�",
	/* 42*/ "�ނ��߀с�",
	/* 43*/ "�����߀с�",
	/* 44*/ "��׀߀с�",
	/* 45*/ "�ل��߀с������ۀ�̀��π�҂��󂭁܅����ҁ󀁁����䂄�ς������Ѐ������Ӄ����σ��������ׂ����܃����σ�����\n",
	/* 46*/ "���߀с��������с΀Ѐ׀ۀ̀π����Ѐ������Ł��ՁɁ΁��态���ς݃�����\n",
	/* 47*/ "���߀с������҄��������р󂄁̈́���������҅�����\n",
	/* 48*/ "���߀с����˂��҄��������р󂄁̈́���������҅�����\n",
	/* 49*/ "�߀߀с��������҂����܀Ѐ׀ۀ̀π����Ѐ�������ށ��ۀ�̀��π�������Ѐʁ��ŁɁ����р󂄁Ӏ������ÁҀۀ�̀��π�́Ł������Ɂ��΁��΁�Á́󁺁䁼��\n",
	/* 50*/ "���߀с��������߁��рτ���րˀ��π�ς����Ҁӂ����Ȁπ�ς��Ɓ�ɁہτׂȁŁɁ�����߀с��Ҁڀс��������Ҁۀ�̀��π�͆��΁ခ�����恎���܁́΁��́��΁��ҁ󀁄�����ӂ������΂ā����Ɓ��\n",
	/* 51*/ "�����߀с����Ҁȁ��ρ҂����σ���Ɓⅅ����ɁʁҀۀ�̀��π�܀₄������Ҁȁ��ρ����ņ������ɁˁɀҀȁ��ρӀւ����Ł́����р󂄁���ʀ����΁��߁��ρƁ�ÁҀۀ�̀��πへ�ׁ́����Ձ��́��ɀҀȁ��ρ������ˁ��؁́Ɓ��܀�\n",
	/* 52*/ "�����߀с������πۂ������������ρŁɁ��ۀ�̀��π�ۂ��������񁼁̀��Ɓ�τفŁ��ۂ����������Łρ�����ȁҀ܀₄���πۂ������惼���������������\n",
	/* 53*/ "���Ȁ߀с����ÁҀۀ�̀��π�Ӄσ��ҁ��܀���݃��Ą����߁�܀��Ɓ��΅��ȁ��ÁÁƀҀȁ��ρ����ڀÁ�ρӅ��Ȇ��҃䀒�̄��򂄁����ՁˀҀȁ��ρ܁Ձ��؁���\n",
	/* 54*/ "����߀с����ÁҀۀ�̀��π�Ӏ��߂����ʀへ�΂ρƁ�Á̓����ӂ��܄Ё��́��΁������ς�׃с󀁂��΁��΁�ӄЁ��΁��فā��Á́���������΁��ҁ󃃄�����\n",
	/* 55*/ "���݀߀с����ÁҀۀ�̀��π�܄����߀с��������Ҁȁ��ρ҂����σ���Ł́���Ł��Ń��̂̀ـρ��ʀ�ρ΁�̀�������ҁ߁������σ��݁�Ҁ�ŀрみ���̂͂������Ł��́����\n",
	/* 56*/ "�����߀с����ÁҀۀ�̀��π�Ӏ������܁ҁ���ۀ���Ɔ������́ŁɁ�����ҁ����р󂄁݀������Ҁȁ��ρ��Ձ��́��Ɂႋ���憖���́��⁒���р󂄁��ց��́����\n",
	/* 57*/ "�����߀с����ÁҀۀ�̀��π�ӄ��Ӂӂ����Ɂ��΁����Ł�������̃������䁼�́Ɓ���݁���ȁ��΁́�����ׁŁ́���态�����������Ɓ��ׁˁ��Ɓ�̀����邟�Ɓ��䁼��\n",
	/* 58*/ "���ǀ߀с����ÁҀۀ�̀��π�Ӏ������߀с��҂����ԁ��ɇ́Ł́�����ǀ߀с����Ł������΁҄܁����݁��فŁςځ������҃��΁ρˁ��́Ӏ��߁ီ���Ł߁��́Ɓ��\n",
	/* 59*/ "�����߀с����ÁҀۀ�̀��π�悃���߂����ʀへ���ہ�̀��������憳���؁�클�͆�����ā����́���ҁ�ꃈ�����فā�Ɂ́Á��߂����ʀ�ӂʁ���΁���\n",
	/* 60*/ "�ނ��߀с����ÁҀۀ�̀��π�Ӏ܁������������π��������󁻁�����р󂄁ρƁ�ā��ˁ��́Ł؁��ҁ󂼅���܄Ł��́��΁����ခ�����̃���́܀�����\n",
	/* 61*/ "�����߀с����ÁҀۀ�̀��π�Ӂ����߁��рτ��ρ߁��ׂ̄ȁā�ɀ�������߀с��Ҁۂ��������Ȁ�����߂����̓��Ł́���Áҁ��Ȁ�����߂��Ӏ􂄁����҂Ё�π��σ��҇��҃��ā��Ձˀۂ��������ǂ��Ɓ�Ł��ń����π��􂄁����҂ā����܀����ρ܁Ł́Ł؁��ҁ������߀с��Ӏ܀₄���ˁπۂ������惼�����΁�܀��Áҁ��Ȁ�����߂������������̓��Ł́����\n",
	/* 62*/ "��׀߀с�����׀߀с��Ҁۀ�̀��πへ�ׁ��Ɂ�فŁɁ�Ɓ�̀�ρ������Á��ˁӃ��҃������فŁɃ��݁ҁف���ׁŁ́����\n",
	/* 63*/ "�����׀ـρ��ʀ�\n",
	/* 64*/ "�܀؁���\n",
	/* 65*/ "�����ӂ����Ȁπ�\n",
	/* 66*/ "�����߁��р�\n",
	/* 67*/ "��рЀρ҇��Ł�\n",
	/* 68*/ "�Ӏр��Ѐρ҂���\n",
	/* 69*/ "�րˀ��π�ς���\n",
	/* 70*/ "�����݀π����\n",
	/* 71*/ "�����݀π������\n",
	/* 72*/ "�������ڂ���\n",
	/* 73*/ "�������ڂ�����\n",
	/* 74*/ "�����Ӏ܀؀с�\n",
	/* 75*/ "�����Ӏ܀؀с���\n",
	/* 76*/ "����\n",
	/* 77*/ "���ր�\n",
	/* 78*/ "�ۀՁ�\n",
	/* 79*/ "�ۀՁ���\n",
	/* 80*/ "��������\n",
	/* 81*/ "����������\n",
	/* 82*/ "���������ł�\n",
	/* 83*/ "���������ł΀�\n",
	/* 84*/ "������������\n",
	/* 85*/ "��������������\n",
	/* 86*/ "������������\n",
	/* 87*/ "��������������\n",
	/* 88*/ "�Ä�����\n",
	/* 89*/ "�Ä�������\n",
	/* 90*/ "�ƃǃȄ�����\n",
	/* 91*/ "�ƃǃȄ�����\n",
	/* 92*/ "�̂؃̓�\n",
	/* 93*/ "�̂؃̓���\n",
	/* 94*/ "�������ʀ׀�\n",
	/* 95*/ "�������ʀ׀���\n",
	/* 96*/ "����\n",
	/* 97*/ "������\n",
	/* 98*/ "�����҄���\n",
	/* 99*/ "�����҄�����\n",
	/*100*/ "�܀؁�������\n",
	/*101*/ "�܀؁���������\n",
	/*102*/ "�܀؁����҆���\n",
	/*103*/ "�܀؁����҆�����\n",
	/*104*/ "�Ӏρ��ƀπ�\n",
	/*105*/ "���ρ���\n",
	/*106*/ "���̆�\n",
	/*107*/ "�ÁŁ΁�\n",
	/*108*/ "���ρ���\n",
	/*109*/ "�Ҁȁ���\n",
	/*110*/ "�̄��򂄁�\n",
	/*111*/ "�鄡\n",
	/*112*/ "����\n",
	/*113*/ "�߂����ʀ��\n",
	/*114*/ "���〹�ā�\n",
	/*115*/ "����\n",
	/*116*/ "����ā�\n",
	/*117*/ "���\n",
	/*118*/ "�����\n",
	/*119*/ "��ʀրπ�\n",
	/*120*/ "���ʀ�\n",
	/*121*/ "������\n",
	/*122*/ "�傲�",
	/*123*/ "�فŁɀ�",
	/*124*/ "�����䂄 21\n",
	/*125*/ "������傄 20\n",
	/*126*/ "�Ѐ���̀� 19\n",
	/*127*/ "�����ւ� 18\n",
	/*128*/ "�肄���� 17\n",
	/*129*/ "�ހ����˂� 16\n",
	/*130*/ "�ӂ����Ȁπ� 15\n",
	/*131*/ "���ӂ����Ȁπ� 14\n",
	/*132*/ "���ӂ����Ȁπ� 13\n",
	/*133*/ "�Ӏր܁����� 12\n",
	/*134*/ "������� 11\n",
	/*135*/ "���� 10\n",
	/*136*/ "���ρ��ˀ��� 9\n",
	/*137*/ "�ۀ̂��߂� 8\n",
	/*138*/ "��π߂� 7\n",
	/*139*/ "��ʀ��� 6\n",
	/*140*/ "�����ڀ� 5\n",
	/*141*/ "�Ӏ����� 4\n",
	/*142*/ "�Ҁ���� 3\n",
	/*143*/ "��������Ȁ׀� 2\n",
	/*144*/ "������Ȁ׀� 1\n",
	/*145*/ "DARTAMMO",
	/*146*/ "MODEL 1.4",
	/*147*/ "JM: 201172",
	/*148*/ "����������\n",
	/*149*/ "���󂑁�\n",
	/*150*/ "�����ւ���\n",
	/*151*/ "���ʀ�\n",
	/*152*/ "�Ԁ偸�ف�\n",
	/*153*/ "����\n",
	/*154*/ "���ۀ�̀��π�\n",
	/*155*/ "MODEL 1.3",
	/*156*/ "BNC: 15877",
	/*157*/ "�Á҃���ρӀ݀ʀ����؁ǁ���\n",
	/*158*/ "�߂����ʀ� ",
	/*159*/ "���� ",
	/*160*/ "�����邍�� ",
	/*161*/ "�ȅ��Ɓ�̀܀߂���\n",
	/*162*/ "�ȅ�������\n",
	/*163*/ "�������� ",
	/*164*/ "�����π�\n",
	/*165*/ "�����π�\n",
	/*166*/ "�����π�\n",
	/*167*/ "�݀π߂�\n",
	/*168*/ "����\n",
	/*169*/ "�Ӏ����܁�ف��\n",
	/*170*/ "Style 1",
	/*171*/ "Style 2",
	/*172*/ "Style 3",
	/*173*/ "Style 4",
	/*174*/ "Blonde",
	/*175*/ "Black",
	/*176*/ "Auburn",
	/*177*/ "Blue Rinse",
	/*178*/ "Player",
	/*179*/ "",
	/*180*/ "\n",
	/*181*/ "������\n",
	/*182*/ "���ˀ��ρ�\n",
	/*183*/ "���������ǁҀ�����\n",
	/*184*/ "�׀рʀ׀܀߂���\n",
	/*185*/ "���������ǀ�������\n",
	/*186*/ "�ـρ��ʀ�ۀ�̀�����\n",
	/*187*/ "�րˀ��π�ς���\n",
	/*188*/ "�΂�����\n",
	/*189*/ "�݀ʀ�Ѐʁ����\n",
	/*190*/ "�����р󂄀���������\n",
	/*191*/ "�����р󂄀���������\n",
	/*192*/ "�����р󂄀���������\n",
	/*193*/ "�����р󂄀���������\n",
	/*194*/ "�ۀ�̀��π�҄���\n",
	/*195*/ "���������Ҁۀ�̀��π��\n",
	/*196*/ "�ۀ�̀��π�Ҁ߀с�\n",
	/*197*/ "�������ׄ�\n",
	/*198*/ "���������ҁ�\n",
	/*199*/ "��������\n",
	/*200*/ "����������\n",
	/*201*/ "�׀рʀ׀���\n",
	/*202*/ "�������\n",
	/*203*/ "�׀рʀ׀�����\n",
	/*204*/ "�����р󂄁ҁ�\n",
	/*205*/ "�ۀ�̀��π�́҆�����\n",
	/*206*/ "�����р󂄁ҁفҀ�������\n",
	/*207*/ "�����р󂄂��ۀ�̀��π�\n",
	/*208*/ "���Ԁۀ�̀��π���\n",
	/*209*/ "DR.SPY",
	/*210*/ "BOMBSPY",
	/*211*/ "�܁����������сƁ�\n",
	/*212*/ "���������\n",
	/*213*/ "������\n",
	/*214*/ "�ԁ����ہ�\n",
	/*215*/ "������ـ�ρ�\n",
	/*216*/ "�ށ��\n",
	/*217*/ NULL,
	/*218*/ NULL,
	/*219*/ NULL,
};

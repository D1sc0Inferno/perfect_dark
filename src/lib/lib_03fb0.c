#include <ultra64.h>
#include "constants.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_01a3a0.h"
#include "game/data/data_020df0.h"
#include "game/data/data_02da90.h"
#include "gvars/gvars.h"
#include "lib/lib_03fb0.h"
#include "lib/lib_4a360.h"
#include "types.h"

GLOBAL_ASM(
glabel guLookAtF
/*     3fb0:	27bdffb0 */ 	addiu	$sp,$sp,-80
/*     3fb4:	afbf004c */ 	sw	$ra,0x4c($sp)
/*     3fb8:	afb00048 */ 	sw	$s0,0x48($sp)
/*     3fbc:	00808025 */ 	or	$s0,$a0,$zero
/*     3fc0:	f7be0040 */ 	sdc1	$f30,0x40($sp)
/*     3fc4:	f7bc0038 */ 	sdc1	$f28,0x38($sp)
/*     3fc8:	f7ba0030 */ 	sdc1	$f26,0x30($sp)
/*     3fcc:	f7b80028 */ 	sdc1	$f24,0x28($sp)
/*     3fd0:	f7b60020 */ 	sdc1	$f22,0x20($sp)
/*     3fd4:	f7b40018 */ 	sdc1	$f20,0x18($sp)
/*     3fd8:	afa50054 */ 	sw	$a1,0x54($sp)
/*     3fdc:	afa60058 */ 	sw	$a2,0x58($sp)
/*     3fe0:	0c012918 */ 	jal	func0004a460
/*     3fe4:	afa7005c */ 	sw	$a3,0x5c($sp)
/*     3fe8:	c7a40060 */ 	lwc1	$f4,0x60($sp)
/*     3fec:	c7a60054 */ 	lwc1	$f6,0x54($sp)
/*     3ff0:	c7a80064 */ 	lwc1	$f8,0x64($sp)
/*     3ff4:	c7aa0058 */ 	lwc1	$f10,0x58($sp)
/*     3ff8:	46062001 */ 	sub.s	$f0,$f4,$f6
/*     3ffc:	c7a6005c */ 	lwc1	$f6,0x5c($sp)
/*     4000:	c7a40068 */ 	lwc1	$f4,0x68($sp)
/*     4004:	460a4701 */ 	sub.s	$f28,$f8,$f10
/*     4008:	46000202 */ 	mul.s	$f8,$f0,$f0
/*     400c:	46000686 */ 	mov.s	$f26,$f0
/*     4010:	46062781 */ 	sub.s	$f30,$f4,$f6
/*     4014:	461ce282 */ 	mul.s	$f10,$f28,$f28
/*     4018:	460a4100 */ 	add.s	$f4,$f8,$f10
/*     401c:	461ef182 */ 	mul.s	$f6,$f30,$f30
/*     4020:	0c012974 */ 	jal	sqrtf
/*     4024:	46062300 */ 	add.s	$f12,$f4,$f6
/*     4028:	44804000 */ 	mtc1	$zero,$f8
/*     402c:	46000486 */ 	mov.s	$f18,$f0
/*     4030:	3c017005 */ 	lui	$at,%hi(var700524a0)
/*     4034:	46080032 */ 	c.eq.s	$f0,$f8
/*     4038:	00000000 */ 	nop
/*     403c:	45020003 */ 	bc1fl	.L0000404c
/*     4040:	3c01bf80 */ 	lui	$at,0xbf80
/*     4044:	c43224a0 */ 	lwc1	$f18,%lo(var700524a0)($at)
/*     4048:	3c01bf80 */ 	lui	$at,0xbf80
.L0000404c:
/*     404c:	44815000 */ 	mtc1	$at,$f10
/*     4050:	c7a40070 */ 	lwc1	$f4,0x70($sp)
/*     4054:	c7a80074 */ 	lwc1	$f8,0x74($sp)
/*     4058:	46125003 */ 	div.s	$f0,$f10,$f18
/*     405c:	4600d682 */ 	mul.s	$f26,$f26,$f0
/*     4060:	00000000 */ 	nop
/*     4064:	4600e702 */ 	mul.s	$f28,$f28,$f0
/*     4068:	00000000 */ 	nop
/*     406c:	4600f782 */ 	mul.s	$f30,$f30,$f0
/*     4070:	00000000 */ 	nop
/*     4074:	461e2182 */ 	mul.s	$f6,$f4,$f30
/*     4078:	00000000 */ 	nop
/*     407c:	461c4282 */ 	mul.s	$f10,$f8,$f28
/*     4080:	460a3501 */ 	sub.s	$f20,$f6,$f10
/*     4084:	461a4182 */ 	mul.s	$f6,$f8,$f26
/*     4088:	c7aa006c */ 	lwc1	$f10,0x6c($sp)
/*     408c:	461e5202 */ 	mul.s	$f8,$f10,$f30
/*     4090:	46083581 */ 	sub.s	$f22,$f6,$f8
/*     4094:	461c5182 */ 	mul.s	$f6,$f10,$f28
/*     4098:	00000000 */ 	nop
/*     409c:	461a2202 */ 	mul.s	$f8,$f4,$f26
/*     40a0:	46083601 */ 	sub.s	$f24,$f6,$f8
/*     40a4:	4614a282 */ 	mul.s	$f10,$f20,$f20
/*     40a8:	00000000 */ 	nop
/*     40ac:	4616b102 */ 	mul.s	$f4,$f22,$f22
/*     40b0:	46045180 */ 	add.s	$f6,$f10,$f4
/*     40b4:	4618c202 */ 	mul.s	$f8,$f24,$f24
/*     40b8:	0c012974 */ 	jal	sqrtf
/*     40bc:	46083300 */ 	add.s	$f12,$f6,$f8
/*     40c0:	44805000 */ 	mtc1	$zero,$f10
/*     40c4:	46000486 */ 	mov.s	$f18,$f0
/*     40c8:	3c017005 */ 	lui	$at,%hi(var700524a4)
/*     40cc:	460a0032 */ 	c.eq.s	$f0,$f10
/*     40d0:	00000000 */ 	nop
/*     40d4:	45020003 */ 	bc1fl	.L000040e4
/*     40d8:	3c013f80 */ 	lui	$at,0x3f80
/*     40dc:	c43224a4 */ 	lwc1	$f18,%lo(var700524a4)($at)
/*     40e0:	3c013f80 */ 	lui	$at,0x3f80
.L000040e4:
/*     40e4:	44812000 */ 	mtc1	$at,$f4
/*     40e8:	00000000 */ 	nop
/*     40ec:	46122003 */ 	div.s	$f0,$f4,$f18
/*     40f0:	4600a502 */ 	mul.s	$f20,$f20,$f0
/*     40f4:	00000000 */ 	nop
/*     40f8:	4600b582 */ 	mul.s	$f22,$f22,$f0
/*     40fc:	00000000 */ 	nop
/*     4100:	4600c602 */ 	mul.s	$f24,$f24,$f0
/*     4104:	00000000 */ 	nop
/*     4108:	4618e182 */ 	mul.s	$f6,$f28,$f24
/*     410c:	00000000 */ 	nop
/*     4110:	4616f202 */ 	mul.s	$f8,$f30,$f22
/*     4114:	00000000 */ 	nop
/*     4118:	4614f282 */ 	mul.s	$f10,$f30,$f20
/*     411c:	00000000 */ 	nop
/*     4120:	4618d102 */ 	mul.s	$f4,$f26,$f24
/*     4124:	46083081 */ 	sub.s	$f2,$f6,$f8
/*     4128:	4616d182 */ 	mul.s	$f6,$f26,$f22
/*     412c:	00000000 */ 	nop
/*     4130:	4614e202 */ 	mul.s	$f8,$f28,$f20
/*     4134:	e7a2006c */ 	swc1	$f2,0x6c($sp)
/*     4138:	46045381 */ 	sub.s	$f14,$f10,$f4
/*     413c:	46021282 */ 	mul.s	$f10,$f2,$f2
/*     4140:	00000000 */ 	nop
/*     4144:	460e7102 */ 	mul.s	$f4,$f14,$f14
/*     4148:	e7ae0070 */ 	swc1	$f14,0x70($sp)
/*     414c:	46083401 */ 	sub.s	$f16,$f6,$f8
/*     4150:	46108202 */ 	mul.s	$f8,$f16,$f16
/*     4154:	46045180 */ 	add.s	$f6,$f10,$f4
/*     4158:	e7b00074 */ 	swc1	$f16,0x74($sp)
/*     415c:	0c012974 */ 	jal	sqrtf
/*     4160:	46083300 */ 	add.s	$f12,$f6,$f8
/*     4164:	44805000 */ 	mtc1	$zero,$f10
/*     4168:	46000486 */ 	mov.s	$f18,$f0
/*     416c:	3c017005 */ 	lui	$at,%hi(var700524a8)
/*     4170:	460a0032 */ 	c.eq.s	$f0,$f10
/*     4174:	00000000 */ 	nop
/*     4178:	45020003 */ 	bc1fl	.L00004188
/*     417c:	3c013f80 */ 	lui	$at,0x3f80
/*     4180:	c43224a8 */ 	lwc1	$f18,%lo(var700524a8)($at)
/*     4184:	3c013f80 */ 	lui	$at,0x3f80
.L00004188:
/*     4188:	44812000 */ 	mtc1	$at,$f4
/*     418c:	c7ac006c */ 	lwc1	$f12,0x6c($sp)
/*     4190:	c7a20070 */ 	lwc1	$f2,0x70($sp)
/*     4194:	46122003 */ 	div.s	$f0,$f4,$f18
/*     4198:	c7a60074 */ 	lwc1	$f6,0x74($sp)
/*     419c:	46006302 */ 	mul.s	$f12,$f12,$f0
/*     41a0:	00000000 */ 	nop
/*     41a4:	46001082 */ 	mul.s	$f2,$f2,$f0
/*     41a8:	00000000 */ 	nop
/*     41ac:	46003202 */ 	mul.s	$f8,$f6,$f0
/*     41b0:	e7a80074 */ 	swc1	$f8,0x74($sp)
/*     41b4:	e6140000 */ 	swc1	$f20,0x0($s0)
/*     41b8:	e6160010 */ 	swc1	$f22,0x10($s0)
/*     41bc:	e6180020 */ 	swc1	$f24,0x20($s0)
/*     41c0:	c7aa0054 */ 	lwc1	$f10,0x54($sp)
/*     41c4:	c7a60058 */ 	lwc1	$f6,0x58($sp)
/*     41c8:	46145102 */ 	mul.s	$f4,$f10,$f20
/*     41cc:	00000000 */ 	nop
/*     41d0:	46163202 */ 	mul.s	$f8,$f6,$f22
/*     41d4:	c7a6005c */ 	lwc1	$f6,0x5c($sp)
/*     41d8:	e60c0004 */ 	swc1	$f12,0x4($s0)
/*     41dc:	e6020014 */ 	swc1	$f2,0x14($s0)
/*     41e0:	46082280 */ 	add.s	$f10,$f4,$f8
/*     41e4:	46183102 */ 	mul.s	$f4,$f6,$f24
/*     41e8:	46045200 */ 	add.s	$f8,$f10,$f4
/*     41ec:	46004187 */ 	neg.s	$f6,$f8
/*     41f0:	e6060030 */ 	swc1	$f6,0x30($s0)
/*     41f4:	c7a00074 */ 	lwc1	$f0,0x74($sp)
/*     41f8:	e7a20070 */ 	swc1	$f2,0x70($sp)
/*     41fc:	e7ac006c */ 	swc1	$f12,0x6c($sp)
/*     4200:	c7ac0058 */ 	lwc1	$f12,0x58($sp)
/*     4204:	c7a2005c */ 	lwc1	$f2,0x5c($sp)
/*     4208:	c7ae0054 */ 	lwc1	$f14,0x54($sp)
/*     420c:	e6000024 */ 	swc1	$f0,0x24($s0)
/*     4210:	c7aa006c */ 	lwc1	$f10,0x6c($sp)
/*     4214:	c7a80070 */ 	lwc1	$f8,0x70($sp)
/*     4218:	e61a0008 */ 	swc1	$f26,0x8($s0)
/*     421c:	460a7102 */ 	mul.s	$f4,$f14,$f10
/*     4220:	e61c0018 */ 	swc1	$f28,0x18($s0)
/*     4224:	e61e0028 */ 	swc1	$f30,0x28($s0)
/*     4228:	46086182 */ 	mul.s	$f6,$f12,$f8
/*     422c:	46062280 */ 	add.s	$f10,$f4,$f6
/*     4230:	46001202 */ 	mul.s	$f8,$f2,$f0
/*     4234:	44800000 */ 	mtc1	$zero,$f0
/*     4238:	00000000 */ 	nop
/*     423c:	e600000c */ 	swc1	$f0,0xc($s0)
/*     4240:	e600001c */ 	swc1	$f0,0x1c($s0)
/*     4244:	e600002c */ 	swc1	$f0,0x2c($s0)
/*     4248:	46085100 */ 	add.s	$f4,$f10,$f8
/*     424c:	461a7282 */ 	mul.s	$f10,$f14,$f26
/*     4250:	00000000 */ 	nop
/*     4254:	461c6202 */ 	mul.s	$f8,$f12,$f28
/*     4258:	46002187 */ 	neg.s	$f6,$f4
/*     425c:	e6060034 */ 	swc1	$f6,0x34($s0)
/*     4260:	461e1182 */ 	mul.s	$f6,$f2,$f30
/*     4264:	46085100 */ 	add.s	$f4,$f10,$f8
/*     4268:	46062280 */ 	add.s	$f10,$f4,$f6
/*     426c:	44812000 */ 	mtc1	$at,$f4
/*     4270:	46005207 */ 	neg.s	$f8,$f10
/*     4274:	e604003c */ 	swc1	$f4,0x3c($s0)
/*     4278:	e6080038 */ 	swc1	$f8,0x38($s0)
/*     427c:	8fbf004c */ 	lw	$ra,0x4c($sp)
/*     4280:	8fb00048 */ 	lw	$s0,0x48($sp)
/*     4284:	d7be0040 */ 	ldc1	$f30,0x40($sp)
/*     4288:	d7bc0038 */ 	ldc1	$f28,0x38($sp)
/*     428c:	d7ba0030 */ 	ldc1	$f26,0x30($sp)
/*     4290:	d7b80028 */ 	ldc1	$f24,0x28($sp)
/*     4294:	d7b60020 */ 	ldc1	$f22,0x20($sp)
/*     4298:	d7b40018 */ 	ldc1	$f20,0x18($sp)
/*     429c:	03e00008 */ 	jr	$ra
/*     42a0:	27bd0050 */ 	addiu	$sp,$sp,0x50
);

void guLookAt(Mtx *m, float xEye, float yEye, float zEye,
		float xAt,  float yAt,  float zAt,
		float xUp,  float yUp,  float zUp)
{
	float mf[4][4];

	guLookAtF(mf, xEye, yEye, zEye, xAt, yAt, zAt, xUp, yUp, zUp);

	guMtxF2L(mf, m);
}

#ifndef _IN_BSS_H
#define _IN_BSS_H
#include <ultra64.h>
#include "constants.h"
#include "types.h"

extern u32 var8008ae20;
extern u32 var8008ae24;
extern u32 var8008ae28;
extern u32 var8008ae2c;
extern u32 var8008ae30;
extern OSThread g_MainThread;
extern OSMesgQueue var8008db30;
extern OSSched g_SchedThread;
extern OSViMode var8008dcc0[2];
extern OSViMode *var8008dd60[2];
extern u32 var8008de08;
extern u32 var8008de0c;
extern u32 var8008de10;
extern u8 g_BootBufferDirtyIndexes[3];
extern s32 g_BootBufferIndex0;
extern OSPiHandle CartRomHandle;
extern OSPiHandle LeoDiskHandle;
extern OSPifRam __osPfsPifRam;
extern OSTimer var80090ab0;
extern OSMesgQueue var80090ad0;
extern OSMesg var80090ae8;
extern u8 g_Is4Mb;
extern u32 var80090af4;
extern u32 var80090af8;
extern u32 var80090afc;
extern u32 var80090b00;
extern u32 var80090b04;
extern u32 var80090b08;
extern AMAudioMgr g_AudioManager;
extern u32 var80092828;
extern u32 var80092870;
extern s32 var80094ea8;
extern struct var80094ed8 var80094ed8[3];
extern ALHeap g_SndHeap;
extern u32 var80095200;
extern struct var80095210 var80095210;
extern OSMesgQueue var80099e78;
extern struct g_vars g_Vars;
extern u32 var8009a874;
extern u32 var8009a888;
extern union filedataptr g_TileFileData;
extern s32 g_TileNumRooms;
extern u32 *g_TileRooms;
extern u32 var8009a918;
extern u8 g_RdpDramStack[SP_DRAM_STACK_SIZE8];
extern u32 var8009c2d0;
extern struct var8009c340 var8009c340;
extern u32 var8009c344;
extern u32 var8009c3e0;
extern u8 *var8009c3f4;
extern u8 *var8009c640;
extern u8 *var8009c644;
extern u8 var8009c650[];
extern u8 *var8009c6d8;
extern u8 *var8009c6dc;
extern __OSEventState __osEventStateTab[15];
extern OSTimer var8009c760;
extern OSTime __osCurrentTime;
extern u32 __osBaseCounter;
extern u32 __osViIntrCount;
extern OSMesgQueue __osPiAccessQueue;
extern OSPifRam __osContPifRam;
extern u8 __osContLastCmd;
extern u8 __osMaxControllers;
extern OSTimer __osEepromTimer;
extern OSMesgQueue __osEepromTimerQ;
extern OSMesg __osEepromTimerMsg;
extern OSPifRam __osEepPifRam;
extern u32 var8009ca84;
extern void *var8009cac0;
extern void *var8009cac4;
extern u8 var8009caec[4];
extern u8 var8009caf0;
extern struct prop *g_DangerousProps[MAX_DANGEROUSPROPS];
extern u16 *var8009cc40;
extern s32 var8009cc44;
extern u32 var8009cc48;
extern u32 var8009cc4c;
extern u32 var8009cc50;
extern u32 var8009cc54;
extern u32 var8009cc58;
extern u32 var8009cc5c;
extern u32 var8009cc60;
extern s32 var8009cc64;
extern u32 var8009cc68;
extern u32 var8009cc70;
extern u32 var8009cc74;
extern f32 var8009cc78;
extern Mtx *var8009cc80;
extern Mtx *var8009cc84;
extern Mtx *var8009cc88;
extern u8 *var8009cca0;
extern void *var8009ccc0[20];
extern s32 g_NumChrs;
extern s16 *g_Chrnums;
extern s16 *g_ChrIndexes;
extern s32 g_NumActiveHeadsPerGender;
extern u32 g_ActiveMaleHeads[8];
extern u32 g_ActiveFemaleHeads[8];
extern s16 *g_RoomPropListChunkIndexes;
extern struct roomproplistchunk *g_RoomPropListChunks;
extern struct prop *g_InteractProp;
extern u32 var8009cdac;
extern u32 var8009cdb0;
extern struct weaponobj *g_Proxies[30];
extern s32 var8009ce40;
extern s32 var8009ce44;
extern s32 var8009ce48;
extern s32 var8009ce4c;
extern s32 g_NumProjectiles;
extern s32 g_NumMonitorThings;
extern struct weaponobj *var8009ce58;
extern struct defaultobj *var8009ce5c;
extern struct var8009ce60 *var8009ce60;
extern struct defaultobj *var8009ce64;
extern struct projectile *g_Projectiles;
extern struct monitorthing *g_MonitorThings;
extern u32 var8009ce70;
extern u32 var8009ce74;
extern u32 var8009ce78[4];
extern u32 var8009ce88[4];
extern struct tvscreen var8009ce98;
extern struct tvscreen var8009cf10;
extern struct tvscreen var8009cf88;
extern struct stagesetup g_StageSetup;
extern u8 *g_GeCreditsData;
extern struct objective *g_Objectives[MAX_OBJECTIVES];
extern u32 g_ObjectiveStatuses[MAX_OBJECTIVES];
extern struct tag *g_TagsLinkedList;
extern struct briefingobj *g_BriefingObjs;
extern struct criteria_roomentered *g_RoomEnteredCriterias;
extern struct criteria_multiroomentered *g_MultiroomEnteredCriterias;
extern struct criteria_holograph *g_HolographCriterias;
extern u32 var8009d0d0[2];
extern s32 var8009d0d8;
extern struct audiohandle *g_BgunAudioHandles[4];
extern struct fireslot g_Fireslots[NUM_FIRESLOTS];
extern struct casing g_Casings[20];
extern struct var8009da60 var8009da60[8];
extern struct lasersight g_LaserSights[4];
extern u32 var8009dd00;
extern u32 var8009dd04;
extern u32 var8009dd08;
extern u32 var8009dd0c;
extern u32 var8009dd10;
extern u32 var8009dd20;
extern u32 var8009dd24;
extern u32 var8009dd28;
extern u32 var8009dd2c;
extern u32 var8009dd30;
extern u32 var8009dd34;
extern u32 var8009dd38;
extern u32 var8009dd3c;
extern u32 var8009dd40;
extern u32 var8009dd44;
extern u32 var8009dd48;
extern u32 var8009dd4c;
extern u32 var8009dd50;
extern u32 var8009dd54;
extern u32 var8009dd58;
extern u32 var8009dd5c;
extern u32 var8009dd6c;
extern s32 g_DefaultWeapons[2];
extern s32 g_CutsceneCurAnimFrame60;

#if VERSION >= VERSION_PAL_FINAL
extern f32 var8009e388pf;
#endif

extern s16 g_CutsceneAnimNum;
extern s32 g_CutsceneFrameOverrun240;
extern bool g_CutsceneSkipRequested;
extern f32 g_CutsceneCurTotalFrame60f;
extern s16 g_SpawnPoints[MAX_SPAWNPOINTS];
extern s32 g_NumSpawnPoints;
extern u32 var8009de90;
extern u32 var8009de94;
extern u32 var8009de98;
extern u32 var8009de9c;
extern u8 g_MpSelectedPlayersForStats[4];
extern char g_CheatMarqueeString[252];
extern u32 var8009dfbc;
extern s32 var8009dfc0;
extern struct briefing g_Briefing;
extern struct missionconfig g_MissionConfig;
extern struct menu g_Menus[4];
extern struct menudata g_MenuData;
extern struct activemenu g_AmMenus[4];
extern s32 g_AmIndex;
extern u32 g_CheatsActiveBank0;
extern u32 g_CheatsActiveBank1;
extern u32 g_CheatsEnabledBank0;
extern u32 g_CheatsEnabledBank1;
extern s32 g_FilemgrLastPakError;
extern struct gamefile g_GameFile;
extern struct fileguid g_GameFileGuid;
extern s8 g_AltTitleUnlocked;
extern u8 g_AltTitleEnabled;
extern struct padsfileheader *g_PadsFile;
extern u16 *g_PadOffsets;
extern u16 *g_CoverFlags;
extern s32 *g_CoverRooms;
extern struct covercandidate *g_CoverCandidates;
extern u16 g_NumSpecialCovers;
extern u16 *g_SpecialCoverNums;
extern struct pak g_Paks[5];
extern OSPfs g_Pfses[4];
extern u32 var800a33a0;
extern u32 var800a33a4;
extern struct explosion *g_Explosions;
extern s32 g_MaxExplosions;
extern struct smoke *g_Smokes;
extern s32 g_MaxSmokes;
extern Mtx var800a3448;
extern Mtx var800a3488;
extern struct spark g_Sparks[100];
extern u32 g_NextSparkIndex;
extern struct sparkgroup g_SparkGroups[10];
extern u32 var800a4130;
extern u8 *var800a41a0;
extern struct var800a41b0 *var800a41b0;
extern struct var800a41b0 *var800a41b4;
extern u32 var800a41b8;
extern s32 g_MaxShards;
extern struct shard *g_Shards;
extern Gfx *var800a4634;
extern struct room *g_Rooms;
extern u8 *g_MpRoomVisibility;
extern struct bgroom *g_BgRooms;
extern struct bgportal *g_BgPortals;
extern struct var800a4ccc *var800a4ccc;
extern u8 *g_BgLightsFileData;
extern s16 *g_RoomPortals;
extern struct var800a4cf0 var800a4cf0;
extern u32 var800a6470;
extern u32 var800a647c;
extern u32 var800a6538;
extern u32 var800a65b8;
extern struct screenbox var800a65c0;
extern struct screenbox var800a65c8;
extern u32 g_PortalDisableParentExec;
extern u32 g_FogDisabled;
extern u32 var800a65e4;
extern struct coord *var800a65e8;
extern u8 *var800a6660;
extern s16 *var800a6664;
extern s16 *var800a6668;
extern f32 *var800a666c;
extern Mtxf *var800a6670;
extern struct fileinfo g_FileInfo[NUM_FILES];
extern u8 *g_VtxBuffers[3];
extern u8 *g_GfxMemPos;
extern u8 g_GfxActiveBufferIndex;
extern s32 g_MusicStageNum;
extern struct var800aa5d8 var800aa5d8[40];
extern struct var800aaa38 var800aaa38[3];
extern u32 g_AudioXReasonsActive[4];
extern u32 var800aaa78[4];
extern u32 g_AudioXReasonDurations[4];
extern u32 *g_LangBanks[69];
extern void *var800aabb4;
extern struct var800aabb8 *var800aabb8;
extern struct texture *g_Textures;
extern u32 var800aabc8[4];
extern u8 var800aabd8[2400];
extern u32 var800ab538;
extern u8 *var800ab540;
extern u32 var800ab544;
extern s32 var800ab548;
extern u32 var800ab558;
extern struct textureconfig *var800ab55c;
extern struct textureconfig *var800ab560;
extern Gfx *var800ab564;
extern Gfx *var800ab568;
extern struct var800ab570 *var800ab570;
extern struct textureconfig *var800ab574;
extern struct textureconfig *var800ab578;
extern struct textureconfig *var800ab57c;
extern struct textureconfig *var800ab580;
extern struct textureconfig *var800ab588;
extern struct textureconfig *var800ab58c;
extern struct textureconfig *var800ab590;
extern struct textureconfig *var800ab594;
extern struct textureconfig *var800ab598;
extern struct textureconfig *var800ab5a0;
extern struct textureconfig *var800ab5a4;
extern struct textureconfig *var800ab5a8;
extern struct textureconfig *var800ab5ac;
extern struct scenariodata g_ScenarioData;
extern u32 var800ac4cc;
extern struct chrdata *g_MpPlayerChrs[MAX_MPCHRS];
extern struct mpchr *var800ac500[MAX_MPCHRS];
extern s32 g_MpNumPlayers;
extern struct mpsim g_MpSimulants[MAX_SIMULANTS];
extern u8 g_MpSimulantDifficultiesPerNumPlayers[32];
extern struct mpplayer g_MpPlayers[6];
extern u8 g_AmBotCommands[16];
extern struct mpsetup g_MpSetup;
extern struct bossfile g_BossFile;
extern struct chrdata *g_MpSimulantChrs[MAX_SIMULANTS];

#endif

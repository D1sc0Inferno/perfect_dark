#ifndef IN_GAME_PADHALLLV_H
#define IN_GAME_PADHALLLV_H
#include <ultra64.h>
#include "types.h"

void waypointSetHashThing(s32 hash1, s32 hash2);
struct waypoint *waypointFindClosestToPos(struct coord *pos, s16 *rooms);
u32 func0f114810(void);
void func0f114958(s32 *groupnums, s32 value, u32 mask);
bool func0f1149b0(struct waygroup *group, s32 arg1, u32 mask);
u32 func0f114a2c(void);
u32 func0f114aec(void);
u32 func0f114b7c(void);
void func0f114ccc(s32 *pointnums, s32 value, s32 groupnum, u32 mask);
u32 func0f114d34(void);
u32 func0f114de0(void);
u32 func0f114ee4(void);
u32 func0f114f70(void);
u32 func0f11505c(void);
s32 waypointFindRoute(struct waypoint *from, struct waypoint *to, struct waypoint **arr, s32 maxwaypoints);
void func0f115390(void);
u32 func0f1153c4(void);
u32 func0f1154cc(void);
u32 func0f1155e0(void);
void waypointDisableSegmentInDirection(struct waypoint *a, struct waypoint *b);
void waypointEnableSegmentInDirection(struct waypoint *a, struct waypoint *b);
void waypointDisableSegment(struct waypoint *a, struct waypoint *b);
void waypointEnableSegment(struct waypoint *a, struct waypoint *b);

#endif

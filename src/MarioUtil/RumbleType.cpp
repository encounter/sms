#include "dolphin.h"
#include "types.h"

// Enum To Str?
struct UnkStruct3B0378 _info[23] = {
	{ 0, "MARIO_HIPDROP" },
	{ 1, "MARIO_DAMAGE" },
	{ 2, "MARIO_LANDING" },
	{ 3, "MARIO_0_1SEC_FULL" },
	{ 4, "MARIO_HIP_ATTACK2" },
	{ 5, "MARIO_DAMAGE2" },
	{ 6, "MARIO_RUMBLE_06" },
	{ 7, "MARIO_RUMBLE_07" },
	{ 8, "MARIO_1SEC_SIN" },
	{ 9, "MARIO_1SEC_SIN_HALF" },
	{ 10, "MARIO_RUMBLE_10" },
	{ 11, "MARIO_RUMBLE_11" },
	{ 12, "MARIO_RUMBLE_12" },
	{ 13, "MARIO_RUMBLE_13" },
	{ 14, "MARIO_RUMBLE_14" },
	{ 15, "MARIO_RUMBLE_15" },
	{ 16, "MARIO_RUMBLE_16" },
	{ 17, "MARIO_RUMBLE_17" },
	{ 18, "MARIO_RUMBLE_18" },
	{ 19, "MAPOBJ_APPEAR" },
	{ 20, "MARIO_WEAK" },
	{ 21, "MARIO_HARD" },
	{ 22, "MARIO_ELECTRIC_DAMAGE" },
};

const char* invalidStr = "Invalid RumbleType";

int RumbleType::getIndex(char* strIn)
{
	for (int i = 0; i < channelNum; i++) {
		if (!strcmp(strIn, _info[i].str)) {
			return _info[i].unk0;
		}
	}
	return -1;
}

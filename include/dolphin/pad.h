#ifndef _DOLPHIN_PAD_H
#define _DOLPHIN_PAD_H

#include "dolphin/types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

typedef struct PADStatusSingle {
	u16 _00;
	u8 _02;
	u8 _03;
	u8 _04;
	u8 _05;
	u8 _06;
	char _07;
	u8 _08;
	u8 _09;
	char _0A;
} PADStatusSingle;

typedef struct PADStatus {
	PADStatusSingle m_stats[4];
} PADStatus;

void __PADDisableRecalibration();
void PADClamp();
void PADClampCircle(PADStatus*);
void PADControlMotor(int, u32);
void PADInit();
void PADOriginCallback();
void PADOriginUpdateCallback();
void PADProbeCallback();
void PADRead(PADStatus*);
void PADRecalibrate();
void PADReset();
void PADSetAnalogMode();
void PADSetSamplingCallback();
void PADSetSpec();
void PADTypeAndStatusCallback();

#ifdef __cplusplus
}
#endif // ifdef __cplusplus

#endif

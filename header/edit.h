#ifndef __EDIT_H__
#define __EDIT_H__

#include "types.h"

void PrintMenu(void);
void EditRTCTime(void);
void EditTrainTime(void);
void EditArrivalTime(void);
void EditDepartureTime(void);
void EditDelayTime(void);
void EditPlatform(void);

extern volatile u8 EditMode;

#endif

#ifndef __DELAY_H__
#define __DELAY_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

extern void uDelay(uint32_t delay);

#define DELAY_US(us) 	uDelay(us)
#define DELAY_MS(ms) 	HAL_Delay(ms)

#ifdef __cplusplus
}
#endif
#endif /*__DELAY_H__ */

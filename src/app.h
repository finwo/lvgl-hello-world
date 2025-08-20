#ifndef __APP_H__
#define __APP_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

int app_setup();
void app_loop(uint32_t elapsedTime);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // __APP_H__

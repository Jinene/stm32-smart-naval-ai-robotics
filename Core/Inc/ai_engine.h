#ifndef AI_ENGINE_H
#define AI_ENGINE_H

#include "sensors.h"

void ai_init(void);
int ai_detect_anomaly(sensor_data_t *data);

#endif

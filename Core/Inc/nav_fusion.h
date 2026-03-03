#ifndef NAV_FUSION_H
#define NAV_FUSION_H

#include "sensors.h"

void nav_init(void);
void nav_update(sensor_data_t *data);

#endif

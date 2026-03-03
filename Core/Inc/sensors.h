#ifndef SENSORS_H
#define SENSORS_H

#include "stm32f4xx_hal.h"

typedef struct {
    float ax, ay, az;
    float depth;
    float temperature;
    float sonar;
} sensor_data_t;

void sensors_init(I2C_HandleTypeDef *hi2c);
void sensors_read(sensor_data_t *data);

#endif

#include "sensors.h"

static I2C_HandleTypeDef *i2c_handle;

void sensors_init(I2C_HandleTypeDef *hi2c)
{
    i2c_handle = hi2c;
}

void sensors_read(sensor_data_t *data)
{
    // Placeholder sensor simulation
    data->ax = 0.01f;
    data->ay = 0.02f;
    data->az = 9.81f;
    data->depth = 15.5f;
    data->temperature = 18.2f;
    data->sonar = 2.4f;
}

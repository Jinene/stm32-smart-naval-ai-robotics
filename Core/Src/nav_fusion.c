#include "nav_fusion.h"

static float estimated_depth;

void nav_init(void)
{
    estimated_depth = 0;
}

void nav_update(sensor_data_t *data)
{
    estimated_depth = 0.8f * estimated_depth + 0.2f * data->depth;
}

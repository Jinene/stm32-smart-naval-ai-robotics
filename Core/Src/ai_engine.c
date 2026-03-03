#include "ai_engine.h"

static float threshold = 5.0f;

void ai_init(void)
{
}

int ai_detect_anomaly(sensor_data_t *data)
{
    if (data->sonar < 0.5f)
        return 1;
    return 0;
}

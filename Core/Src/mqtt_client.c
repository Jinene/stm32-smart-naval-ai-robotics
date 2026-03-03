#include "mqtt_client.h"
#include <stdio.h>

void mqtt_init(void)
{
}

void mqtt_publish_status(float depth, float temp)
{
    char buffer[64];
    sprintf(buffer, "{\"depth\":%.2f,\"temp\":%.2f}", depth, temp);
}

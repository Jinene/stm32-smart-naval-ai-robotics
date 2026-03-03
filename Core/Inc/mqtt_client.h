#ifndef MQTT_CLIENT_H
#define MQTT_CLIENT_H

void mqtt_init(void);
void mqtt_publish_status(float depth, float temp);

#endif

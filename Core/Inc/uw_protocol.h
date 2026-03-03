#ifndef UW_PROTOCOL_H
#define UW_PROTOCOL_H

#include <stdint.h>

void uw_send_packet(uint8_t type, uint8_t* payload, uint16_t len);

#endif

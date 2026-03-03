#include "uw_protocol.h"

#define START_BYTE 0xAA
#define END_BYTE   0x55

void uw_send_packet(uint8_t type, uint8_t* payload, uint16_t len)
{
    uint8_t frame[256];
    frame[0] = START_BYTE;
    frame[1] = type;
    frame[2] = len;

    for(int i=0;i<len;i++)
        frame[3+i] = payload[i];

    frame[3+len] = END_BYTE;
}

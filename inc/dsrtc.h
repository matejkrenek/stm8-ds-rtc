#ifndef __DSRTC_H
#define __DSRTC_H

typedef struct
{
    uint8_t seconds;
    uint8_t minutes;
    uint8_t hours;
    uint8_t dayOfWeek;
    uint8_t dayOfMonth;
    uint8_t month;
    uint8_t year;
} DateTime;

extern uint8_t _dsrtc_address;

void DSRTC_Init(uint8_t address);
void DSRTC_Read(uint8_t *buffer);
void DSRTC_Write();
DateTime *DSRTC_DateTime();
void DSRTC_SetDateTime(uint8_t seconds, uint8_t minutes, uint8_t hours, uint8_t dayOfWeek, uint8_t dayOfMonth, uint8_t month, uint8_t year);

#endif
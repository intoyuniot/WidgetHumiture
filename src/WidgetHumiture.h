#ifndef WIDGET_HUMITURE_H_
#define WIDGET_HUMITURE_H_

#include "application.h"


class WidgetHumiture
{
public:
    WidgetHumiture(uint8_t ucItem = 0);
    ~WidgetHumiture();
    void begin(void (*UserCallBack)(void) = NULL);
    void displayHumidity(uint8_t humidity);
    void displayTemperature(char temperature);
    
private:
    char pDataHumidityTopic[64];
    char pDataTemperatureTopic[64];
    uint8_t _Item = 0;         
};

#endif

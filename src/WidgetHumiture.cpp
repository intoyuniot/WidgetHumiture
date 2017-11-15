
#include "WidgetHumiture.h"


WidgetHumiture::WidgetHumiture(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataHumidityTopic,0,sizeof(pDataHumidityTopic));
    memset(pDataTemperatureTopic,0,sizeof(pDataTemperatureTopic));
    sprintf(pDataHumidityTopic,"channel/humiture_%d/data/humidity",_Item);
    sprintf(pDataTemperatureTopic,"channel/humiture_%d/data/temperature",_Item);
}

WidgetHumiture::~WidgetHumiture()
{
}

void WidgetHumiture::begin(void (*UserCallBack)(void))
{
}

void WidgetHumiture::displayHumidity(uint8_t humidity)
{
	IntoRobot.publish(pDataHumidityTopic,humidity);
}

void WidgetHumiture::displayTemperature(char temperature)
{
	IntoRobot.publish(pDataTemperatureTopic,temperature);
}










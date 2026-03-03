#include "main.h"
#include "sensors.h"
#include "nav_fusion.h"
#include "ai_engine.h"
#include "mqtt_client.h"
#include "uw_protocol.h"
#include "memory_manager.h"

I2C_HandleTypeDef hi2c1;
UART_HandleTypeDef huart1;

osThreadId sensorTaskHandle;
osThreadId navTaskHandle;
osThreadId aiTaskHandle;
osThreadId commTaskHandle;

void SensorTask(void const * argument);
void NavTask(void const * argument);
void AITask(void const * argument);
void CommTask(void const * argument);

int main(void)
{
  HAL_Init();
  SystemClock_Config();

  MX_GPIO_Init();
  MX_I2C1_Init();
  MX_USART1_UART_Init();

  mm_init();
  sensors_init(&hi2c1);
  nav_init();
  ai_init();
  mqtt_init();

  osThreadDef(sensorTask, SensorTask, osPriorityHigh, 0, 512);
  sensorTaskHandle = osThreadCreate(osThread(sensorTask), NULL);

  osThreadDef(navTask, NavTask, osPriorityAboveNormal, 0, 512);
  navTaskHandle = osThreadCreate(osThread(navTask), NULL);

  osThreadDef(aiTask, AITask, osPriorityNormal, 0, 512);
  aiTaskHandle = osThreadCreate(osThread(aiTask), NULL);

  osThreadDef(commTask, CommTask, osPriorityLow, 0, 512);
  commTaskHandle = osThreadCreate(osThread(commTask), NULL);

  osKernelStart();

  while (1) {}
}

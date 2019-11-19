/**
 * @file main.cpp
 * @author SoBigDog (luke@seer-robotics.com)
 * @brief 
 * @version 0.1
 * @date 2019-11-14
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include "BSP.h"
#include "FreeRTOS.h"
#include "task.h"

#define BOARD_LED_RGPIO 		CM4_0__RGPIO
#define BOARD_LED_RGPIO_PIN 	0U

void MainTask(void *p) 
{
	rgpio_pin_config_t led_config = {kRGPIO_DigitalOutput, 0};

	RGPIO_PinInit(BOARD_LED_RGPIO, BOARD_LED_RGPIO_PIN, &led_config);
	
	while (1) {
		RGPIO_PortToggle(BOARD_LED_RGPIO, 1u << BOARD_LED_RGPIO_PIN);
		vTaskDelay(500);
	}
}

int main(void)
{
	sc_ipc_t ipc;

	ipc = BOARD_InitRpc();

	BOARD_InitPins(ipc);
	BOARD_BootClockRUN();
	BOARD_InitMemory();
	//BOARD_InitDebugConsole();
	
	if (sc_pm_set_resource_power_mode(ipc, SC_R_M4_0_RGPIO, SC_PM_PW_MODE_ON) != SC_ERR_NONE) {
	}

	xTaskCreate(MainTask,		//任务函数指针
				"MainTask",		//任务名称
				130,			//堆载深度
				NULL,			//任务参数
				1,				//任务优先级
				NULL);			//任务句柄

	vTaskStartScheduler();

	while (1);

}
#include "BSP.h"
//#include ""

#define BOARD_LED_RGPIO 		CM4_0__RGPIO
#define BOARD_LED_RGPIO_PIN 	0U

void delay(void)
{
    volatile uint32_t i = 0;
    for (i = 0; i < 264000000 / 50; ++i)
    {
        __asm("NOP"); /* delay */
    }
}

int main(void) 
{
	rgpio_pin_config_t led_config = {kRGPIO_DigitalOutput, 0};

	sc_ipc_t ipc;

	ipc = BOARD_InitRpc();

	BOARD_InitPins(ipc);
    BOARD_BootClockRUN();
    BOARD_InitMemory();
    //BOARD_InitDebugConsole();
	
    if (sc_pm_set_resource_power_mode(ipc, SC_R_M4_0_RGPIO, SC_PM_PW_MODE_ON) != SC_ERR_NONE)
    {
    }

	RGPIO_PinInit(BOARD_LED_RGPIO, BOARD_LED_RGPIO_PIN, &led_config);

	while (1) {
		delay();
		RGPIO_PortToggle(BOARD_LED_RGPIO, 1u << BOARD_LED_RGPIO_PIN);
	}

}
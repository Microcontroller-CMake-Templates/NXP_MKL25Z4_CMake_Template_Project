#include <MKL25Z4.h>

#define LED_SIM_SHIFT SIM_SCGC5_PORTB_SHIFT
#define LED_GPIO FGPIOB
#define LED_PORT PORTB
#define LED_PIN 18

void gpio_output_init(void)
{
    /* Enable the clocks to PORTB (clock-gating) */
    SIM->SCGC5 |= (1 << (LED_SIM_SHIFT));
    /* Route the PORT mux to the GPIO module */
    LED_PORT->PCR[LED_PIN] |= PORT_PCR_MUX(1);
    /* Set the GPIO direction as output */
    LED_GPIO->PDDR |= (1 << LED_PIN);
}

int main(void)
{
    gpio_output_init();
    while (1)
    {
        /* Set the GPIO level to HIGH */
        LED_GPIO->PSOR |= (1 << LED_PIN);
        // Delay
        for (volatile int i = 0; i < 1000000; i++)
        {
        }

        /* Set the GPIO level to low */
        LED_GPIO->PCOR |= (1 << LED_PIN);
        // Delay
        for (volatile int i = 0; i < 1000000; i++)
        {
        }
    }
}

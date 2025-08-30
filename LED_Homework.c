#include "pico/stdlib.h"
#include "led.h"

int main()
{
    const uint8_t pins[5] = {0, 1, 2, 3, 4};

    while (true)
    {
        for (uint8_t i = 0; i < 5; i++)
        {
            led_init(pins[i]);
            led_on(pins[i]);
            sleep_ms(250);
        }


        for (uint8_t i = 5; i-- > 0; )
        {
            led_off(pins[i]);
            sleep_ms(250);
        }
    }

    

    return 0;
}

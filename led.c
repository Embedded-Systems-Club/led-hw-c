#include "led.h"

void led_init(uint8_t pin)
{
    gpio_init(pin);
    gpio_set_dir(pin, true); // true means output
}

void led_on(uint8_t pin)
{
    gpio_put(pin, 1);
}

void led_off(uint8_t pin)
{
    gpio_put(pin, 0);
}
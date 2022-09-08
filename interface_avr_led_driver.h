#ifndef INTERFACE_AVR_LED_DRIVER
#define INTERFACE_AVR_LED_DRIVER
#include "../../avr_mcal/avr_gpio_driver/interface_avr_gpio_driver.h"
#define  void_led_init(port_num,pin_num)     void_GPIO_init(port_num,pin_num,output)
#define  void_led_toggle(port_num,pin_num)   void_GPIO_toggle(port_num,pin_num)
#define  void_led_off(port_num,pin_num)      void_GPIO_write(port_num,pin_num,low)
#define  void_led_on(port_num,pin_num)       void_GPIO_write(port_num,pin_num,high)
#endif
#include <zephyr/kernel.h>
#include <LED.h>

int main(void){
  LED_init();

  while(1){
    LED_toggle(LED0);
    k_msleep(200);
    LED_set(LED0, LED_OFF);

    LED_toggle(LED1);
    k_msleep(200);
    LED_set(LED1, LED_OFF);

    LED_toggle(LED2);
    k_msleep(200);
    LED_set(LED2, LED_OFF);

    LED_toggle(LED3);
    k_msleep(200);
    LED_set(LED3, LED_OFF);

  }
  return 0;
}


#include "mbed.h"
 
DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalIn userButton(USER_BUTTON);

Thread thread;
 
void led_thread() {
    while(true) {
     if (userButton) {  // button is pressed
         printf("%s\n", userButton);
         led1 = 0;       // toogle LED
      } else {          // button isn't pressed
         printf("%s\n", userButton);
         led1 = 1;       // toogle LED
      }
    }
}
 
int main() {

    thread.start(led_thread);

    while(true) {
         led2 = !led2;       // toogle LED
         wait(0.5);
    }
}

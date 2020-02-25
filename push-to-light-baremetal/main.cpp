#include "mbed.h"
 
DigitalIn userButton(USER_BUTTON);
DigitalOut led(LED1);
 
main() {
 while (true) {  
  if (userButton) {  // button is pressed
      led = 0;       // toogle LED
   } else {          // button isn't pressed
      led = 1;       // toogle LED
   }
 }
}


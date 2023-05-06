#include "mbed.h"
#include "MMA7660.h"

MMA7660 MMA(p28, p27);

PwmOut Red(p23);//PWM out for RGB Red 
PwmOut Green(p24);//PWM out for RGB Green
PwmOut Blue(p25);//PWM out for RGB Blue 

int main() { 

    	while (1){
            float x = MMA.x();

            Red.write(abs(x));

  }
}
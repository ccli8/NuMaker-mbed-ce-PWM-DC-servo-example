// NuMaker-PFM-NUC472 : PWM1 output to drive DC servo motor
#include "mbed.h"

PwmOut pwm1(PF_10); // PWM1 pinname

int main() {
    
    int i=0;
    printf("...DCserv Start...\n\r");
    pwm1.period_us(20000);      // set PWM period to 20ms (50Hz)
        
    for (i=500; i<=2500; i=i+200) { // from 0.5ms to 2.5ms
        pwm1.pulsewidth_us(i);      // set PWM pulse width to rotate motor
        Thread::wait(1000);         // delay
        printf("DCservo pulse width = %d\n\r", i);
    } 
    printf("...DCserv End.....\n\r");                             
}

// NuMaker-PFM-NUC472 : PWM1 output to drive DC servo motor
#include "mbed.h"

/* NOTE: Most targets has UNO D3 for PWM. Check it for supporting new targets */
PwmOut pwm1(D3);

int main() {
    
    int i=0;
    printf("...DCserv Start...\n\r");
#ifdef MBED_MAJOR_VERSION
    printf("Mbed OS version %d.%d.%d\r\n\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);
#endif
    pwm1.period_us(20000);      // set PWM period to 20ms (50Hz)
        
    for (i=500; i<=2500; i=i+200) { // from 0.5ms to 2.5ms
        pwm1.pulsewidth_us(i);      // set PWM pulse width to rotate motor
#if MBED_MAJOR_VERSION >= 6
        ThisThread::sleep_for(1000);
#else
        Thread::wait(1000);         // delay
#endif
        printf("DCservo pulse width = %d\n\r", i);
    } 
    printf("...DCserv End.....\n\r");                             
}

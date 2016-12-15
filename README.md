# Getting started PWM1 with DC servo motor on mbed OS


### Import NuMaker-mbed-PWM1_DCservo from on-line IDE
1. Please choose Nuvoton NuMaker-PFM-XXX as your target platform.
2. Please press the left-up icon "New", then choose "NuMaker PWM1 drive + 5V DC servo motor" from the template list.
3. Your NuMaker-mbed-PWM1_DCservo program is existed.

#### Now compile
Please press compile icon.

#### Burn Code & Execute
1. Connect the board NuMaker-PFM-XXX with your PC by USB cable, then there will be one "mbed" disk.
2. Copy the built binary file into "mbed" disk on you PC.
3. Press device's reset button to execute, and you could get the below log by uart console.
-------------------------------------------------------------------------------
...DCserv Start...
DCservo pulse width = 500
DCservo pulse width = 700

		:
		:
...DCserv End.....
--------------------------------------------------------------------------
   PWM1 outputs to drive DC servo motor		
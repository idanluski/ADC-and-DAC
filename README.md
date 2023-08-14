# ADC-and-DAC - on MSP430 Gxx2
**hardware arrange**
It is required to connect the buttons 0PB 1,PB to the controller legs 1.0P 1.1,P respectively.
An analog input is required to be connected to the controller foot 1.3P (input 3A) - input of a cyclic signal (triangular, square signal,
sine, etc.) from the signal generator within the voltage range Vcc-v0 and at a frequency of up to 1 khz
It is required to connect the LCD screen to the 2P port for 0D7-D and the three control lines to the legs 1.5P 1.6,P 1.7,P

**remarks**
1.The Vcc voltage in the personal development kit varies between v-3.65v3.5 (unlike the lab development system v3.3=Vcc)
2. Writing the driver functions of the LCD should be located in HAL while a function for writing a string
based on them should be located in the API layer.


**system description**

**(0=idle=state)**: The controller is in/returns to sleep mode (Sleep Mode).

**By pressing the 0PB button (1=state):**
It is required to sample the input signal from the generator and dynamically identify the shape of the input signal from the generator out of three
options (pwm / triangle / sine) (and print on the LCD) in the second line). The update of the detection of the signal shape will be
Dynamically and continuously (changing the shape of the signal by the guide will update the signal detection on the LCD screen)

<img width="218" alt="image" src="https://github.com/idanluski/ADC-and-DAC/assets/129895992/48c7d281-433b-484c-91c1-5c45a079bb05">
Note: The output of the signal generator is in the Vcc-v0 voltage range and at a frequency of up to khz.

**By pressing the 1PB button (2=state):**
It is required to print the result of the calculation of the average voltage v average of the voltage signal sampled from the generator on an LCD screen
(without displaying the measurement history) as described in the figure. The measured voltage values will be accurate to 2 digits after
The point (the representation of the numbers will be in a fixed point when using format Q - the definition of the type of your choice, under consideration
suitable engineering (.

<img width="252" alt="image" src="https://github.com/idanluski/ADC-and-DAC/assets/129895992/8aacfb87-cb4e-47ea-ba78-8dc9e7cb6bba">



https://github.com/idanluski/ADC-and-DAC/assets/129895992/4999a86d-a79b-4672-bea5-497edb965bf4



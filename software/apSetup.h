/* Physical layout:

LED1 LED2 LED3 LED4

POT1 POT2
POT3 POT4

BUT1 BUT2

BI1 UNI1 DAC1
BI2 UNI2 DAC2

*/

#define LED1R 9
#define LED1G 8
#define LED2R 7
#define LED2G 6
#define LED3R 5
#define LED3G 4
#define LED4R 3
#define LED4G 2

#define POT1 A17
#define POT2 A18
#define POT3 A19
#define POT4 A20

#define BUT1 24
#define BUT2 25

#define BI1 A0
#define BI2 A1
#define UNI1 A2
#define UNI2 A3

#define DAC1 A21
#define DAC2 A22

void setupAudioPlayground() {

//easier to keep in and out the same number of bits
analogReadResolution(16);
analogWriteResolution(16);

//LEDs
pinMode(9,OUTPUT); //   red 1
pinMode(8,OUTPUT); // green 1
pinMode(7,OUTPUT); //   red 2
pinMode(6,OUTPUT); // green 2
pinMode(5,OUTPUT); //   red 3
pinMode(4,OUTPUT); // green 3
pinMode(3,OUTPUT); //   red 4
pinMode(2,OUTPUT); // green 4

//set LED PWM to high frequency to avoid audio noise issues
analogWriteFrequency(9, 20000);
analogWriteFrequency(8, 20000);
analogWriteFrequency(7, 20000);
analogWriteFrequency(6, 20000);
analogWriteFrequency(5, 20000);
analogWriteFrequency(4, 20000);
analogWriteFrequency(3, 20000);
analogWriteFrequency(2, 20000);

//Pots
pinMode(A17, INPUT);
pinMode(A18, INPUT);
pinMode(A19, INPUT);
pinMode(A20, INPUT);

//Buttons
pinMode(24, INPUT_PULLUP);
pinMode(25, INPUT_PULLUP);

//CV In
analogReference(EXTERNAL); //we are using 3.3V
pinMode(A0, INPUT); //uni as default
pinMode(A1, INPUT); //uni as default
pinMode(A2, INPUT); //bi as default
pinMode(A3, INPUT); //bi as default

//CV Out
pinMode(A21, OUTPUT); //bi
pinMode(A22, OUTPUT); //bi

}

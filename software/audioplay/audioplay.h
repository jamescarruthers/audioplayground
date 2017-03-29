#ifndef audioplay_h
#define audioplay_h

#include "Arduino.h"

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

#define UNI1 A0
#define UNI2 A1
#define BI1 A2
#define BI2 A3

#define DAC1 A21
#define DAC2 A22

class Audioplay
{
  public:
    Audioplay();
  private:
};

#endif

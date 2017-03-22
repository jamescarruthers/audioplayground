# Teensy Audio Playground
Teensy 3.5/3.6 based Eurorack development module
Designed as a playground for the wonderful Teensy audio library (https://www.pjrc.com/teensy/td_libs_Audio.html) or to roll your own DSP, or anything else you can dream of using the Teensy 3.5/3.6.

* 4 x bi-colour LEDs
* 4 x potentiometer controls
* 2 x button controls
* 4 x CV inputs
* 2 x bipolar outputs (-+5V) (22KHz low pass Sallen-Key filter)

CV inputs may be individually configured to either unipolar (0 to 5V) or bipolar (-+5V) at build time.

## Bill of materials
https://octopart.com/bom-tool/IsuuIT4J

## Basic build guide
1. Build it
2. Cut the VIN/VUSB jumper on the back of the Teensy board (see here: https://www.pjrc.com/teensy/card9b_rev1.png)
3. Power it up!

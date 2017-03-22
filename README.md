# Teensy Audio Playground
Teensy 3.5/3.6 based Eurorack development module
Designed as a playground for the wonderful Teensy audio library (https://www.pjrc.com/teensy/td_libs_Audio.html) or to roll your own DSP, or anything else you can dream of using the Teensy 3.5/3.6.

* 4 x bi-colour LEDs
* 4 x potentiometer controls
* 2 x button controls
* 4 x CV inputs
* 2 x CV/audio bipolar outputs (-+5V) (22KHz low pass Sallen-Key filter)

CV inputs may be individually configured to either unipolar (0 to 5V) or bipolar (-+5V) at build time.
CV outputs may be configured to unipolar by changing the offset and multiplier resistors

## Bill of materials
https://octopart.com/bom-tool/IsuuIT4J

## Basic build guide
1. Build it
2. Cut the VIN/VUSB jumper on the back of the Teensy board (see here: https://www.pjrc.com/teensy/card9b_rev1.png)
3. Power it up!

## Advanced build guide

### Inputs
You can change any input to unipolar or bipolar by adding or omiting a resistor as per the board. Look for the top row of resistors marked 0/3302 and 3302/0. If in doubt, for a standard build use the value to the left of the slash.

### Outputs
You can change the output offset and multiplier resistors to add more precision to a range. For example, O=50k and M=80.6k would result in a 0 to 8V output useful for envelopes. O=63.4k, M=69.8k would result in a -1.5 to 5.5V output useful for 1V/Octave. Note that you would need to use some kind of calibration in code to make these accurate enough for 1V/Octave.

### Additional memory
There is space on the board for an additional memory IC. As yet, this is untested.

## Coding guide
Nothing more is needed than the basic Arduino + Teensyduino install. There is a template included in the software folder to setup the various pins and get you going.

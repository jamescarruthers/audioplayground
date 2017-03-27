//Teensy Audio Playground Template

void setup() {

  //LEDs
  pinMode(9,OUTPUT); //   red 1
  pinMode(8,OUTPUT); // green 1
  pinMode(7,OUTPUT); //   red 2
  pinMode(6,OUTPUT); // green 2
  pinMode(5,OUTPUT); //   red 3
  pinMode(4,OUTPUT); // green 3
  pinMode(3,OUTPUT); //   red 4
  pinMode(2,OUTPUT); // green 4

  //set LED PWMs to high frequency to avoid audio noise issues
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

  //easier to keep in and out the same number of bits
  analogReadResolution(16);
  analogWriteResolution(16);

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

void loop() {
  // put your main code here, to run repeatedly:

}

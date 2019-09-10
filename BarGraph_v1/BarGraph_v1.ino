const int ledCount = 8;

int pinArray[] = {
  1, 2, 3, 4, 5, 6, 7, 8
  };

void setup(){
  //loop the pin array and set all to output:
  for (int thisLed = 0; thisLed <= ledCount; thisLed++) {
    pinMode(pinArray[thisLed], OUTPUT);
  }
}

void loop() {
  //leds on
 for (int thisLed = 0; thisLed <= ledCount; thisLed++) {
  digitalWrite(pinArray[thisLed], HIGH);
  delay(30);
}
  //leds off
 for (int thisLed = 0; thisLed <= ledCount; thisLed++) {
  digitalWrite(pinArray[thisLed], LOW);
  delay(30);
 }
    //leds on
 for (int thisLed = ledCount; thisLed >= 0; thisLed--) {
  digitalWrite(pinArray[thisLed], HIGH);
  delay(30);
  }
  //leds off
 for (int thisLed = ledCount; thisLed >= 0; thisLed--) {
  digitalWrite(pinArray[thisLed], LOW);
  delay(30);
  }
}

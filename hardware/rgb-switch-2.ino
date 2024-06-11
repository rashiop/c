int switchPins[] = {12, 10};
int ledPins[] = {13, 11, 9, 7, 5, 3};
int ledSize = 6;
int switchSize = 2;

// 6led
// 1st => odd
// 2nd => even

void setup() {
  for (int i=0; i<switchSize; i++) {
    pinMode(switchPins[i], INPUT);
  }
  for (int i=0; i<ledSize; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

}


void loop() {
  for (int i=0; i<ledSize; i++) {
    
    // odd
    if ((i+1)%2 == 1) {
      int result = digitalRead(switchPins[0]) == HIGH ? HIGH : LOW;
      digitalWrite(ledPins[i], result);
    } else {
      int result = digitalRead(switchPins[1]) == HIGH ? HIGH : LOW;
      digitalWrite(ledPins[i], result);
    }
  }
}
  

  



/*
+ Left = volt (3.3 | 5v) - need voltage
Center (s) = digital pin node
- Right = ground

Type:
- pull up = high (press = no signal)
- pull down = low (press = signal)
We can only know the type after run it
*/
int ledPins[] = {13, 10};
int switchPins[] = {12, 11};
int switchSize = 2;
int ledSize = 2;

void setup() {
  for (int i=0; i<switchSize; i++) {
    pinMode(switchPins[i], INPUT);
  }
  for (int i=0; i<ledSize; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

}

int currentSwitch = -1;
void loop() {
  // clear all
  for (int i=0; i<ledSize; i++) {
    digitalWrite(ledPins[i], LOW);
  }

  int switch1 = digitalRead(switchPins[0]);
  int switch2 = digitalRead(switchPins[1]);
  // reset currentSwitch to -1 if it's no longer on
  if (currentSwitch == ledPins[0] && switch1 == LOW) {
    currentSwitch = -1;
  } else if (currentSwitch == ledPins[1] && switch2 == LOW) {
    currentSwitch = -1;
  }

  // IF no active switch, set up the switch
  if (currentSwitch == -1 && switch1) {
    currentSwitch = ledPins[0];
  } else if (currentSwitch == -1 && switch2) {
    currentSwitch = ledPins[1];
  }
  digitalWrite(currentSwitch, HIGH);
  




}

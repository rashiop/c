// cathode    -- r, g, b
int led1Pin[] = {13, 12, 11};
int switchLed1Pin[] = { 10, 9, 8};

void setup() {
  for (int i=0; i<3; i++) {
    pinMode(switchLed1Pin[i], INPUT);
    pinMode(led1Pin[i], OUTPUT);
  }
}

void loop() {
  for (int i=0; i<3; i++) {
    if (digitalRead(switchLed1Pin[i]) == HIGH) {
      digitalWrite(led1Pin[i], HIGH);
    } else {
      digitalWrite(led1Pin[i], LOW);
    }
  }

}

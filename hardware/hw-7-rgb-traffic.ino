// cathode -- r, g
int ledPins[4][2] = {
  { 13, 12 },
  { 11, 10 },
  { 9, 8 },
  { 7, 6 }
};

void setup() {
  for (int i = 13; i >= 6; i--) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i=0; i<4; i++) {
    for (int j=0; j<4; j++) {
      if (i != j) {
        // green off, red on
        printf("off idx:%d red-pin:%d\n", j, ledPins[j][0]);
        digitalWrite(ledPins[j][1], LOW);
        digitalWrite(ledPins[j][0], HIGH);
      } else {
        // green on, red off
        printf("on idx:%d red-pin:%d\n", j, ledPins[j][0]);
        digitalWrite(ledPins[j][1], HIGH);
        digitalWrite(ledPins[j][0], LOW);
      }
    }
    delay(1000);
  }
}

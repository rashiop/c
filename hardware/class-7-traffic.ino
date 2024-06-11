
int redPin = 13, greenPin = 12, bluePin = 11;
int red1Pin = 9, green1Pin = 10, blue1Pin = 8;
void setup() {
  // traffic 1
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  // traffic 2
  pinMode(red1Pin, OUTPUT);
  pinMode(green1Pin, OUTPUT);
  pinMode(blue1Pin, OUTPUT);

  // set first light
  digitalWrite(redPin, HIGH);
}

void loop() {
  int isRed = digitalRead(redPin);
  int isRed1 = digitalRead(red1Pin);

  int currentGreen = isRed ? green1Pin : greenPin;
  int currentRed = isRed ? redPin : red1Pin;
  int nextRed = isRed ? red1Pin : redPin;
  int nextGreen = isRed ? greenPin : green1Pin;
  // 0 green 2 red - avoid crash
  digitalWrite(currentGreen, LOW);
  digitalWrite(nextRed, HIGH);
  delay(1000);
  // 1 green 1 red
  digitalWrite(currentRed, LOW);
  digitalWrite(nextGreen, HIGH);
  delay(2000);

}

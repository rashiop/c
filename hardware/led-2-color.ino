// int buttonPin = 13;
int ballPin = 13;
int laserPin = 10;
int buzzerPin = 9;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(laserPin, OUTPUT);
  pinMode(ballPin, INPUT);
}

void loop() {
  // if (digitalRead(buttonPin) == LOW) { // pull down
  //   digitalWrite(laserPin, HIGH);
  //   digitalWrite(buzzerPin, HIGH);
  // } else {
  //   digitalWrite(laserPin, LOW);
  //   digitalWrite(buzzerPin, LOW);
  // }

  if (digitalRead(ballPin) == HIGH) { // pull up
    digitalWrite(laserPin, HIGH);
  } else {
    digitalWrite(laserPin, LOW);
  }
  
}

int lbPin = 13;
int tiltPin = 12;
// r, g
int rgPin[] = {2,3};
int buzzerPin = 4;

void setup() {

  pinMode(tiltPin, INPUT);
  pinMode(lbPin, INPUT);

  pinMode(rgPin[0], OUTPUT);
  pinMode(rgPin[1], OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (digitalRead(lbPin) == HIGH) {
    digitalWrite(rgPin[1], HIGH);
    delay(500);
    digitalWrite(buzzerPin, HIGH);
    Serial.println("LB high");
  } else {
    digitalWrite(rgPin[1], LOW);
    digitalWrite(buzzerPin, LOW);
    Serial.println("LB off");
    // while(digitalRead(lbPin) == LOW);
  }

  if (digitalRead(tiltPin) == HIGH) {
    digitalWrite(rgPin[0], HIGH);
    delay(500);
    digitalWrite(buzzerPin, HIGH);
    Serial.println("tilt high");
  } else {
    digitalWrite(rgPin[0], LOW);
    digitalWrite(buzzerPin, LOW);
    Serial.println("tilt off");
  }

}

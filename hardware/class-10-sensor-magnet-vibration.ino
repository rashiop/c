// temp sensor = pull up
//  4 port
// analog
// digital
// + g

// flame sensor = pull down
//  4 port
// analog
// digital
// + g

// mini reed = magnet = pull down
// 3 port
// analog (s)
// + g

// shock sensor
// 3 port, vibration (sudden impact)
// vs tab?
// - tab on the object (touch effect)
// - shock has larger range (anti=theft - breakdown / sudden theft impact)

// touch sensor = pull down
// 4 port (+analog)
// detect touch on the black part

// IR vs avoid vs ultrasonic
// Range (short : IR & avoid; longer: ultrasonic)
// Precision (high: ultra, medium: IR, no distance measurement: avoid)
// Cost (cheapest -> high): IR -> avoid -> ultrasonic
// Size: (little: IR & avoid, bigger: ultrasonic)
// Environment: (ultra: outdoor — frequency is not light sensitive & indoor; IR & avoid: indoor — cuz more light sensitive)
// Use case: avoid (obstacle detection in robot /navigation, medication), IR (simple object detection in it’s view point, line following robot, remote control), ultrasonic: proximity detection (eg water level, parking sensor)
// Accuracy: ultrasound -> ir -> avoid



int lbPin = 13;
int tiltPin = 12;
int flamePin = 11;
int temperaturePin = 11;
// r, g
int rgPin[] = {2,3};
int buzzerPin = 4;

void setup() {

  pinMode(tiltPin, INPUT);
  pinMode(lbPin, INPUT);
  pinMode(flamePin, INPUT);
  pinMode(temperaturePin, INPUT);

  pinMode(rgPin[0], OUTPUT);
  pinMode(rgPin[1], OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  if (digitalRead(temperaturePin) == HIGH) {
    Serial.println("if");
    while(digitalRead(temperaturePin) == HIGH);
  } else {
    Serial.println("else");
    while(digitalRead(temperaturePin) == LOW);
  }

  // turn on based on sensor
  // if (digitalRead(lbPin) == HIGH) {
  //   digitalWrite(rgPin[1], HIGH);
  //   digitalWrite(buzzerPin, HIGH);
  //   Serial.println("LB high");
  //   while(digitalRead(lbPin) == HIGH);
  // } else {
  //   digitalWrite(rgPin[1], LOW);
  //   digitalWrite(buzzerPin, LOW);
  //   Serial.println("LB off");
  // }

  // if (digitalRead(tiltPin) == HIGH) {
  //   digitalWrite(rgPin[0], HIGH);
  //   digitalWrite(buzzerPin, HIGH);
  //   Serial.println("tilt high");
  //   while(digitalRead(tiltPin) == HIGH);
  // } else {
  //   digitalWrite(rgPin[0], LOW);
  //   digitalWrite(buzzerPin, LOW);
  //   Serial.println("tilt off");
  // }

}

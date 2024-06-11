// led -- 2 terminal
// anode +ve, cathode - volatile
// led1 - R,G,B

// Note:
// common cathode / anode use to minimize the pin number used by device
// - common cathode / ground (-)
//    + turn on = high 
// - common anode / supply (+) 
//    + turn on = low
// RGB we can change the color by combined the on value
// 1 color 1 port

// Wire
// use wire to protect ur machine
// type: 
// - male & female, male male
// - male = has needle
// - female = no needle

int redPin = 12, greenPin = 11, bluePin = 10;
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
  digitalWrite(redPin, HIGH); 
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(500);

  digitalWrite(redPin, LOW); 
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(500);

}

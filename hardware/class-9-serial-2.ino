// serial connections (spi)
// serial monitor (output screen / RX) & uno
// baurd reate -- bits per seconds
// std 9600
// less efficient 115200

// serial.begin = start
// serial.println (print new line)
// serial.begin value => for efficient communication
// we create agreements on bits speeds for:
// tx (transmitter) and rx (receiver)

int ldrPin = 13;

int ledPin = 2;

void setup() {
  // sensor
  pinMode(ldrPin, INPUT);
  // output
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  // Serial.begin(115200);
  // tx 115200 
  // to make the comm efficient -- speed value
  // tx rx comm agreement
}

void loop() {
  if (digitalRead(ldrPin) == LOW) {
    digitalWrite(ledPin, HIGH);
    Serial.println(digitalRead(ldrPin));
    Serial.println("led is on");
    while(digitalRead(ldrPin) == LOW);
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println(digitalRead(ldrPin));
    Serial.println("led is off");
    while(digitalRead(ldrPin) ==  HIGH);
  }

  // delay(1000);
}

int ledPin = 13;
int ldrPin = 12;
int pirPin = 11;
int led2Pin = 10;

// 1. LDR (Light dependent resistor)
// 4 pins
// vcc - supply
// gnd - ground
// d0 - digital OP
// a0 - analog OP (point)
// pull down

// 2. PIR (Passive Infrared resistor)
// +VE - 5v
// -VE - g
// DO
// motion detector
// pull down

// 3. tap module
// sensor tap, knock clap, the pegas must be moving etc = high
// -ve gnd
// s - D0
// +vE -5b
// pull down


// 4. light blocking 
// 3pin
// +ve -- connect 5v
// -ve -- gnd
// s -- out
// block electrodes by add paper between
// pull up

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(ldrPin, INPUT);
  pinMode(pirPin, INPUT);
}

void loop() {
  if (digitalRead(ldrPin) == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  if (digitalRead(pirPin) == HIGH) {
    digitalWrite(led2Pin, HIGH);
  } else {
    digitalWrite(led2Pin, LOW);
  }

}

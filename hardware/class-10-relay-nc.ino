/**
 * 
 * Relay
    Protect device from sudden high current  (spike)
    No: normally open
    Nc: normally close
    Input: 3 terminal:
      - coil pins +ve
      - common
      - coil pins -ground

    Pull down

    Magnetic flex attract magnetic strips
    - move common from NC to NO (has current)
    - common is on NC (no current)
*/
int relayPin = 7;
int ledPin = 12;

void setup() {
  pinMode(relayPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(ledPin, HIGH);
}

void loop() {
  
  digitalWrite(relayPin, HIGH);
  delay(2000);
  digitalWrite(relayPin, LOW);
  delay(2000);
}

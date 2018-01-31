const int printer = 9;
const int ledPin = 10;

void setup() {
  // initialize the serial communication:
  Serial.begin(9600);
  // initialize the ledPin as an output:
  pinMode(printer, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  char relays;
  static bool printerRelay = false;
  static bool ledRelay = false;

  // check if data has been sent from the computer:
  if (Serial.available()) {
    // read the most recent char:
    relays = Serial.read();
    switch (relays) {
      case '1':
        printerRelay = true;
        break;
      case '2':
        printerRelay = false;
        break;
      case '3':
        ledRelay = true;
        break;
      case '4':
        ledRelay = false;
        break;
    }
  }
  // my relays turn on when the pin is pulled LOW
  digitalWrite(printer, printerRelay);
  digitalWrite(ledPin, ledRelay);
}

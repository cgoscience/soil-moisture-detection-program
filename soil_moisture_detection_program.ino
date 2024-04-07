#define Moisture A0 // PIN A0
#define DO 7        // PIN 7

void setup() {
  pinMode(Moisture, INPUT); // Define A0 as the input mode
  pinMode(DO, INPUT);
  Serial.begin(9600);
}

void loop() {
  //The serial port returns the measured data
  Serial.print("Moisture=");
  Serial.print(analogRead(Moisture)); // Read the value of the AO
  Serial.print("|DO=");
  Serial.println(digitalRead(DO));    // Read the value of DO
  delay(1000);
}

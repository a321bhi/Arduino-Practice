int FSR_Pin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int FSRReading = analogRead(FSR_Pin);
  pinMode(A0, OUTPUT);
  digitalWrite(A0, HIGH);
  Serial.println("Reading is: ");
  Serial.println(FSRReading);
  delay(250);
}

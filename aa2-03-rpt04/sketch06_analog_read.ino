/*
  Blink by AA00
  Turns an LED on for one second, then off for one second, repeatedly.
*/
// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int sensorValue = analogRead(A0);
  Serial.print("AA0304,Present V(0~5.0):");
  float voltage = sensorValue*(5.0/1023.0);
  Serial.println(voltage);
  delay(500);
}

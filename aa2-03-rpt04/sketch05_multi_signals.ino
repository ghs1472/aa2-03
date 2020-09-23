/*
  Blink by AA00
  Turns an LED on for one second, then off for one second, repeatedly.
*/
int humi = 0;
int temp = 0;
int lux = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  humi = random(40,90);
  temp = random(-10,30);
  lux = random(150,250);  
  Serial.print("AA0304, Amblent lux: ");
  Serial.print(lux);
  Serial.print(" , Humidity: ");
  Serial.print(humi);
  Serial.print(" , Temperature: ");
  Serial.println(temp);
  delay(500);
}

/*
  Blink by AA00
  Turns an LED on for one second, then off for one second, repeatedly.
*/
int pwm = 0;
int led = 3;  // D3

// the setup function runs once when you press reset or power the board
void setup() {
  // 아날로그 출력에서 핀 모드 설정이 필요 없다.
}

// the loop function runs over and over again forever
void loop() {
  pwm = random(0,255);
  pwmLed(led,pwm);
}

void pwmLed(int led, int pwmValue) {
  analogWrite(led, pwmValue);
  delay(100);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //c
  tone(2, 262, 100);

  //pause
  delay(400);

  //d
  tone(2, 294, 100);

  //pause
  delay(400);

  //c
  tone(2, 262, 100);

  //pause
  delay(800);
}

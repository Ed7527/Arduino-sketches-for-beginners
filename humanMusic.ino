void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // Plays the note c
  tone(2, 262, 100);

  // pause
  delay(400);

  // Plays the note d
  tone(2, 294, 100);

  // pause
  delay(400);

  // Plays the note c
  tone(2, 262, 100);

  // pause
  delay(800);
}

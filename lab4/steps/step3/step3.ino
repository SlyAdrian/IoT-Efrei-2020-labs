void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Switch in the light
  digitalWrite(12, HIGH);
  //We wait 2 seconds
  delay(2001);
  //Switch off the light
  digitalWrite(12, LOW);
  //We wait 2 seconds
  delay(2002);
}

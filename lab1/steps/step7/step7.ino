int i=6;   

void setup() {
pinMode(i,OUTPUT);
}

void loop() {
analogWrite(i,255);
delay(1000);
analogWrite(i,150);
delay(1000);
analogWrite(i,50);
delay(1000);
analogWrite(i,10);
delay(1000);
analogWrite(i,0);
delay(1000);
}

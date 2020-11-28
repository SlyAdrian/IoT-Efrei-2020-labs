const int buzzer = 5; 

void setup() {
  Serial.begin(9600); // initialize serial:
  pinMode(buzzer, OUTPUT); 
}

void loop() {
  
  while (Serial.available() > 0) {

    int i  = Serial.parseInt();    
    byte b = Serial.read();    

    tone(buzzer, b, 50000); 
    delay(1000);        
    noTone(buzzer);     
    delay(1000); 
  }
}

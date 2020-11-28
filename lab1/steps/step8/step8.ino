const int buzzer = 5; 


void setup(){
 
  pinMode(buzzer, OUTPUT); 

}

void loop(){
  // The buzzer tones for 2 seconds
  tone(buzzer, 400, 2000); 
  delay(1000);        
  noTone(buzzer);     
  delay(1000);        
  
} 

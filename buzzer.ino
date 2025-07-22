int buzzer = 9;
void setup() {
  pinMode(buzzer,OUTPUT);
}

void loop() {
  tone(buzzer, 587, 500); 
  delay(1000);          

  tone(buzzer, 659,500); 
  delay(1000);        

  tone(buzzer, 740,500); 
  delay(1000);        

  tone(buzzer, 880,500); 
  delay(1000);        

  tone(buzzer, 986,500); 
  delay(1000);        

  tone(buzzer, 1172,500); 
  delay(1000);        
}

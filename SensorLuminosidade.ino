int portaLDR = A0; 
void setup() { 
  Serial.begin(9600); 
} 
void loop() { 
  int estado = analogRead(portaLDR); 
  Serial.print(‘+’); 
  Serial.print(3); 
  Serial.println(estado); 
  delay(3000); 
}

int porta_A0 = A0; 
int leitura_analogica = 0; 
void setup() { 
// put your setup code here, to run once: 
  pinMode(porta_A0, INPUT); 
  Serial.begin(9600); 
} 
void loop() { 
// put your main code here, to run repeatedly: 
  leitura_analogica = analogRead(porta_A0); 
  Serial.print('+'); 
  Serial.print(1); 
  Serial.println(leitura_analogica); 
  delay(3000); 
}

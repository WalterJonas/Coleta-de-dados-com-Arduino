const int LM35 = A0; // Define o pino que lerá a saída do LM35 float temperatura; // Variável que armazenará a temperatura medida 

//Função que será executada uma vez quando ligar ou resetar o Arduino 
void setup() { 
  Serial.begin(9600); // inicializa a comunicação serial 
} 
//Função que será executada continuamente 
void loop() { 
  temperatura = (float(analogRead(LM35))*5/(1023))/0.01; 
  Serial.print(‘+’); 
  Serial.print(2); 
  Serial.println(temperatura); 
  delay(3000); 
}

#include <dht.h> 
#define dht_dpin A1 //Pino DATA do Sensor ligado na porta AnalogicaA1dht DHT; //Inicializa o sensor 
void setup() 
{ 
  Serial.begin(9600); 
} 
void loop() 
{ 
  DHT.read11(dht_dpin); //Lê as informações do sensor 
  Serial.print('+'); 
  Serial.print(4); 
  Serial.println(DHT.humidity); 
  delay(3000); 
}

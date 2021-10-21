// Palestra: Introducao aos sensores com o Tinkercad
// Lazaro Camargo - INPE - SJC 
// lazaro.camargo@inpe.br

// programa para leitura do fotoresistor(LDR) com o Arduino


int sensor_temperatura = 0; 

void setup()
{
  Serial.begin(9600);  
}
 
void loop()                     
{
 
 int valor = analogRead(sensor_temperatura);  
 
 float voltagem = valor * 5.0;
 voltagem = voltagem / 1024.0; 
 
 float temperatura = (voltagem - 0.5) * 100 ;  
 Serial.println(temperatura); 
 
 delay(500);                         
}

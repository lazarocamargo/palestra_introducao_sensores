// Palestra: Introducao aos sensores com o Tinkercad
// Lazaro Camargo - INPE - SJC 
// lazaro.camargo@inpe.br

// programa para leitura do potenciometro com o Arduino

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int sensor = analogRead(A0); 
  Serial.println(sensor); 
  delay(10);
}

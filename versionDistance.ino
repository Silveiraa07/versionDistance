#include <HCSR04.h>

HCSR04 sensorDistancia(2 , 3); //Portas trig e echo

void setup() {
    Serial.begin(9600);
    
}

void loop() {
  Serial.println(sensorDistancia.dist()/100);
  delay(1000);
}

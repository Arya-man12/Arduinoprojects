#include <DHT11.h> 
DHT11 dht(4); 
void setup() 
{ 
  Serial.begin(9600); 
} 
 
void loop() 
{ 
  int humidity = dht.readHumidity(); 
  int temp = dht.readTemperature(); 
  float temp2 = 1.8 * (temp) + 32; 
  Serial.print("Humidity % = "); 
  Serial.println(humidity); 
  delay(5000); 
  Serial.print("Temperature in C : "); 
  Serial.println(temp); 
  delay(5000); 
  Serial.print("Temperature in F : "); 
  Serial.println(temp2); 
  delay(5000); 
  Serial.print("Temperature in K : "); 
  Serial.println(273 + temp); 
  delay(5000); 
  
} 
 
 

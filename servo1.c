#include <Servo.h>  
int servoPin = 3;  
Servo Servo1;  
void setup() {  
   Servo1.attach(servoPin);  
} 
void loop(){  
for(int i=0;i<=180;i+=10){ 
  Servo1.write(i); 
   
  
 delay(100);} 
}

int trig =7; 
int echo = 6; 
void setup(){ 
  pinMode (7, OUTPUT); 
  pinMode (6, INPUT); 
  Serial.begin(9600); 
} 
 
void loop (){ 
  digitalWrite(trig,LOW); 
  delayMicroseconds(2); 
  digitalWrite(trig,HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trig, LOW); 
  int echoinput = pulseIn(echo, HIGH); 
  int distance = (0.034 * echoinput)/2; 
  Serial.println(distance); 
  delay(2000); 
}
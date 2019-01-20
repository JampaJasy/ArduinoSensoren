
 
const int sensorPin = A0;
int value;
 
 
void setup(){
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}
 
void loop(){

  digitalWrite(9, HIGH);

  value = analogRead(sensorPin);
  if ( value > 700 ) {
    Serial.println("HOGER DAN 900");
    digitalWrite(9, LOW);  
  } else {
    Serial.println(value);
  }
  delay(100);
}

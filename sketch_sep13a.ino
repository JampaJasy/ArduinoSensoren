/* How to use a Force sensitive resistor to fade an LED with Arduino
   More info: http://www.ardumotive.com/how-to-use-a-force-sensitive-resistor-en.html
   Dev: Michalis Vasilakis // Date: 22/9/2015 // www.ardumotive.com  */
 
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

void setup() {
 // initialize serial communication at 9600 bits per second:
 Serial.begin(9600);
}
// the loop routine runs over and over again forever:
void loop() {

 float sensorValue = analogRead(A0);
 sensorValue=sensorValue/204,8;
 

 Serial.print("Volt Level =");
 Serial.println(sensorValue);
 delay(1);


}

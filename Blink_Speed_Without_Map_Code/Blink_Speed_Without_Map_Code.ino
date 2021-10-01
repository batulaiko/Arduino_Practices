int led=9;
int sure;
int x;
int pot=A0;
 
 
void setup() {
  pinMode(led,OUTPUT);

  Serial.begin(9600);
}
 
void loop() {
 x =analogRead(pot);
 sure=(-1800.0/1023)*x+2000; 
    digitalWrite(led,HIGH);
    delay(sure);
    digitalWrite(led,LOW);
    delay(sure);
    Serial.print("Sure =");
    Serial.println(sure); 
    Serial.println(x);


    
  }
 

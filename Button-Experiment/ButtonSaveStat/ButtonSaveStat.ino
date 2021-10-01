const int button = 8;
const int led = 9;
int buttonState;
boolean X = HIGH;
boolean Y = LOW;


void setup() {
  // put your setup code here, to run once:
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(button);
  delay(10);
  if (buttonState == HIGH && X == LOW )  //When we push the button, LED's situation doesn't change. AFter release, it will change.
  Y = !Y;
    digitalWrite(led,Y) ;
  X = buttonState;    
   


}

  
    
    
  
  
    
   
  
      

     
         

               
    
     

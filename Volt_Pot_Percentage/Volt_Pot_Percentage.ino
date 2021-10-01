#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int pot=A0;
int x;


void setup() {
  // put your setup code here, to run once:
lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
float value=analogRead(pot);
value=value*5.0/1023;
lcd.setCursor(0,0);
lcd.print(value);
lcd.print(" Volts");

lcd.setCursor(0,1);
x = 16.0/5.0*value;
for(int i = 0;i<17; i ++){
  if (i<x)
  lcd.print("*");
  else
  lcd.print(" ");}
  
  



}

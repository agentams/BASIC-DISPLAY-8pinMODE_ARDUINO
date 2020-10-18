#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,10,9,8,7,6,5,4,3);
void setup()
{
 lcd.begin(16,2); 
}
void loop()
{
  lcd.setCursor(0,0);          
  lcd.print("Sunday   ");
  lcd.setCursor(0,1);          
  lcd.print("Monday   ");
  delay(1000);
  
   lcd.setCursor(0,0);
  lcd.print("Monday   ");
  lcd.setCursor(0,1);
  lcd.print("Tuesday  ");
   delay(1000);
  
   lcd.setCursor(0,0);          
 lcd.print("Tuesday  ");
   lcd.setCursor(0,1); 
  lcd.print("Wednesday");
  delay(1000);
  
   lcd.setCursor(0,0); 
  lcd.print("Wednesday");
  lcd.setCursor(0,1);
  lcd.print("Thursday ");
  delay(1000);
  
     lcd.setCursor(0,0); 
  lcd.print("Thursday ");
   lcd.setCursor(0,1);
   lcd.print("Friday   ");
  delay(1000);
  
    lcd.setCursor(0,0);          
  lcd.print("Friday   ");
  lcd.setCursor(0,1);          
  lcd.print("Saturday ");
  delay(1000);
  

 
   lcd.setCursor(0,0);          
  lcd.print("Saturday ");
  lcd.setCursor(0,1);          
  lcd.print("Sunday   ");
  delay(1000);
  
}

  

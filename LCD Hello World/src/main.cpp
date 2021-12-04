// @author Jesse Watson December 4, 2021

// This code prints "Hello world!" to a 2x16 lcd

#include <Arduino.h>
#include <LiquidCrystal.h>

void setup()
{
  LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // initialize LCD by setting pins
  lcd.begin(16, 2); // 2 rows, 16 columns
  lcd.print("Hello world!");
  lcd.setCursor(0,1);
  lcd.print("-Jesse");
}

void loop() 
{

}
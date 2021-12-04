// author Jesse Watson 12-4-21

// This code prints Hello world! to a 2x16 lcd

#include <LiquidCrystal.h>

void setup() 
{
  LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // initialize LCD by outlining setting pins
  lcd.begin(16, 2); // 2 rows, 16 columns
  lcd.print("Hello world!");
}

void loop() 
{

}

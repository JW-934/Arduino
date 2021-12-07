// @author Jesse Watson December 7, 2021

// This code allows an RGB LED to be controlled with three buttons
// For some reason colors will occasionally stay lit instead of immediately turning back off.

#include <Arduino.h>

#define RED_PIN 9
#define GREEN_PIN 10
#define BLUE_PIN 11
#define RED_BUTTON 2
#define GREEN_BUTTON 3
#define BLUE_BUTTON 4

void setup() 
{
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);

  pinMode(RED_BUTTON, INPUT_PULLUP);
  pinMode(GREEN_BUTTON, INPUT_PULLUP);
  pinMode(BLUE_BUTTON, INPUT_PULLUP);
}

void loop() 
{
  if (digitalRead(RED_BUTTON) == LOW && digitalRead(RED_PIN) == LOW)
  {
    digitalWrite(RED_PIN, HIGH);
  }
  if (digitalRead(RED_BUTTON) == LOW && digitalRead(RED_PIN) == HIGH)
  {
    digitalWrite(RED_PIN, LOW);
  }
   if (digitalRead(GREEN_BUTTON) == LOW && digitalRead(GREEN_PIN) == LOW)
  {
    digitalWrite(GREEN_PIN, HIGH);
  }
  if (digitalRead(GREEN_BUTTON) == LOW && digitalRead(GREEN_PIN) == HIGH)
  {
    digitalWrite(GREEN_PIN, LOW);
  }
   if (digitalRead(BLUE_BUTTON) == LOW && digitalRead(BLUE_PIN) == LOW)
  {
    digitalWrite(BLUE_PIN, HIGH);
  }
  if (digitalRead(BLUE_BUTTON) == LOW && digitalRead(BLUE_PIN) == HIGH)
  {
    digitalWrite(BLUE_PIN, LOW);
  }
}
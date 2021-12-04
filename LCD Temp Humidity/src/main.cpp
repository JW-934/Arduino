// @author Jesse Watson December 4, 2021

// This code measures then prints temperature and humidity values to a 2x16 LCD

#include <Arduino.h>
#include <LiquidCrystal.h>
#include <dht_nonblocking.h>

#define SENSOR_PIN 2
#define SENSOR_TYPE DHT_TYPE_11

DHT_nonblocking dht_sensor(SENSOR_PIN, SENSOR_TYPE);

LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // initialize LCD by setting pins

void setup() 
{
  lcd.begin(16, 2); // 2 rows, 16 columns
  
  Serial.begin( 9600);
}

static bool take_measurements(float *temp, float *humidity)
{
  static unsigned long timestamp = millis();

  if (millis() - timestamp > 3000ul)  // Takes measurements every four seconds
  {
    if(dht_sensor.measure(temp, humidity) == true)
    {
      timestamp = millis();
      return true;
    }
  }
   return false;
}

void loop() 
{
  float temp, humidity;

  if(take_measurements(&temp, &humidity) == true)
  {
    // Display temp in F
    lcd.print("Temp. = ");
    lcd.print((temp * (9.0/5.0) + 32));
    lcd.print(" F");

    // Display temp in C
    //lcd.print("Temp. = ");
    //lcd.print(temp);
    //lcd.print(" C");

    lcd.setCursor(0, 1);
    lcd.print("Humid. = ");
    lcd.print(humidity);
    lcd.print("%");

    lcd.setCursor(0, 0);
  }

}
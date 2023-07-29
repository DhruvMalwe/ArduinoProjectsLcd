#include <OneWire.h>
#include <DallasTemperature.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#define ONE_WIRE_BUS 2
OneWire oneWire(ONE_WIRE_BUS); 
LiquidCrystal_I2C lcd(0x27, 16, 2); 
 
DallasTemperature sensors(&oneWire);
 
void setup(void)
{
  sensors.begin();
  Serial.begin(9600);
  lcd.begin(0,0);
  lcd.backlight();
}
void loop(void)
{ 
  sensors.requestTemperatures();   
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(sensors.getTempCByIndex(0));
  lcd.print((char)223);
  lcd.print("C ");
  lcd.print((sensors.getTempCByIndex(0) * 9.0) / 5.0 + 32.0);
  lcd.print("F");
  delay(1000);
} 

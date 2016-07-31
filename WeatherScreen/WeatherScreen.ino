//*================================================================================*
// WEATHERSCREEN
// Reads temperature & humidity data from a DHT11 weather sensor, and displays the
// information on a 16x2 LCD screen.
//
// Nick Landry
// Senior Technical Evangelist, Microsoft
// Blog: http://AgeofMobility.com
// Github: http://github.com/activenick
// Twitter: http://twitter.com/ActiveNick
//
// Based on the Weather Station project from the Arduino Project Handbook
// by Mark Geddes: http://arduinohandbook.wordpress.com
//
//*================================================================================*
#include <LiquidCrystal.h>
#include <DHT.h>

// Declarations
#define DHTPIN 8     // pin DHT is connected
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define DHTTYPE DHT11   
DHT dht(DHTPIN, DHTTYPE);

// Setup code
void setup()
{
	dht.begin();
	lcd.begin(16, 2);
}

// Program code
void loop()
{
	float h = dht.readHumidity();
	float t = dht.readTemperature();
	t = t * 9 / 5 + 32;
	if (isnan(t) || isnan(h)) {
		lcd.setCursor(0, 0);
		lcd.print("Failed to read from DHT");
		//Serial.println("Failed to read from DHT");
	}
	else {
		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print("Humidity: ");
		lcd.print(h);
		lcd.print("%");
		lcd.setCursor(0, 1);
		lcd.print("Temp: ");
		lcd.print(t);
		lcd.print("f");
		//	Serial.print("Humidity 
		//	Serial.print(h);
		//	Serial.print(" %\t");
		//	Serial.print("Temperature 
		//	Serial.print(t);
		//	Serial.println(" *C");
	}
}

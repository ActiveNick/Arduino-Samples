//*================================================================================*
// DIMMER
// A simple dimmer project that controls the brightness of an LED based on the
// input value of a potentiometer.
//
// Nick Landry
// Senior Technical Evangelist, Microsoft
// Blog: http://AgeofMobility.com
// Github: http://github.com/activenick
// Twitter: http://twitter.com/ActiveNick
//*================================================================================*

// Declarations
int potPin = 0; // Analog pin for the potentiometer input
int potValue = 0;
int led = 3; // LED pin

// Setup code
void setup()
{
	pinMode(led, OUTPUT);
}

// Program code
void loop()
{
	potValue = analogRead(potPin);
	analogWrite(led, potValue / 4);

	delay(10);
}

//*================================================================================*
// BLINK
// Blinking an LED is the equivalent of "Hello World" for Makers.
//
// Nick Landry
// Senior Technical Evangelist, Microsoft
// Blog: http://AgeofMobility.com
// Github: http://github.com/activenick
// Twitter: http://twitter.com/ActiveNick
//*================================================================================*

// Declarations
int potPin = 0;
int potValue = 0;
int led = 3;

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

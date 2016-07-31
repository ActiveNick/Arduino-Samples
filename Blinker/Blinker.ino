//*================================================================================*
// BLINK
// Blinking an LED at regular intervals.
//
// Nick Landry
// Senior Technical Evangelist, Microsoft
// Blog: http://AgeofMobility.com
// Github: http://github.com/activenick
// Twitter: http://twitter.com/ActiveNick
//*================================================================================*

// Declarations
int ledPin = 13;	// Pin 13 is convenient since it is right nerxt to the ground

// Setup code
void setup() {
	pinMode(ledPin, OUTPUT);		// Make pin 13 an output
}

// Program code
void loop() {
	digitalWrite(ledPin, HIGH);		// Turn on the LED
	delay(500);						// Wait half a second (500 ms)
	digitalWrite(ledPin, LOW);		// Turn off the LED
	delay(500);						// Wait half a second (500 ms)
}
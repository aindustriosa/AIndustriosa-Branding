#include <tinyNeoPixel.h>

volatile uint16_t numleds = 5;     // Declaring these volatile prevents the constants from being optimized.
volatile neoPixelType led_type;      // This is the easiest way to simulate not knowing what you're driving until runtime.
volatile uint8_t neopin = PIN_PA7;   // Maybe you read from EEPROM, maybe you have jumpers or switches, etc.
tinyNeoPixel leds = tinyNeoPixel();  // empty constructor...

void setup() {
  leds.updateLength(numleds);  // Set the length
  leds.updateType(led_type);   // Set the type
  leds.setPin(neopin);         // set the pin

  for (int i = 0; i < numleds; i++) {  // borde
    leds.setPixelColor(i, 255, 50, 0);
  }
  leds.show();  // LED turns on.
}

void loop() { /* empty loop */
}
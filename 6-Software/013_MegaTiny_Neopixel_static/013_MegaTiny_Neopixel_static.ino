#include <tinyNeoPixel_Static.h>
#define NUMLEDS 44
byte pixels[NUMLEDS * 3];
#define NUMLEDS6 15
byte pixels6[NUMLEDS6 * 3];
tinyNeoPixel leds = tinyNeoPixel(NUMLEDS, PIN_PA7, NEO_GRB, pixels);
tinyNeoPixel leds6 = tinyNeoPixel(NUMLEDS6, PIN_PA6, NEO_GRB, pixels6);
void setup() {
  pinMode(PIN_PA7, OUTPUT);  //pinModeFast() now exists and would shave a few more bytes off if this and any other instances of pinMode were converted to pinModeFast.
  pinMode(PIN_PA6, OUTPUT);

   for (int i = 0; i < NUMLEDS6; i++) {  // borde
    leds6.setPixelColor(i, 50, 50, 0);
  }
 leds6.show();  // LED turns on.

}
void loop() { /* empty loop */

  for (int i = 0; i < NUMLEDS; i++) {  // borde
    leds.setPixelColor(i, 50, 50, 50);
  }
 leds.setPixelColor(random(NUMLEDS), 255, 255, 255);
  leds.show();   // LED turns on.

 

  delay(100);
}
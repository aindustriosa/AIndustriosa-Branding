// PANEL 1 - A Industriosa

#include <tinyNeoPixel.h>

// #define NUMLEDS6 1 // 7  // logotipo A Industriosa
#define NUMLEDS7 27 // 4  // Bordes logos


// tinyNeoPixel leds6 = tinyNeoPixel(NUMLEDS6, PIN_PA6, NEO_GRB );
tinyNeoPixel leds7 = tinyNeoPixel(NUMLEDS7, PIN_PA7, NEO_GRB);

void setup() {

  // leds6.begin();
  leds7.begin();

  // leds6.clear();  // LED turns off.
  leds7.clear();  // LED turns off.

  delay(1000);
}
void loop() { /* empty loop */

  // leds6.begin();
  leds7.begin();

  /* for (int i = 0; i < NUMLEDS6; i++) {  // Logo Arduino
    leds6.setPixelColor(i, 150, 123, 5);
  }*/

  for (int i = 0; i < NUMLEDS7; i++) {  // borde
    leds7.setPixelColor(i, 0, 0, 250);
  }

  // leds6.show();
  leds7.show();  // LED turns on.

  delay(1000);

  // leds6.clear();
  leds7.clear();  // LED turns on.
  leds7.show();  // LED turns on.

  delay(1000);
}
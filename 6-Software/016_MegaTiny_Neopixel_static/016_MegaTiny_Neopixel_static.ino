#include <tinyNeoPixel_Static.h>
#define NUMLEDS 44
#define NUMLEDS6 58
//bool crea_clase=true;

void setup(){
  pinMode(PIN_PA7, OUTPUT);  //pinModeFast() now exists and would shave a few more bytes off if this and any other instances of pinMode were converted to pinModeFast.
  pinMode(PIN_PA6, OUTPUT);
}
void loop(){
  Externo();
  Interno();

 delay(100);
}


void Interno() {
  byte pixels6[NUMLEDS6 * 3];

  tinyNeoPixel leds6 = tinyNeoPixel(NUMLEDS6, PIN_PA6, NEO_GRB, pixels6);

   for (int i = 0; i < NUMLEDS6; i++) {  // borde
    leds6.setPixelColor(i, 50, 50, 0);
  }
for (int i=0; i <10; i++){
leds6.setPixelColor(random(NUMLEDS6), 0, 0, 255);
}
leds6.show();  // LED turns on.

}


void Externo() { 
//  if (crea_clase) {
  byte pixels[NUMLEDS * 3];
  tinyNeoPixel leds = tinyNeoPixel(NUMLEDS, PIN_PA7, NEO_GRB, pixels);
//    crea_clase=false;
//    }
  for (int i = 0; i < NUMLEDS; i++) {  // borde
    leds.setPixelColor(i, 50, 50, 50);
  }
  for (int i=0; i <10; i++){
  leds.setPixelColor(random(NUMLEDS), 255, 0, 0);
  }
  leds.show();   // LED turns on.

 

 
}
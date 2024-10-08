#include <tinyNeoPixel_Static.h>
#define NUMLEDS 44
#define NUMLEDS6 53
//bool crea_clase=true;
int ledR = 4; // LED RED
float brillo = 20;
float multiple_test = 2;
float tiempo = 0;
float tiempoExt = 0;

void setup() {
  pinMode(PIN_PA7, OUTPUT);  //pinModeFast() now exists and would shave a few more bytes off if this and any other instances of pinMode were converted to pinModeFast.
  pinMode(PIN_PA6, OUTPUT);
  pinMode(ledR, OUTPUT);  // initialize digital pin Led Red
}

void loop() {

  
 tiempoExt += 1;
  if (tiempoExt > 6) {
     Externo();
    tiempoExt = 0;
  }
 
  Interno();

  tiempo += 1;
  if (tiempo > 30) {
    tiempo = 0;
  }
  
if (tiempo <10){
digitalWrite(ledR, HIGH);   // turn the LED Red on
} else {
digitalWrite(ledR, LOW);   // turn the LED Red off
}

  delay(20);


}


void Interno() {
  byte pixels6[NUMLEDS6 * 3];
  brillo += 1;
  if (brillo > 100) {
    brillo = 20;
  }

  tinyNeoPixel leds6 = tinyNeoPixel(NUMLEDS6, PIN_PA6, NEO_GRB, pixels6);

  for (int i = 0; i < 33; i++) {  // borde
    leds6.setPixelColor(i, 0, 0, 100/multiple_test);
  }

  for (int i = 33; i < 49; i++) {  // borde
    leds6.setPixelColor(i, 50 * brillo / 100, 50 * brillo / 100, 50 * brillo / 100);
  }

  for (int i = 49; i < NUMLEDS6; i++) {  // borde
    leds6.setPixelColor(i, 0, 0, 100/multiple_test);
  }

  /*
for (int i=0; i <10; i++){
leds6.setPixelColor(random(NUMLEDS6), 80, 80, 80);
}
*/

  leds6.show();  // LED turns on.
}


void Externo() {
  //  if (crea_clase) {
  byte pixels[NUMLEDS * 3];
  tinyNeoPixel leds = tinyNeoPixel(NUMLEDS, PIN_PA7, NEO_GRB, pixels);
  //    crea_clase=false;
  //    }
  for (int i = 0; i < NUMLEDS; i++) {  // borde
    leds.setPixelColor(i, 190/multiple_test, 150/multiple_test, 90/multiple_test);
  }
  for (int i = 0; i < 4; i++) {
    leds.setPixelColor(random(NUMLEDS), 90, 90, 90);
  }
  leds.show();  // LED turns on.
}
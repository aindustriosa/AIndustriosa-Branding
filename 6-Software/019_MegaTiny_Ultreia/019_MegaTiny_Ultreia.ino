#include <tinyNeoPixel_Static.h>
#define NUMLEDS 44
#define NUMLEDS6 47
int ledR = 4;  // LED RED
float brillo = 20;
float multiple_test = 2;
float tiempo = 0;
float tiempoExt = 0;
float led_temp = 0;
float led_flash = 0;

void setup() {
  pinMode(PIN_PA7, OUTPUT);  // Led Exterior
  pinMode(PIN_PA6, OUTPUT);  // Led Interior
  pinMode(ledR, OUTPUT);     // initialize digital pin Led Red
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

  if (tiempo < 10) {
    digitalWrite(ledR, HIGH);  // turn the LED Red on
  } else {
    digitalWrite(ledR, LOW);  // turn the LED Red off
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

  for (int i = 0; i < 28; i++) {  // borde
    leds6.setPixelColor(i, 0, 0, 100 / multiple_test);
  }

  for (int i = 28; i < 31; i++) {  // borde
   leds6.setPixelColor(i, 50 * brillo / 100, 50 * brillo / 100, 50 * brillo / 100);
  
  }

 for (int i = 31; i < NUMLEDS6; i++) {  // borde
      leds6.setPixelColor(i, 50, 50, 50);
  }
  led_flash -= 1;
  if (led_flash < 0) {
    led_flash = 16;
  }


  for (int i = 0; i < 8; i++) {  // borde
    led_temp = led_flash + i;
    if (led_temp < 16) {
      leds6.setPixelColor(31 + led_temp, 0, 0, (10 - i) * 15);
    } else {
      leds6.setPixelColor(31 + led_temp - 16, 0, 0, (10 - i) * 15);
    }
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
    leds.setPixelColor(i, 190 / multiple_test, 150 / multiple_test, 90 / multiple_test);
  }
  for (int i = 0; i < 4; i++) {
    leds.setPixelColor(random(NUMLEDS), 90, 90, 90);
  }
  leds.show();  // LED turns on.
}
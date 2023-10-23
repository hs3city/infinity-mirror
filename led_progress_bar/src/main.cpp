#include <Arduino.h>

#include <Adafruit_NeoPixel.h>

#define pin D0
#define num_pixels 18

Adafruit_NeoPixel pixels(num_pixels, pin);

void setup() {
  pixels.begin();
}

void loop() {
  pixels.clear();

  for(int i=0; i<num_pixels; i++) {

    pixels.setPixelColor(i, pixels.Color(0, 150, 0));

    pixels.show();

    delay(500);
  }
}

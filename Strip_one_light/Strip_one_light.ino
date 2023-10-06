#include <Adafruit_NeoPixel.h>

#define PIN 3         // Pin number connected to the NeoPixel LED
#define NUM_PIXELS 7  // Number of pixels in the strip

Adafruit_NeoPixel strip(NUM_PIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  // Turn on the first LED (index 0) and set it to red
  strip.setPixelColor(0, strip.Color(255, 0, 0));
  strip.show();
  delay(500);  

  strip.setPixelColor(1, strip.Color(0, 255, 0));
  strip.show();
  delay(500);  

  strip.setPixelColor(2, strip.Color(0, 0, 255));
  strip.show();
  delay(500);    
}
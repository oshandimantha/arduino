#include <Adafruit_NeoPixel.h>

#define PIN 3           // Pin number connected to the NeoPixel LED
#define NUM_PIXELS 50 // Number of pixels in the strip

Adafruit_NeoPixel strip(NUM_PIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
  strip.setBrightness(50);
}  // Initialize the strip

void loop() {
  for (int i = 0; i < NUM_PIXELS; i++) {
    strip.setPixelColor(i, strip.Color(0, 255, 0));
    delay(10);
    strip.show();
  }
  for (int i = 113; i >= 0; i--) {
    strip.setPixelColor(i, strip.Color(250, 255, 0));
    delay(10);
    strip.show();
  }
}

#include <Adafruit_NeoPixel.h>

#define PIN 3          // Pin number connected to the NeoPixel LED
#define NUM_PIXELS 50  // Number of pixels in the strip

Adafruit_NeoPixel strip(NUM_PIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
  strip.setBrightness(50);
}  // Initialize the strip

void loop() {
  for (int i = 0; i < 10; i++) {
    strip.setPixelColor(i, strip.Color(255, 255, 255));
    strip.show();
    delay(10);
  }
  for (int i = 10; i < 20; i++) {
    strip.setPixelColor(i, strip.Color(250, 0, 0));
    strip.show();
    delay(10);
  }
   for (int i = 20; i < 30; i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 255));
    strip.show();
    delay(10);
  }
  for (int i = 30; i < 40; i++) {
    strip.setPixelColor(i, strip.Color(250, 255, 255));
    strip.show();
    delay(10);
  }
   for (int i = 40; i <= 50; i++) {
    strip.setPixelColor(i, strip.Color(0, 255, 255));
    strip.show();
    delay(10);
  }
 
   for (int i = 50; i >=40; i--) {
    strip.setPixelColor(i, strip.Color(0, 0, 0));
    strip.show();
    delay(10);
  }
 for (int i = 40; i >=30; i--) {
    strip.setPixelColor(i, strip.Color(0, 125, 0));
    strip.show();
    delay(10);
 }
 for (int i = 29; i >=20; i--) {
    strip.setPixelColor(i, strip.Color(115, 0, 0));
    strip.show();
    delay(10);
  }    
 for (int i = 19; i >=10; i--) {
    strip.setPixelColor(i, strip.Color(0, 0, 74));
    strip.show();
    delay(10);
    
  }      
 for (int i = 9; i >=0; i--) {
    strip.setPixelColor(i, strip.Color(115, 75, 36));
    strip.show();
    delay(10);
  }      
  }  

  

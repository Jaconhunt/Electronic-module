#define FASTLED_INTERNAL
#include <FastLED.h>

#define LEDPIN     7
#define NUMOFLEDS    5

CRGB leds[NUMOFLEDS];

void setup() {

  FastLED.addLeds<WS2812, LEDPIN, GRB>(leds, NUMOFLEDS);

}

void loop() {

  for (int i = 0; i <= 5; i++) {
    leds[i] = CRGB ( 0, 0, 255);
    FastLED.show();
    delay(40);
  }
  for (int i = 5; i >= 0; i--) {
    leds[i] = CRGB ( 255, 0, 0);
    FastLED.show();
    delay(40);
  }
}

//ѡ��Uno�ϴ��ɹ�,�������ļ�
//https://www.electronicshub.org/ws2812b-addressable-leds/


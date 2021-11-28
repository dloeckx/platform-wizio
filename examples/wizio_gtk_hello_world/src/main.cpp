#include <Arduino.h>
#include "GTK_GFX.h"

const unsigned char BMP_CLOUD_LIGHTNING [] PROGMEM = { 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x3f, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x01, 0xc0, 0xe0, 0x00, 0x03, 0x80, 0x70, 0x00,
    0x03, 0x00, 0x3f, 0x00, 0x06, 0x00, 0x3f, 0x80, 0x06, 0x00, 0x01, 0xc0, 0x06, 0x00, 0x00, 0xe0,
    0x06, 0x00, 0x00, 0x60, 0x06, 0x01, 0xf0, 0x60, 0x07, 0x03, 0xe0, 0x60, 0x03, 0x03, 0xc0, 0x60,
    0x01, 0x83, 0xc0, 0xc0, 0x01, 0xe7, 0x81, 0xc0, 0x00, 0x67, 0xf3, 0x80, 0x00, 0x07, 0xe6, 0x00,
    0x00, 0x00, 0xc0, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#define SCREEN_WIDTH   250
#define SCREEN_HEIGHT  122

GTK_GFX display(SCREEN_WIDTH, SCREEN_HEIGHT+6, 3);


void setup()
{
  display.fillScreen(GxEPD_WHITE);
  display.setCursor(0, 0);
  display.setTextColor(GxEPD_BLACK, GxEPD_WHITE);
  display.printf("Hello World!\n");
  display.drawBitmap(218, 0, BMP_CLOUD_LIGHTNING, 32, 30, GxEPD_BLACK);
  display.display();
}

void loop()
{
  display.printf("Loop: %d\n", seconds());
  display.sleep(5 * 100);
}
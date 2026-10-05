#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 
#define OLED_RESET     -1 
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    for(;;);
  }
  display.clearDisplay();
}

void loop() {
  ekspresiSenyum();
  delay(2000); 

  ekspresiSedih();
  delay(2000); 

 
  ekspresiMarah();
  delay(2000); 
}

void ekspresiSenyum() {
  display.clearDisplay();
  

  display.fillCircle(34, 25, 10, SSD1306_WHITE);
  display.fillCircle(94, 25, 10, SSD1306_WHITE);
  

  display.fillRect(54, 48, 20, 4, SSD1306_WHITE); 
  display.fillRect(52, 45, 4, 4, SSD1306_WHITE); 
  display.fillRect(72, 45, 4, 4, SSD1306_WHITE); 
  
  display.display();
}

void ekspresiSedih() {
  display.clearDisplay();
  
  display.fillCircle(34, 28, 10, SSD1306_WHITE);
  display.fillRect(24, 18, 20, 5, SSD1306_BLACK); 
  
  display.fillCircle(94, 28, 10, SSD1306_WHITE);
  display.fillRect(84, 18, 20, 5, SSD1306_BLACK); 
  
  display.fillRect(54, 45, 20, 4, SSD1306_WHITE); 
  display.fillRect(52, 48, 4, 4, SSD1306_WHITE); 
  display.fillRect(72, 48, 4, 4, SSD1306_WHITE); 
  
  display.display();
}

void ekspresiMarah() {
  display.clearDisplay();
  
  display.fillCircle(34, 28, 10, SSD1306_WHITE);
  display.fillCircle(94, 28, 10, SSD1306_WHITE);
  
  display.drawLine(20, 12, 46, 22, SSD1306_WHITE);
  display.drawLine(20, 13, 46, 23, SSD1306_WHITE);
  
  display.drawLine(108, 12, 82, 22, SSD1306_WHITE);
  display.drawLine(108, 13, 82, 23, SSD1306_WHITE); 
  
  display.fillRect(54, 48, 20, 4, SSD1306_WHITE);
  
  display.display();
}
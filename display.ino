#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

// Define hardware type and pins
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW 
#define MAX_DEVICES 4 // Change this if you have more/fewer matrices
#define CLK_PIN   13
#define DATA_PIN  11
#define CS_PIN    10

// Create display object
MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup() {
  myDisplay.begin();
  myDisplay.setIntensity(5); // Brightness 0-15
  myDisplay.displayClear();
  
  // Arguments: Text, Alignment, Speed, Pause, Effect In, Effect Out
  myDisplay.displayText("PCCOE ENTC - ATHARVA", PA_CENTER, 100, 1000, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
}

void loop() {
  if (myDisplay.displayAnimate()) {
    myDisplay.displayReset();
  }
}

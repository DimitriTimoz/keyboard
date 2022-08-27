
#include "BleKeyboard.h"
#include "config.h"
#include "keybind.h"

BleKeyboard bleKeyboard(PRODUCT_NAME, "Les déglingos ", 0);

void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE work!");
  bleKeyboard.begin();
}

void loop() {
  if(bleKeyboard.isConnected()) {
    Serial.println("Sending...");
    delay(100);
    bleKeyboard.press(K_LEFT_SHIFT); 

    bleKeyboard.press(0x64); 
    delay(100);

    bleKeyboard.releaseAll();
    delay(5000);
  }
}

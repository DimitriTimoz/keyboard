/**
 * This example turns the ESP32 into a Bluetooth LE keyboard that writes the words, presses Enter, presses a media key and then Ctrl+Alt+Delete
 */
#include "BleKeyboard.h"
#include "config.h"
#include "keybind.h"

BleKeyboard bleKeyboard("Calvier custom", "Les déglingos ", 0);

void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE work!");
  bleKeyboard.setName("keyb");
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

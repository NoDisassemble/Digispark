#include "DigiKeyboard.h"
void setup() {
  // empty
}

void loop() 
{
  // Initialise digispark
  DigiKeyboard.sendKeyStroke(0);

  // Hits windows+r
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);

  // Enters the rickroll link and presses enter
  DigiKeyboard.print("https://chaossquad.us/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // delay between payloads
  DigiKeyboard.delay(3000);

  // Hits windows+r
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);

  // opens notepad
  DigiKeyboard.print("notepad.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Always Pay Your Pirates!");

  for (;;) {/* Stops the loop */}
}

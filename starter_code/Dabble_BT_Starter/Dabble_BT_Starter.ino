/*
Visit https://ai.thestempedia.com/docs/dabble-app/getting-started-with-dabble/
for more details and use of the other buttons on the gamepad

ATTENTION: Please ensure that;
Tx of the HC-06 connects to D2 on the UNO
Rx of the HC-06 connects to D3 on the UNO
Do not change this^^^^

Finally, set your serial monitor to 250000 baud to match the setup below
*/

#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include <Dabble.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(enR, OUTPUT);
  pinMode(inAR, OUTPUT);
  pinMode(inBR, OUTPUT);
  pinMode(enL, OUTPUT);
  pinMode(inAL, OUTPUT);
  pinMode(inBL, OUTPUT);
  Serial.begin(250000);
  Dabble.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Dabble.processInput();

  if (GamePad.isUpPressed()) {
    Serial.println("Forward");
  }
  else if (GamePad.isDownPressed()) {
    Serial.println("Down");
  }
  else if (GamePad.isRightPressed()) {
    Serial.println("Right");
  }
  else if (GamePad.isLeftPressed()) {
    Serial.println("Left");
  }
  else {
    Serial.println("Stopped");
  }

}

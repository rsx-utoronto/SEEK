/*

This code combines the 



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

// connect motor controller pins to Arduino digital pins
// right motor
int enA = 9;
int in1 = 8;
int in2 = 7;
// left motor
int enB = 11;
int in3 = 12;
int in4 = 13;

// set base speed for motors
int speed = 50;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(250000);
  Dabble.begin(9600);

  // set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  Dabble.processInput();

  if (GamePad.isUpPressed()) {
    drive('F'); //forwards
  }
  else if (GamePad.isDownPressed()) {
    drive('B'); //backwards
  }
  else if (GamePad.isRightPressed()) {
    drive('R'); //right
  }
  else if (GamePad.isLeftPressed()) {
    drive('L'); //left
  }
  else {
    stop();
  }

}

void drive(char dir){
  analogWrite(enA, speed);
  analogWrite(enB, speed);
  if (dir == 'F'){
    spin(in1, in2);
    spin(in3, in4);
  }
  if (dir == 'B'){
    spin(in2, in1);
    spin(in4, in3);
  }
  if (dir == 'R'){
    spin(in2, in1);
    spin(in3, in4);
  }
  if (dir == 'L'){
    spin(in1, in2);
    spin(in4, in3);
  }
  delay(10);
}

void spin(int pin1, int pin2){
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
}

void stop(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);
  delay(10);
}


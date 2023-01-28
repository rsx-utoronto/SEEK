int outPin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(outPin, INPUT);
}

void loop() {
  int out = digitalRead(outPin);

  if (out == 1){
    Serial.println("Black surface");  
  }

  if (out == 0){
    Serial.println("White surface");
  }

  // NEXT STEPS: 
  // 1. Using the same idea as above, how would be check that two sensors are on a white surface? 
  // 2. For line following, if one sensor is on a black surface (a line), how should we maneuver?

}

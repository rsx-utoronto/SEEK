int trigPin = 13; // 'trig' pin defintion
int echoPin = 11; // 'echo' pin definition
double pingTime; // variable to hold
double DIST_SCALE = 1.085767; // **MODIFY TO YOUR OWN**
double SPEED_OF_SOUND = 331.0; // Approx. speed of sound
double convert = 1000000.0; // factor to scale pingTime

void setup() {
  Serial.begin(9600); // Start serial for serial monitor
  pinMode(trigPin, OUTPUT); // Set pin modes
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW); // Set pin to low before pulse
  delayMicroseconds(2000);
  digitalWrite(trigPin, HIGH); // Send ping
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW); // Set pin to low again

  pingTime = pulseIn(echoPin, HIGH); // Receive the echo from the pulse 
  double dist = DIST_SCALE*0.5*(SPEED_OF_SOUND*(pingTime/convert)); // Convert to distance

  Serial.println("Distance is: "); // Show distance in serial monitor
  Serial.println(dist);

  // NEXT STEPS: 
  // 1. How can this be used to avoid obstacles autonomously? 
  // 2. At what threshold should we stop? 
  // 3. What protocol do we take to avoid collision?

}

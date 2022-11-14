//Week 9 Switch and Feedback
// Yingying He
//I tried to build a monitor that would alert people by flashing rapidly when the water level is above the standard.
//The swicth is made of salted water. When the water level is above a certain level, it would connect two wires to close the circuit.

const int LEDPin = 5;

void setup() {
  pinMode(LEDPin, OUTPUT);
}


void loop() {
  digitalWrite(LEDPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(LEDPin, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
}

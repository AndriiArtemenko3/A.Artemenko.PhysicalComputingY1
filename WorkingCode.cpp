// This is a working code for my Arduino Spinning Drawing Machine Project 

// defining pins
const int motorIn3 = 9;
const int motorIn4 = 10;
const int motorENB = 5;
const int motorIn1 = 11; 
const int motorIn2 = 12;
const int motorENA = 6;

void setup() {
  // assigning input - output
  pinMode(motorIn1, OUTPUT);
  pinMode(motorIn2, OUTPUT);
  pinMode(motorENA, OUTPUT);
  pinMode(motorIn3, OUTPUT);
  pinMode(motorIn4, OUTPUT);
  pinMode(motorENB, OUTPUT);

  // Initial Position
  digitalWrite(motorIn3, LOW);
  digitalWrite(motorIn4, LOW);
  analogWrite(motorENB, 0);
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, LOW);
  digitalWrite(motorENA, 0);
}

void loop() {
  // spinning part
  digitalWrite(motorIn3, HIGH);
  digitalWrite(motorIn4, LOW);
  analogWrite(motorENB, 255); // Full speed

  digitalWrite(motorIn1, HIGH);
  digitalWrite(motorIn2, LOW);
  analogWrite(motorENA, 255);

  
}

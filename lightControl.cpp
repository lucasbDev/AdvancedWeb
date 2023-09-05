

void setup() {
  // initialize the digital pin as an output.
  pinMode(1, OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(6,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  
  
  digitalWrite(6, 1);   // turn the LED on (HIGH is the voltage level)
  delay(3000);               // wait for a second
  digitalWrite(6,0);
  digitalWrite(4,1);
  delay(3000);
  digitalWrite(4,0);
  digitalWrite(1,1);
  delay(3000);
  digitalWrite(1,0);
  
}

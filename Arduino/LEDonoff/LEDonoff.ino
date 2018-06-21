int led = 13;
int buttonPin = 2;
int buttonState = 0;         // variable for reading the pushbutton status

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(buttonPin, INPUT);
  pinMode(13, OUTPUT);    
}

// the loop routine runs over and over again forever:
void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
  else {
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    }
 }

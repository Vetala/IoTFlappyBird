// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

//int Loop = 1;

void setup() {
  Serial.begin(/*115200*/ 9600);
    // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW)
  {
    Serial.println("Jump");
  }
  delay(500);
}

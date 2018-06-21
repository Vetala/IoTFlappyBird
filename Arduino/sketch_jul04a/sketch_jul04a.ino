// constants won't change. They're used here to
// set pin numbers:
int potPin = 2;
int ledPin = 13;
int gravVal = 0;
int jumpVal = 0;
int speedVal = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  gravVal = analogRead(potPin);
  Serial.println(gravVal);
  digitalWrite(ledPin, HIGH);
  delay(gravVal);
  digitalWrite(ledPin, LOW);
  delay(gravVal);
}

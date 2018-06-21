void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available()) {
    char cmd = Serial.read();

    if (cmd == '0') {
      int potValue = analogRead(A0);
      Serial.println(potValue);
    }
  }
}

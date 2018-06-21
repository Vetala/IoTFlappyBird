//int Loop = 1;

void setup() {
  Serial.begin(/*115200*/ 9600);
}

void loop() {
    //sends a string to the port
/*Serial.println ("Data Loop = " +String(Loop));
  Loop++;
  delay (10500);
  */

  //sends a byte value to the port
  //Serial.write(1); //send a byte with the value 45
  Serial.print(1); //send a value seen as 1
  //int bytesSent = Serial.write("hello"); //send the string and return the length of the string
  delay (1000); //1000 = 1 second
}

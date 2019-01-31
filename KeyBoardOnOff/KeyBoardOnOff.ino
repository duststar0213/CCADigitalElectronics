/* This simple program is to demostrate how pc's keyboar control
    the led's on and off
*/
int inByte;//keyboard input
void setup() {
  for (int i = 9; i <= 11; i++) {
    pinMode(i, OUTPUT); // Declare the LED as an output
  }
  Serial.begin(57600);
  /*initial state for all leds*/
  digitalWrite(9, HIGH); // Turn the LED on
  delay(100);
  digitalWrite(9, LOW); // Turn the LED on
  delay(200);
  digitalWrite(10, HIGH); // Turn the LED on
  delay(100);
  digitalWrite(10, LOW); // Turn the LED on
  delay(150);
  digitalWrite(11, HIGH); // Turn the LED on
  delay(150);
  digitalWrite(11, LOW); // Turn the LED on
}

void loop() {
  /*Use keyboard to turn on LED */

  if (Serial.available() > 0) {

    inByte = Serial.read();
    Serial.println(inByte, DEC);


    if ( inByte == '1') {
      digitalWrite(10, HIGH); // Turn the LED on
      digitalWrite(9, LOW); // Turn the LED on
      digitalWrite(11, LOW); // Turn the LED on
    }
    if (inByte == '2') {
      digitalWrite(10, LOW); // Turn the LED on
      digitalWrite(11, LOW); // Turn the LED on
      digitalWrite(9, HIGH); // Turn the LED on
    }
    if (inByte == '3') {
      digitalWrite(11, HIGH); // Turn the LED on
      digitalWrite(9, LOW); // Turn the LED on
      digitalWrite(10, LOW); // Turn the LED on

    }
  }


}




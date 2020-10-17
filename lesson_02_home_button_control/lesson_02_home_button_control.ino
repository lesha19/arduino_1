void setup() {
  Serial.begin(9600);
 pinMode(10, OUTPUT);

}

void loop() {

  Serial.println(digitalRead(4));
  delay(500);

  if (digitalRead(5) == 1) (
      digitalWrite(10, HIGH));



}

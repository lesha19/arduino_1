void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);


}

void loop() {

  Serial.println(digitalRead(2));
  delay(500);

  if (digitalRead(5) == 1) {

    digitalWrite(10, HIGH);
    delay(500);
  };





}

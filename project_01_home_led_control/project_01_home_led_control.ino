void setup() {
  int i=6;
  for (int counter = 6; i < 14; ++i){
    pinMode(i, OUTPUT);
}}

void loop() {
  int i=6;
  for (int counter = 6; i < 14; i++ ){
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
    delay(100);
  }
  int i_i =13;
  for (int counter = 6; i_i > 7 ; i_i-- ){
    digitalWrite(i_i, HIGH);
    delay(100);
    digitalWrite(i_i, LOW);
    delay(100);
  }
  
  
  }

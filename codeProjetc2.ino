void setup() {
  pinMode(11, OUTPUT);
   pinMode(13, OUTPUT); 
  pinMode(12, INPUT_PULLUP);

}

void loop() {
 if (digitalRead(12)==0){
  digitalWrite(11, HIGH);
  tone(13, 132);
  delay(1000);
  tone(13, 165);
  delay(1000);
  tone(13, 175);
  delay(1000);
  digitalWrite(11, LOW);
  noTone(13);
 }
}

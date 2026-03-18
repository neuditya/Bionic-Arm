const int EMG_PIN = A0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int emgValue = analogRead(EMG_PIN);
  
  Serial.print(0); 
  Serial.print(" ");
  Serial.print(1023);
  Serial.print(" ");
  Serial.println(emgValue);
  
  delay(10);
}
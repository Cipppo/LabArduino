void setup(){
  Serial.begin(9600);
  Serial.println("Hello from Arduino in the setup ...");
}

void loop(){
  Serial.println("Hello from Arduino in the loop ...");
  delay(100);
}
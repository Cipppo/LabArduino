
#define POT_PIN 40

void setup() {
  Serial.begin(9600);
}

void loop() {
  int newValue = analogRead(POT_PIN);
  if (newValue != current){
    current = newValue;
    Serial.println(current);
  }
}

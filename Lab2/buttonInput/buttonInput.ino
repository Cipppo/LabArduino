#define BUTTON_PIN 2
#define LED_PIN 7

//Lights up a Led by pressing a Button

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

int count = 0;
bool isUp = false;

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);
  
  if(buttonState == HIGH){
    Serial.println("PRESSED");
    digitalWrite(LED_PIN, HIGH);
  }else{
    Serial.println("NOT PRESSED");
    digitalWrite(LED_PIN, LOW);
  }
}

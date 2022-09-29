#include<stdio.h>
#include<stdlib.h>

class Led{
  public:
    Led(int pin){
      this->pin = pin;
    }
    void turnOn(){
      digitalWrite(this->pin, HIGH);
    }
    
    void turnOff(){
      digitalWrite(this->pin, LOW);
    }

  private:
    int pin;
};


#define PIN_1 13
#define PIN_2 12
#define PIN_3 7

#define SIZE 3




Led leds[] = {
  Led(PIN_1), 
  Led(PIN_2),
  Led(PIN_3),
};
int current;
bool backwards = false;


void setup() {
  pinMode(PIN_1, OUTPUT);
  pinMode(PIN_2, OUTPUT);
  pinMode(PIN_3, OUTPUT);
}

void loop() {
  for(int i = 0; i<SIZE && i >= 0; i = backwards ? i - 1 : i+1){
    leds[i].turnOn();
    delay(200);
    leds[i].turnOff();
  }
  backwards = !backwards;
}

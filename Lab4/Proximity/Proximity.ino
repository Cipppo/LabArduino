#include<Arduino.h>
#include<Wire.h>  //Sensors Library

//Measures the distance of an objext by using sound

#define TRIGPIN 7
#define ECHOPIN 8

const float vs = 331.45 + 0.62*20;

void setup() {
  Serial.begin(115200);
  pinMode(TRIGPIN, OUTPUT);
  pinMode(ECHOPIN, INPUT);
}

float getDistance(){
  digitalWrite(TRIGPIN, LOW);
  delayMicroSeconds(3);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(5);
  digitalWrite(TRIGPIN, LOW);

  float tUS = pulseIn(ECHOPIN, HIGH);
  float t = TUS / 1000.0 / 1000.0 / 2;
  float d = t * vs;
  return d;

}


void loop() {
  float d = getDistance();
  Serial.println(d);
  delay(50);

}

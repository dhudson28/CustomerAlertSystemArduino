#include <NewPing.h>
#define F_TRIGGER_PIN 6
#define F_ECHO_PIN    5
#define MAX_DISTANCE  200

#define B_TRIGGER_PIN 10
#define B_ECHO_PIN    9
#define led           13
#define speaker       3
int var = 0;

NewPing sonarF(F_TRIGGER_PIN, F_ECHO_PIN);
NewPing sonarB(B_TRIGGER_PIN, B_ECHO_PIN);

unsigned long pingTimer1, pinTimer2;

void setup(){
  Serial.begin(115200);
  pinMode(led, OUTPUT);
  pinMode(speaker, OUTPUT);
}

void loop() {
  delay(50);
  unsigned int uSf = sonarF.ping();
  unsigned int uSb = sonarB.ping();
  int frontSense = sonarF.convert_in(uSf);
  int backSense = sonarB.convert_in(uSb);
  if (var == 0) {
    if (frontSense < 24){
      if (backSense > 24){
        digitalWrite(led, HIGH);
        analogWrite(speaker, 110);
        delay(200);
        analogWrite(speaker, 0); 
        delay(200);
      }
      if (backSense < 24){
        digitalWrite(led, LOW);
        var = 1;
        }
    }
  }
  if (var == 1) {
    if (backSense > 24) {
      if (frontSense > 24) {
        var = 0;
      }
    }
  }
}

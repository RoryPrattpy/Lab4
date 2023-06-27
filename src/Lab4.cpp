/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/admin/CTD_2023/Lab4/src/Lab4.ino"
void setup();
void loop();
#line 1 "/Users/admin/CTD_2023/Lab4/src/Lab4.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(D7, INPUT);
  pinMode(D5, OUTPUT);
}
void loop() {
  digitalWrite(D5, digitalRead(D7));
}
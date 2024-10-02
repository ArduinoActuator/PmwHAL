
#include "PmwHAL.h"



PMW sw(9);

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB
  }
  
  sw.begin();
}

void loop() {
  for (int i=1; i< 14; i++) {
    int level = i*20-5;
    Serial.print("level = ");Serial.println(level);
    sw.set(level);
    sw.apply();
    delay(3000);
    sw.off();
    delay(3000);
  }
}

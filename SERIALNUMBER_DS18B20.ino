#include <one_wire.h>
one_wire ds();  

void setup(void) {
  
  Serial.begin(9600);
}

void loop(void) {
  byte i;
  byte addr[8];

  Serial.print("SERIAL NUMBER IS: ");
  for( i = 0; i < 8; i++) {
    Serial.print(addr[i], HEX);
  }
  Serial.println("");
  

  if ( addr[0] == 0x28) {
      Serial.print("Device is a DS18B20 family device.\n");
  }
  else {
      Serial.print("Device family is not DS18B20.");
      Serial.println(addr[0],HEX);
      return;
  }     
  delay(1000);     

}
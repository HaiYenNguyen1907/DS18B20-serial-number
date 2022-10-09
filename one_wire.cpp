#include "one_wire.h"
#include <Arduino.h>
const byte pin=2;
one_wire::one_wire(){
	pinMode(pin, INPUT);
}
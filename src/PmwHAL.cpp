#include "PmwHAL.h"


PMW::PMW(uint8_t pin):
  _pin(pin)
{}

void PMW::begin(void) {
  _level = 0;
  off();
}

void PMW::apply(void) {
  analogWrite(_pin, _level);
}

void PMW::off(void) {
  analogWrite(_pin, 0);
}

void PMW::set(uint8_t level) {
  _level = level;
}

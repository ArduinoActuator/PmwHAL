
#ifndef __PMW_HAL_H__


#include <stdint.h>
#include <Arduino.h>



enum PmwFunctionReturnValue {
  FUNCTION_UNSUPPORTED = 1,
  FUNCTION_SUCCESS,
  FUNCTION_FAIL
};

class PMW {
public:
  PMW(uint8_t pin);
  void begin(void);
  void apply(void);
  void off(void);
  void set(uint8_t level);
protected:
  uint8_t _pin;
  uint8_t _level;
};

#endif /* __PMW_HAL_H__ */

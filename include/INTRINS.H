#include <mcs51/compiler.h>
#define _nop_ NOP

unsigned char _crol_(unsigned char val, unsigned char n) {
  return (val << n) | (val >> (8 - n));
}

unsigned char _cror_(unsigned char val, unsigned char n) {
  return (val >> n) | (val << (8 - n));
}

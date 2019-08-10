#include "cosim.h"

#include <cassert>

#define IMG_SIZE 100

int main() {

  char a[IMG_SIZE];
  int b[256];
  for (int i = 0; i < IMG_SIZE; i++) {
    a[i] = 10;
  }

  for (int i = 0; i < 256; i++) {
    b[i] = 0;
  }
  
  cosim(a, b);

  assert(b[10] == IMG_SIZE);

  return 0;
}

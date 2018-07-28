#include <stdlib.h>
#include <stdio.h>

void rightrot(int x, int n) {
  unsigned int mask = 0;
  for (int i = 0; i < n; i++) {
    int bit = x & 1;
    mask = 0;
    mask = (~mask >> 1);
    if (bit == 1) {
      x |= ~mask;
    } else {
      x &= mask;
    }
  }
}

int main() {
  
  exit(0);
}

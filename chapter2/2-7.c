#include <stdlib.h>
#include <stdio.h>

void invert(int x, int p, int n) {
  unsigned int i = 1;
  x = x ^ ((i >> (p - n + 1)) << (p - n + 1));
}

int main() {
  
  exit(0);
}

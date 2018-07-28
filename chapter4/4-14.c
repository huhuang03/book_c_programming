#include <stdlib.h>
#include <stdio.h>

#define swap(t, x, y) {t _z = x; x = y; y = _z;}

int main() {
  int x = 3;
  int y = 7;
  swap(int, x, y);

  printf("%d\n", x);
  
  exit(0);
}

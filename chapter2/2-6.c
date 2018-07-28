#include <stdlib.h>
#include <stdio.h>

/**
 * assuse all the param are validate
 */
void setbit(int x, int p, int n, int y) {
  x = x & ~((~(((~1 >> p)) << n)) << (p - n + 1));
  // or followed two step
  unsigned int i = 1;
  x = x & ((i >> (p - n + 1)) << (p - n + 1));

  i = 1;
  i = ~(i << n);
  y = y & i;
  x = x & (y < (p - (n - 1)));
}

int main() {
  
  exit(0);
}

#include <stdlib.h>
#include <stdio.h>

int main() {
  int i;
  int c;
  int limit = 88;
  int s[100];
  for (i = 0; i < limit - 1; ++i) {
    if ((c = getchar()) != '\n') {
      s[i] = c;
    }
  }
  exit(0);
}

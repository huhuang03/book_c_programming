#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
  bool preIsSpec = false;
  int c;


  while ((c = getchar()) != EOF) {
    if (c == ' ')  {
      if (preIsSpec) {
        // do nothing
        continue;
      }
      preIsSpec = true;
    } else {
      preIsSpec = false;
    }
    putchar(c);
  }
  exit(0);
}

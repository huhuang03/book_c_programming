#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  char *name = argv[0];
  // judge name and call tolower or toupper
  exit(0);
}

void trans(int (*fn)(char)) {
  int c;
  while ((c = getchar()) != EOF) {
    putchar(fn(c));
  }
}

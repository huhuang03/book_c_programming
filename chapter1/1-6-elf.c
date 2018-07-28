#include <stdlib.h>
#include <stdio.h>

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    putchar(c);
    printf("(%d)", c != EOF);
  }
  printf("%d", EOF);
  exit(0);
}

#include <stdlib.h>
#include <stdio.h>

int main() {
  int numSpace = 0, numTab = 0, numNL = 0;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      numSpace++;
    } else if (c == '\t') {
      numTab++;
    } else if (c == '\n') {
      numNL++;
    }
  }
  exit(0);
}

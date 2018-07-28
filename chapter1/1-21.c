#include <stdlib.h>
#include <stdio.h>

int main() {
  exit(0);
}

void entab(int tabPos) {
  int curPos = 0;
  int c;
  int numSpc = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      curPos = 0;
      putchar('\n');
    } else {
      if ((curPos % tabPos) == 0) {
        if (numSpc < 2) {
          for (int i = 0; i < numSpc; i++) {
            putchar(' ');
            numSpc = 0;
          }
        }
      }
      if (c == ' ') {
        numSpc++;
      } else {
        numSpc = 0;
        putchar(c);
      }
      curPos++;
    }
  }
}

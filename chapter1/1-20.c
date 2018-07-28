#include <stdlib.h>
#include <stdio.h>

void detab(int tabPos)
{
  int n;
  int curPos = 0;
  int numSpec;
  while ((n = getchar()) != EOF) {
    if (n == '\n') {
      curPos = 0;
      putchar('\n');
    } else if (n == '\t') {
      numSpec = curPos % tabPos;
      if (numSpec == 0) {
        numSpec = tabPos;
      }
      for (int i = 0; i < numSpec; i++) {
        putchar(' ');
        curPos++;
      }
    } else {
      putchar((char)n);
      curPos++;
    }
  }
}

int main() {
  detab(4);
  exit(0);
}

#include <stdio.h>

int getch();

int getop(char s[]) {
  static int lastc = 0;
  int c;
  if (lastc == 0) {
    c = getch();
  } else {
    c = lastc;
    lastc = 0;
  }

  // balabala
  if (c != EOF) {
    lastc = c;
  }
  return -1;
}

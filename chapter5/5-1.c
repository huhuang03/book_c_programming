#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main() {
  
  exit(0);
}

int getint(int *pn)
{
  int getch();
  void ungetch(int c);
  int c, d, sign;
  c = getch();

  if (c == '+' || c == '-') {
    d = c;
    if (!isdigit(c = getch())) {
      if (c != EOF) {
        ungetch(c);
      }
      ungetch(d);
      return d;
    }
  }
  // balabala
  return c;
}

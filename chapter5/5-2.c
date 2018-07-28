#include <stdio.h>

#define NUMBER '1'

int getfloat(float *f)
{
  double rst = 0;
  int ch;
  int getch();
  double pow = 1;
  while ((ch = getch()) != EOF) {
    rst = rst * 10 + (ch - '0');
  }
  if (ch == EOF) {
    return EOF;
  }

  if (ch == '.') {
    pow *= 10;
    rst = rst * 10 + (ch - '0');
  }
  *f = rst;
  return NUMBER;
}

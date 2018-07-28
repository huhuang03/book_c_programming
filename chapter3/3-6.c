#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define abs(x) ((x) < 0? -(x): (x))

int main() {
  
  exit(0);
}

void itoa(int n, char s[], int width)
{
  memset(s, width, '0');
  void reverse(char s[]);
  int i, sign;
  sign = n;
  i = 0;
  do {
    s[i++] = abs(n % 10) + '0';
  } while ((n / 10) > 0);
  if (sign < 0) {
    s[i++] = '-';
  }
  if (i < width - 1) {
    i = width - 1;
  }
  s[i] = '\0';
  reverse(s);
}

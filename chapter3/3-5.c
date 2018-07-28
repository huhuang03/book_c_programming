// because -(-max) = -max
#include <stdlib.h>
#include <stdio.h>

#define abs(x) ((x) < 0? -(x): (x))

int main() {
  
  exit(0);
}

void itoa(int n, char s[], int b)
{
  void reverse(char s[]);
  int i, sign;
  sign = n;
  i = 0;
  do {
    s[i++] = abs(n % b) + '0';
  } while ((n / b) > 0);
  if (sign < 0) {
    s[i++] = '-';
  }
  s[i] = '\0';
  reverse(s);
}

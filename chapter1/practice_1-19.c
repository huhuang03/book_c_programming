#include <stdlib.h>
#include <stdio.h>

static getLen(char s[]) {
  int rst;
  for (rst = 0; s[rst] != '\0'; rst++) {
  }
  return rst;
}

/**
 * reverse char array in place
 */
void reverse(char s[]) {
  int len = getLen(s);
  for (int i = 0; i < (len - 1) / 2; i++) {
    char tmp = s[i];
    s[i] = s[len - 1 - i];
    s[len - 1 -i] = tmp;
  }
}

int main() {
  char s[] = "Hello world!!";
  reverse(s);
  printf("%s", s);
  exit(0);
}

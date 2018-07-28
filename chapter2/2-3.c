#include <stdlib.h>
#include <stdio.h>

int main() {
  int c;
  int pos = 0;
  int rst;
  while ((c = getchar()) != EOF) {
    if (pos < 2) {
      pos++;
      continue;
    }
    if (c >= 'a' && c <= 'f') {
      c = c - 'a' + 10;
    } else if (c >= 'A' && c <= 'F') {
      c = c - 'A' + 10;
    } else if (c >= '0' && c <= '9') {
      c = c - '0';
    } else {
      break;
    }
    rst = rst * 10 + c;
  }
  exit(0);
}

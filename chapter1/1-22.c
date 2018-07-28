#include <stdlib.h>
#include <stdio.h>

int main() {
  
  exit(0);
}


void swapline(int len) {
  char buffer[len];
  int bufferPos = 0;
  int index = 0;
  int c;
  while ((c = getchar()) != EOF) {
    if (bufferPos < len) {
      buffer[bufferPos++] = c;
    } else {
      int lastSpec;
      for (lastSpec = len -1; lastSpec > 0; lastSpec--) {
        if (buffer[lastSpec] == '\n' || buffer[lastSpec] == ' ')  {
          break;
        }
      }
      if (lastSpec < 0) {
        lastSpec = len - 1;
      }
      for (int i = 0; i < lastSpec; i++) {
        putchar(buffer[i]);
      }
      if (buffer[lastSpec] == ' ') {
        putchar(lastSpec);
      }
      putchar('\n');

      int remain = len - 1 - lastSpec;
      bufferPos = 0;
      for (int i = 0; i < remain; i++) {
        buffer[bufferPos++] = buffer[lastSpec + (i++)];
      }
    }
  }
}

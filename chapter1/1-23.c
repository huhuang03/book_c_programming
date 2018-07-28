#include <stdlib.h>
#include <stdio.h>

int main() {
  
  exit(0);
}

/**
 * remove all
 */
void removeAllComment() {
  int inMultiLineComment = 0;
  int inSingleLineComment = 0;
  int c;
  int preChar = -1;
  while ((c = getchar()) != EOF) {
    if (inMultiLineComment) {
      if (preChar == '*' && c == '/') {
        inMultiLineComment = 0;
      }
    } else if (inSingleLineComment) {
      if (c == '\n') {
        inSingleLineComment = 0;
      }
    }

    if (!inSingleLineComment && !inMultiLineComment) {
      if (preChar == '/' && c == '/') {
        inSingleLineComment = 1;
      }
      if (preChar == '/' && c == '*') {
        inMultiLineComment = 1;
      }
    }

    if (!inMultiLineComment && !inSingleLineComment) {
      if (preChar != -1) {
        putchar(preChar);
      }
    }
    preChar = c;
  }
  if (!inMultiLineComment && !inSingleLineComment) {
    putchar(c);
  }
}

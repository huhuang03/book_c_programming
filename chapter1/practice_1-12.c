#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


/**
 * 以每行一个单词的形式打印输入
 * 空行的处理是不打印
 */
int main() {
  int findingFirstWord = true;
  int inFirstWord = false;

  int c;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      findingFirstWord = true;
    }

    if (c != '\n' && c != '\t' && c != ' ') {
      if (findingFirstWord) {
        findingFirstWord = false;
        inFirstWord = true;
      } 

      if (inFirstWord) {
        putchar(c);
      }
    } else {
      inFirstWord = false;
    }
  }
  exit(0);
}

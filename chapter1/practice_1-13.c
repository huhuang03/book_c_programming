#include <stdlib.h>
#include <stdio.h>
#include <vector.h>

#define IN 1
#define OUT 0

void heng();
void shu();

int main() {
  /* heng(); */
  shu();
  exit(0);
}

void heng() {
  int state, c, len = 0;
  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\n' && c != '\t') {
      if (state == IN) {
        len++;
      } else {
        state = IN;
        len = 1;
      }
    } else {
      if (state == IN) {
        for (int i = 0; i < len; i++) {
          putchar('*');
        }
        putchar('\n');
      }
      state = OUT;
      len = 0;
    }
  }
}

void shu() {
  int state, c, len = 0;
  int maxLen = 0;
  state = OUT;
  vector v;
  vectorNew(&v);

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\n' && c != '\t') {
      if (state == IN) {
        len++;
      } else {
        state = IN;
        len = 1;
      }
    } else {
      if (state == IN) {
        vectorPushBack(&v, len);
      }
      state = OUT;
      len = 0;
    }
  }


  for (int i = 0; i < vectorLen(&v); i++) {
    int tmpLen = vectorNth(&v, i);
    if (maxLen < tmpLen) {
      maxLen = tmpLen;
    }
  }


  for (int i = 0; i < maxLen; i++) {
    for (int j = 0; j < vectorLen(&v); j++) {
        int tmpLen = vectorNth(&v, j);
        if ((tmpLen + i) >= maxLen) {
          putchar('*');
        } else {
          putchar(' ');
        }
        putchar(' ');
    }
    putchar('\n');
  }
}

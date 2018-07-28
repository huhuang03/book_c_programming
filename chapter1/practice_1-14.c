#include <stdlib.h>
#include <stdio.h>

int main() {
  int numLetter = 'z' - 'a';
  int c;
  int statistics[numLetter * 2];
  for (int i = 0; i < numLetter * 2; i++) {
    statistics[i] = 0;
  }
  
  while ((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z') {
      statistics[numLetter + (c - 'a')] += 1;
    } else if (c >= 'A' && c <= 'Z') {
      statistics[c - 'A'] += 1;
    }
  }

  for (int i = 0; i < numLetter * 2; i++) {
    if (statistics[i] > 0) {
      if (i <= numLetter - 1) {
        printf("%c: ", 'A' + i);
      } else {
        printf("%c: ", 'a' + (i - numLetter));
      }

      /* printf("%d", statistics[i]); */
      for (int j = 0; j < statistics[i]; j++) {
        printf("* ");
      }
      putchar('\n');
    }
  }
  exit(0);
}

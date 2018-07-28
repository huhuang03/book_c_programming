#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void expand(char s1[], char s2[]);

int main() {
  char *s1 = "a-z-b";
  char s2[1000];
  memset(s2, '\0', sizeof(s2));
  expand(s1, s2);
  printf("%s", s2);
  exit(0);
}

/**
 * assume s2 is long enough to hold s1 expand
 */
void expand(char s1[], char s2[])
{
  int first, second, c;
  first = second = -1;
  int i, j;
  i = j = 0;
  while ((c = s1[i]) != '\0') {
    if (first == -1 || second == -1) {
      first = second;
      second = c;
    } else {
      if (second == '-' && first != '-' && c != '-' && c > first) {
        for (int k = first; k <= c; k++) {
          s2[j++] = k;
        }
        first = -1;
        second = -1;
      } else {
        s2[j++] = first;
        first = second;
        second = c;
      }
    }
    i++;
  }
  if (first != -1) {
    s2[j++] = first;
    if (second != -1) {
      s2[j++] = second;
    }
  }
}

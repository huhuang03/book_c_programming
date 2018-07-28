#include <stdlib.h>
#include <stdio.h>

int any(char s1[], char s2[]) {
  int i, j;
  i = j = 0;
  for (i = 0; s1[i] != '\0'; i++) {
    for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++) {
      if (s2[j] == '\0') {
        return i;
      }
    }
  }
  return -1;
}

int main() {
  
  exit(0);
}

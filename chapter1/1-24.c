#include <stdlib.h>
#include <stdio.h>

int main() {
  
  exit(0);
}

int numParen = 0;
int numSquare = 0;
int numCurly = 0;

/**
 * just checkout paren
 */
void check() {
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '(') {
      numParen += 1;
    } else if (c == ')') {
      numParen -= 1;
    }
    // just the same
  }
  // checkout equals zero
}

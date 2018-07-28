#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  void handlechar(char *);
  while (--argc > 0) {
    handlechar(*++argv);
  }
}

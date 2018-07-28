#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  
  exit(0);
}

int isTab(char c, int argc, char *argv[]) {
  if (argc == 1) {
    return c == '\t';
  } else {
    while (--argc > 0) {
      if ((*++argv)[0] == c) {
        return 1;
      }
    }
    return 0;
  }
}

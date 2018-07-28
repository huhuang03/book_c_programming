#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // ignore param check and err check
  char *fn1 = argv[1];
  char *fn2 = argv[2];

  FILE *f1 = fopen(fn1, "r");
  FILE *f2 = fopen(fn2, "r");

  int limit = 1000;

  int diffLineNum = 0;
  while (strcmp(fgets(fn1, limit, f1), fgets(fn2, limit, f2)) == 0)  {
    diffLineNum += 1;
  }

  exit(0);
}

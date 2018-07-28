#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>

#define MAXLINE 1000

int main(int argc, char *argv[]) {
  char pattern[MAXLINE];
  int c, except = 0, number = 0;
  FILE *fp;
  void fpat(FILE *fp, char *fname, char *pattern, int except, int number);
  if (argc > 0) {
    fp = fopen(argv[1], "r");
  } else {
    fp = stdin;
  }
  
  exit(0);
}

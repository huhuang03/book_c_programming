#include <stdio.h>
#define MAXLEN 1000
#define MAXSTORE 5000

int readlins(char *lineptr[], char *store, int maxlines)
{
  int getline(char *);
  int len;
  char line[MAXLEN];
  char *p = store;
  char *stop = p + MAXSTORE;
  int nlines = 0;
  while ((len = getline(line)) > 0) {
    if ((p + len) < stop) {
      lineptr[nlines++] = p;
      p += len;
    }
  }
}

#include <stdlib.h>

int main() {
  exit(0);
}


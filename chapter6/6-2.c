#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;
  num = (--argc && (*++argv)[0] == '-')? atoi(argv[0] + 1) : 6;
  exit(0);
}

int compare(char *str1, char *str2, int limit) {
  while (--limit > 0 && str1 != NULL
         && str2 != NULL && *str1++ == *str2++)
    ;
  return *str1 - *str2;
}

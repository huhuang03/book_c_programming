#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define LINE_NUM 1000
char line[LINE_NUM];

int getline1(char *, int limit);

int main(int argc, char *argv[]) {
  while (getline1(line, LINE_NUM) != EOF) {
    // assume the int is enough
    int num = 0;
    char *c = &line[0];
    int isNum = 0;
    while((*c++) != '\0') {
      if (isdigit(*c)) {
        num = num * 10 + *c;
        isNum = 1;
      } else {
        if (isNum) {
          printf("%o", num);
          isNum = 0;
        }
        putchar(*c);
      }
    }
  }
  exit(0);
}

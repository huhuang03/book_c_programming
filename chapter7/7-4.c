#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
  
  exit(0);
}

void ungetch(int);
void minscanf(char *format, ...) {
  va_list ap;
  char *p = format;
  int ival;
  char c;

  va_start(ap, format);
  for (p = format; *p; p++) {
    if (*p != '%') {
      getchar();
      continue;
    }

    getchar();
    switch (*p++) {
    case 'c': {
      *(va_arg(ap, char *)) = getchar();
      break;
    }
    case 'd':
      ival = 1;
      while (isdigit(c = getchar())) {
        ival += ival * 10 + c;
      }
      *(va_arg(ap, int *)) = ival;
      ungetch(c);
    break;
      
default:
      break;
    }
  }
}

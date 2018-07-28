#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>

#define LOCALFMT 100

int main(int argc, char *argv[]) {
  
  exit(0);
}

void minprint(char *fmt, ...)
{
  va_list ap;
  char *p, *sval;
  int ival, i;
  double dval;
  char localfmt[LOCALFMT];

  va_start(ap, fmt);
  for (p = fmt; *p; p++) {
    if (*p != '%') {
      putchar(*p);
      continue;
    }
    i = 0;
    localfmt[i++] = '%';
    while (*(p + 1) &&isalpha(*(p + 1))) {
      localfmt[i++] = *++p;
    }
    localfmt[i++] = *(p + 1);
    localfmt[i] = '\0';

    switch (*++p) {
    case 'd':
      ival = va_arg(ap, int);
      printf(localfmt, ival);
      break;
    case 'f':
      dval = va_arg(ap, double);
      printf(localfmt, dval);
      break;
    case 's':
      for (sval = va_arg(ap, char *); *sval; sval++) {
        putchar(*sval);
      }
      break;
    default:
      putchar(*p);
      break;
    }
  }
  va_end(ap);
}

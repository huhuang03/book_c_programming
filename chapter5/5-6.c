#include <stdio.h>
#include <ctype.h>
#include <string.h>

int getline(char *s, int lim)
{
  int c;
  char *t = s;
  int getchar();
  while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
    *s++ = c;
  if (c == '\n')
    *s++ = c;
  *s = '\0';
  return s - t;
}

int atoi(char *s)
{
  int n, sign;
  sign = (*s == '-')? -1 : 1;
  for (n = 0; isdigit(*s); s++)
    n = 10 * n + (*s - '0');
  return sign * n;
}

void reverse(char *);

void itoa(int n, char *s)
{
  int sign;
  char *t = s;

  if ((sign = n) < 0) {
    n = -n;
  }
  do {
    *s++ = n % 10 + '0';
  } while ((n /= 10) > 0);
  if (sign < 0) {
    *s++ = '-';
  }
  *s = '\0';
  reverse(t);
}

void reverse(char *s)
{
  int c;
  char *t;
  for (t = s + (strlen(s) - 1); s < t; s++, t--) {
    c = *s;
    *s = *t;
    *t = c;
  }
}

int strindx(char *s, char *t)
{
  char *b = s;
  char *p, *r;

  for (; *s != '\0'; s++) {
    for (p = s, r = t; *r != '\0' && *p == *r; p++, r++)
      ;
    if (r > t && r == '\0')
      return s -b;
  }
  return -1;
}

#define NUMBER '0'

int getch();
void ungetch(int);
int getop(char *s)
{
  int c = getch();
  while (isdigit(*++s = c = getch()))
    ;
  if (c == '.') {
    *s++ = c;
    while (isdigit(*++s = c = getch()))
      ;
  }
  *s = '\0';
  if (c != EOF)
    ungetch(c);
  return NUMBER;
}

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define MAXOP 100
#define NUMBER '0'

int main() {
  int type;
  double op2;
  char s[MAXOP];
  int getop(char[]);

  void push(double);
  double pop();
  double variable[26];

  while ((type = getop(s)) != EOF) {
    switch(type) {
    case NUMBER:
      push(atof(s));
      break;
    case '+':
      push(pop() + pop());
      break;
    case '*':
      push(pop() * pop());
      break;
    case '-':
      op2 = pop();
      push(pop() - op2);
      break;
    case '%':
      op2 = pop();
      push((int)pop() % (int)op2);
      break;
    case 's'://sin
      push(sin(pop()));
      break;
    case 'e'://exp
      push(pow(10, pop()));
      break;
    case 'p'://pow
      op2 = pop();
      push(pow(pop(), op2));
      break;
    default:
      if (type >= 'A' && type <= 'Z') {
        push(variable[type - 'A']);
      }
    }
  }
  exit(0);
}


#define MAXVAL 100
int sp = 0;
double val[MAXVAL];

void push(double v)
{
  if (sp < MAXVAL)
    val[sp++] = v;
  else
    printf("error: stack full, can't push %g\n", v);
}

double pop() {
  if (sp <= 0) {
    printf("error: stack is empty when pop value");
  }
  return val[--sp];
}

double get() {
  return val[sp];
}

void copy() {
  push(get());
}

void exchange() {
  double p1 = pop();
  double p2 = pop();
  push(p2);
  push(p1);
}

static int buf;
static int hasBuf;

int getch(void)
{
  if (hasBuf) {
    hasBuf = 0;
    return buf;
  } else {
    return getchar();
  }
}

void ungetch(int c)
{
  if (hasBuf) {
    printf("ungetch buferr is full");
  } else {
    buf = c;
    hasBuf = 1;
  }
}

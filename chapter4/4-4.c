
#include <stdlib.h>
#include <stdio.h>

#define MAXOP 100
#define NUMBER '0'

int main() {
  int type;
  double op2;
  char s[MAXOP];
  int getop(char[]);

  void push(double);
  double pop();

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

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

#define MAXOP 100
#define NUMBER '0'
#define LINE_SIZE 1000

int getline1(char line[], int limit);


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

char line[LINE_SIZE];
int getop(char s[])
{
  int li;
  int c, i;
  i = 0;
  if (line[i] == '\0') {
    if (getline1(line, LINE_SIZE) == 0)
      return EOF;
    else
      li = 0;
  }
  c = line[0];
  if (!isdigit(c) && c != '.')
    return c;
  i = 0;
  s[i] = '\0';
  if (isdigit(c)) {
    while (isdigit(s[i++] = c = line[li++]))
      ;
  } 
  if (c == '.') {
    s[++i] = c;
    while (isdigit(s[i++] = c = line[li++]))
      ;
  }
  s[i] = '\0';
  li--;
  return NUMBER;
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

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXTOKEN 100

enum {NAME, PARENS, BRACKETS};

void dcl();
void dirdcl(void);
void parmdcl();

int gettoken(void);
int tokentype;
char token[MAXTOKEN];
char name[MAXTOKEN];
char datatype[MAXTOKEN];
char out[1000];
int prevtoken = 0;

void dcl(void)
{
  int ns;
  for (ns = 0; gettoken() == '*'; )
    ns++;
  dirdcl();
}

void dirdcl()
{
  int type;
  if (tokentype == NAME && strcmp("const", token) == 0) {
      strcat(out, "cosnt of ");
  } else if (tokentype == '('){
    dcl();
    if (tokentype != ')') {
      printf("err: missing )\n");
    }
  } else if (tokentype == NAME) {
    strcpy(name, token);
  } else {
    printf("error: excepted name or (doc) at %s \n", token);
  }
  while ((type = gettoken()) == PARENS || type == BRACKETS) {
    if (type == PARENS) {
      strcat(out, "function returning");
    } else if (type == '(') {
      strcat(out, "function excepting");
      parmdcl();
      strcat(out, " and returnning");
    } else {
      strcat(out, " array");
      strcat(out, token);
      strcat(out, " of");
    }
  }
}

int gettoken(void)
{
  int c, getch(void);
  void ungetch(int);
  char *p = token;

  while ((c = getch()) == ' ' || c == '\t')
    ;

  if (prevtoken) {
    prevtoken = 0;
    return tokentype;
  }

  if (c == '(') {
    if ((c = getch()) == ')') {
      strcpy(token, "()");
      return tokentype = PARENS;
    } else {
      ungetch(c);
      return tokentype = '(';
    }
  } else if (c == '[') {
    for (*p++ = c; (*p++ = getch())!= ']'; )
      ;
    *p = '\0';
    return tokentype = BRACKETS;
  } else if (isalpha(c)) {
    for (*p++ = c; isalpha(c = getch()); )
      *p++ = c;
    *p = '\0';
    ungetch(c);
    return tokentype = NAME;
  } else
    return tokentype = c;
}

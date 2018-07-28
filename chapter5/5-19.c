#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAXTOKEN 100

enum {NAME, PARENS, BRACKETS};

void dcl();
void dirdcl(void);

int gettoken(void);
int nexttoken();
int tokentype;
char token[MAXTOKEN];
char name[MAXTOKEN];
char datatype[MAXTOKEN];
char out[1000];
int prevtoken = 0;

int main() {
  int type;
  char temp[MAXTOKEN];

  while (gettoken() != EOF) {
    strcpy(out, token);
    while((type = gettoken()) != '\n') {
      if (type == PARENS || type == BRACKETS)
        strcpy(out, token);
      else if (type == '*') {
        if ((type = nexttoken()) == PARENS || type == BRACKETS) {
          sprintf(temp, "(*%s)", out);
        } else {
          sprintf(temp, "*%s", out);
        }
        strcpy(out, temp);
      } else if (type == NAME) {
        sprintf(temp, "%s %s", token, out);
        strcpy(out, temp);
      } else {
        printf("invalid input at %s\n", token);
      }
    }
    printf("%s\n", out);
  }
  return 0;
}

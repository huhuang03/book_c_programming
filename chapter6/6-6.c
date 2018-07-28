#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct nlist {
  struct nlist *next;
  char *name;
  char *defn;
};

#define HASHSIZE 10
static struct nlist *hashtab[HASHSIZE];
struct nlist *lookup(char *);

void undef(char *name)
{
  struct nlist *np;
  if ((np = lookup(name)) != NULL) {
    struct nlist* pre = np;
    struct nlist *cur = np;
    for (cur = np; cur != NULL; cur++) {
      if (strcmp(name, cur->name) == 0) {
        pre->next = cur->next;
        free(cur->name);
        free(cur->defn);
      }
      pre = np;
    }
  }
}

void def(char *name, char *value);

#define MAX_WORD 1000
char word[MAX_WORD];
char getword(char *, int limit);

void parseDefine() {
  while (getword(word, MAX_WORD) != EOF) {
    if (strcmp("#define", word) == 0) {
      char name[MAX_WORD];
      char value[MAX_WORD];
      getword(name, MAX_WORD);
      getword(value, MAX_WORD);
      def(name, value);
    } else if (lookup(word)) {
      char *value = lookup(word);
      // put value in right place
    }
  }
}

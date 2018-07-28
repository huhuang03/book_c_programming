#include <stdlib.h>
#include <string.h>

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

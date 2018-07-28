#include <stdlib.h>
#include <stdio.h>

#define LINE_NUM 1000
char buffer[LINE_NUM];

char ** splitLine(char *line);

char *insertTree(char*);

void printTree(char*);

int main(int argc, char *argv[]) {
  int line;
  int readline(char *);
  char *root;
  while (readline(buffer) >= 0) {
    char **words = splitLine(buffer);
    char *word;
    while ((word = *words++) != NULL) {
      root = insertTree(word);
    }
  } 
  printTree(root);
  exit(0);
}


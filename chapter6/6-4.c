#include <stdlib.h>

typedef struct _Node {
  void *node;
  struct _Node* left;
  struct _Node* right;
} Node;

void printTree(Node *root, void (*printNode)(void *)) {
  if (root == NULL) return;
  printTree(root->left, printNode);
  printNode(root->node);
  printTree(root->right, printNode);
}

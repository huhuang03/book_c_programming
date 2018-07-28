#include <stdlib.h>
int compare(char c1, char c2)
{
  return c1 == c2 || abs(c1 - c2) == abs('a' - 'A');
}

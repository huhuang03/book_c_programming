#include <stdlib.h>
void itoa(int val, char dst[])
{
  static int i;
  if (val / 10) {
    itoa(val / 10, dst);
  } else {
    i = 0;
    if (val < 0) {
      dst[i++] = '-';
    }
  }
  dst[i++] = abs(val % 10) + '0';
  dst[i] = '\0';
}

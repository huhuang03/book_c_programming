#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main() {
  printf("signed char: %d - %d\n", CHAR_MIN, CHAR_MAX);
  printf("unsigned char: 0 - %u\n", UCHAR_MAX);

  printf("signed short: %d - %d\n", SHRT_MIN, SHRT_MAX);
  printf("unsigned char: 0 - %u\n", USHRT_MAX);

  printf("signed int: %d - %d\n", INT_MIN, INT_MAX);
  printf("unsigned int: 0 - %u\n", UINT_MAX);

  printf("signed long: %ld - %ld\n", LONG_MIN, LONG_MAX);
  printf("unsigned long: 0 - %lu\n", ULONG_MAX);
  exit(0);
}

#include <stdlib.h>
#include <stdio.h>

void shellsort(int v[], int n)
{
  int gap, i, j, temp;
  for (gap = n / 2; gap > 0; gap /= 2) {
    for (i = gap; i < n; i++) {
      for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
        temp = v[j];
        v[j] = v[j + gap];
        v[j + gap] = temp;
      }
    }
  }
}

/* int randInt(in n) { */
  
/* } */

int main() {
  int k1[] = {1, 8, 4, 6, 9, 0};
  shellsort(k1, 6);
  for (int i = 0; i < 6; i++) {
    printf("%d ", k1[i]);
  }
  exit(0);
}


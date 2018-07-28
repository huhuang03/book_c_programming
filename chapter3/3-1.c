// 这个版本一定要折半到结束
int binsearch(int x, int v[], int n)
{
  int low, high, middle;
  low = 0;
  high = n;
  while (low < high) {
    middle = (low + high) / 2;
    if (x <= middle) {
      high = middle - 1;
    } else {
      low = middle + 1;
    }
  }
  if (v[high + 1] == x) {
    return high + 1;
  }
  return -1;
}

// 1(n of 0) & 0(n of 1) = 0(n of 0)
int bitcount(int x) {
  int b = 0;
  while (x != 0) {
    x &= (x - 1);
    b++;
  }
  return b;
}

int isSorted(int n, vector<int> a) {
  // Write your code here.
  int i;
  for (i = 0; i <= n / 2; i++) {
    if (a[i] > a[i + 1])
      break;
    if (a[n - i - 1] < a[n - i - 2])
      break;
  }
  return i > n / 2 ? 1 : 0;
}

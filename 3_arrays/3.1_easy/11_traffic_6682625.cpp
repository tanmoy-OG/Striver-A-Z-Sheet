int traffic(int n, int m, vector<int> vehicle) {
  // Write your code here.
  int countZeros = 0;
  int i = 0;
  int j = 0;
  int len = 0;
  while (j < n) {
    if (vehicle[j] == 0)
      countZeros++;

    while (countZeros > m) {
      if (vehicle[i] == 0)
        countZeros--;
      i++;
    }
    len = max(len, j - i + 1);
    j++;
  }
  return len;
}

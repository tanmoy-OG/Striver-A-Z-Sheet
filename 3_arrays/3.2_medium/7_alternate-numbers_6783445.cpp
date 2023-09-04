vector<int> alternateNumbers(vector<int> &a) {
  // Write your code here.
  int n = a.size(), pos = 0, neg = 1;
  vector<int> result(n, 0);
  for (int i = 0; i < n; i++) {
    if (a[i] < 0) {
      result[neg] = a[i];
      neg += 2;
    } else {
      result[pos] = a[i];
      pos += 2;
    }
  }
  return result;
}
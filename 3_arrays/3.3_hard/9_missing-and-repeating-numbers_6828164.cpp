vector<int> findMissingRepeatingNumbers(vector<int> a) {
  // Write your code here
  int n = a.size(), miss = -1, dup = -1;
  vector<int> hashArray(n + 1, 0);
  for (int i = 0; i < n; i++)
    hashArray[a[i]]++;
  for (int i = 1; i <= n; i++) {
    if (hashArray[i] == 0)
      miss = i;
    else if (hashArray[i] == 2)
      dup = i;
    if (miss != -1 && dup != -1)
      break;
  }
  return {dup, miss};
}
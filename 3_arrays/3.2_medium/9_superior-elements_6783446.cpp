vector<int> superiorElements(vector<int> &a) {
  // Write your code here.
  vector<int> result;
  int max = INT_MIN;
  for (int i = a.size() - 1; i >= 0; i--) {
    if (a[i] > max) {
      max = a[i];
      result.push_back(a[i]);
    }
  }
  sort(result.begin(), result.end());
  return result;
}
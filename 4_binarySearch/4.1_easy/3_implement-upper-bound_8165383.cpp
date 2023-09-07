int upperBound(vector<int> &arr, int x, int n) {
  // Write your code here.
  int low = 0, high = n - 1, idx = n;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] <= x)
      low = mid + 1;
    else {
      idx = mid;
      high = mid - 1;
    }
  }
  return idx;
}
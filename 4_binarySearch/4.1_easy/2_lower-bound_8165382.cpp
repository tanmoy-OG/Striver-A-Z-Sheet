int lowerBound(vector<int> arr, int n, int x) {
  // Write your code here
  int low = 0, high = n - 1, idx = n;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] >= x) {
      idx = mid;
      high = mid - 1;
    } else
      low = mid + 1;
  }
  return idx;
}

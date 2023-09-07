int searchInsert(vector<int> &arr, int m) {
  // Write your code here.
  int low = 0, high = arr.size() - 1;
  while (low <= high) {
    long long mid = (low + high) / 2;
    if (arr[mid] < m)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return low;
}
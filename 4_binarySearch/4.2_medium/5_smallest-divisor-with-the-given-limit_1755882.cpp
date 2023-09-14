long long sum(vector<int> &arr, long long mid) {
  long long sum = 0;
  for (auto it : arr)
    sum += ceil((double)it / mid);
  return sum;
}
int smallestDivisor(vector<int> &arr, int limit) {
  // Write your code here.
  int low = 1, high = *max_element(arr.begin(), arr.end());
  while (low <= high) {
    long long mid = (low + high) / 2;
    if (sum(arr, mid) <= limit)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return low;
}
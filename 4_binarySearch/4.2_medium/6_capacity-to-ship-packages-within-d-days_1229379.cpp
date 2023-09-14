int weight(vector<int> &arr, long long mid) {
  long long sum = 0;
  int cnt = 1;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] + sum > mid) {
      cnt++;
      sum = arr[i];
    } else
      sum += arr[i];
  }
  return cnt;
}
int leastWeightCapacity(vector<int> &weights, int d) {
  // Write your code here.
  int low = *max_element(weights.begin(), weights.end());
  long long high = accumulate(weights.begin(), weights.end(), 0);
  while (low <= high) {
    long long mid = (low + high) / 2;
    if (weight(weights, mid) <= d)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return low;
}
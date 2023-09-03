long long maxSubarraySum(vector<int> arr, int n) {
  // Write your code here.
  long long sum = 0, max = arr[0];
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    if (sum > max)
      max = sum;
    else if (sum < 0)
      sum = 0;
  }
  if (max < 0)
    return 0;
  return max;
}
#include <bits/stdc++.h>
int getLongestSubarray(vector<int> &nums, long long k) {
  // Write your code here
  long long sum = 0;
  int n = nums.size();
  int left = 0, right = 0;
  int length, maxLength = INT_MIN;
  while (right < n) {
    sum += nums[right];
    if (sum < k)
      right++;
    else if (sum == k) {
      length = right - left + 1;
      if (length > maxLength)
        maxLength = length;
      right++;
    } else if (sum > k) {
      sum -= (nums[left] + nums[right]);
      left++;
    }
  }
  if (maxLength < 0)
    return 0;
  return maxLength;
}
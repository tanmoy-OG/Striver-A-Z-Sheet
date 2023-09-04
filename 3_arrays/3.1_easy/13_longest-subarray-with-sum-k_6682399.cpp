#include <bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
  // Write your code here
  long long sum = 0;
  int n = a.size();
  int left = 0, right = 0;
  int length, maxLength = INT_MIN;
  while (right < n) {
    sum += a[right];
    if (sum < k)
      right++;
    else if (sum == k) {
      maxLength = max(maxLength, right - left + 1);
      right++;
    } else if (sum > k) {
      sum -= (a[left] + a[right]);
      left++;
    }
  }
  return maxLength;
}
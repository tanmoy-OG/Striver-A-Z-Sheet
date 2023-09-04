#include <bits/stdc++.h>

int getLongestZeroSumSubarrayLength(vector<int> &arr) {
  // Write your code here.
  int sum = 0, max = INT_MIN;
  unordered_map<int, int> mpp;
  for (int i = 0; i < arr.size(); i++) {
    sum += arr[i];
    if (sum == 0)
      max = i + 1;
    else if (mpp.find(sum) != mpp.end()) {
      int length = i - mpp[sum];
      if (length > max)
        max = length;
    } else
      mpp[sum] = i;
  }
  if (max < 0)
    return 0;
  return max;
}
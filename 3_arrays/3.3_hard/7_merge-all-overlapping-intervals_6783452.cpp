#include <bits/stdc++.h>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr) {
  // Write your code here.
  vector<vector<int>> result;
  int n = arr.size();
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n; i++) {
    if (result.empty() || arr[i][0] > result.back()[1])
      result.push_back(arr[i]);
    else
      result.back()[1] = max(result.back()[1], arr[i][1]);
  }
  return result;
}
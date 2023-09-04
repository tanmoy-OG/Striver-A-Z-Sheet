#include <bits/stdc++.h>
int subarraysWithSumK(vector<int> a, int b) {
  // Write your code here
  int xr = 0, count = 0;
  unordered_map<int, int> mpp;
  mpp[xr]++;
  for (int i = 0; i < a.size(); i++) {
    xr = xr ^ a[i];
    int x = xr ^ b;
    count += mpp[x];
    mpp[xr]++;
  }
  return count;
}
#include <bits/stdc++.h>
int maximum(vector<int> &v) {
  int maxi = INT_MIN;
  for (int i = 0; i < v.size(); i++)
    maxi = max(maxi, v[i]);
  return maxi;
}
long long totalHr(vector<int> &v, long long mid) {
  long long count = 0;
  for (int i = 0; i < v.size(); i++)
    count += ceil((double)v[i] / (double)mid);
  return count;
}
int minimumRateToEatBananas(vector<int> v, int h) {
  // Write Your Code Here
  int low = 1, high = maximum(v);
  while (low <= high) {
    long long mid = (low + high) / 2;
    long long hr = totalHr(v, mid);
    if (hr <= h)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return low;
}
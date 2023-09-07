#include <bits/stdc++.h>
int maximum(vector<int> &v) {
  int maxi = INT_MIN;
  for (int i = 0; i < v.size(); i++)
    maxi = max(maxi, v[i]);
  return maxi;
}
long long bloom(vector<int> &v, long long day, int k) {
  long long count = 0, bq = 0;
  for (auto it : v) {
    if (it <= day) {
      count++;
      if (count == k) {
        bq++;
        count = 0;
      }
    } else
      count = 0;
  }
  return bq;
}
int roseGarden(vector<int> arr, int k, int m) {
  // Write your code here
  if (k * m > arr.size())
    return -1;
  int maxi = INT_MIN, mini = INT_MAX;
  for (auto it : arr) {
    mini = min(mini, it);
    maxi = max(maxi, it);
  }
  int low = mini, high = maxi;
  while (low <= high) {
    long long mid = (low + high) / 2;
    long long bq = bloom(arr, mid, k);
    if (bq < m)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return low;
}
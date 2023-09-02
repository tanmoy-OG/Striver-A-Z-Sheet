#include <bits/stdc++.h>
int largestElement(vector<int> &arr, int n) {
  // Write your code here.
  int max = 0;
  for (auto it : arr)
    if (it > max)
      max = it;
  return max;
}

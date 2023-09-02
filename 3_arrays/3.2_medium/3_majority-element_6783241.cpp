#include <bits/stdc++.h>
int majorityElement(vector<int> v) {
  // Write your code here
  int n = v.size(), el, count = 0;
  for (int i = 0; i < n; i++) {
    if (count == 0) {
      count = 1;
      el = v[i];
    } else if (v[i] == el)
      count++;
    else
      count--;
  }
  return el;
}
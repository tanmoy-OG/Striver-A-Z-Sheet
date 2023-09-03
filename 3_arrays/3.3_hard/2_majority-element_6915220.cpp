#include <bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
  // Write your code here
  int el1 = INT_MIN, el2 = INT_MIN, count1 = 0, count2 = 0,
      n = floor(v.size() / 3);
  for (int i = 0; i < v.size(); i++) {
    if (count1 == 0 && v[i] != el2) {
      el1 = v[i];
      count1 = 1;
    } else if (count2 == 0 && v[i] != el1) {
      el2 = v[i];
      count2 = 1;
    } else if (v[i] == el1)
      count1++;
    else if (v[i] == el2)
      count2++;
    else {
      count1--;
      count2--;
    }
  }
  count1 = 0, count2 = 0;
  vector<int> result;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == el1)
      count1++;
    else if (v[i] == el2)
      count2++;
  }
  if (count1 > n)
    result.push_back(el1);
  if (count2 > n)
    result.push_back(el2);
  sort(result.begin(), result.end());
  return result;
}
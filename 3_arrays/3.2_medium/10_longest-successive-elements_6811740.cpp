#include <bits/stdc++.h>
int longestSuccessiveElements(vector<int> &a) {
  // Write your code here.
  int n = a.size(), longest = 1;
  unordered_set<int> st;
  for (int i = 0; i < n; i++)
    st.insert(a[i]);
  for (auto it : st) {
    if (st.find(it - 1) == st.end()) {
      int count = 1, temp = it;
      while (st.find(temp + 1) != st.end()) {
        temp++;
        count++;
      }
      longest = max(longest, count);
    }
  }
  return longest;
}
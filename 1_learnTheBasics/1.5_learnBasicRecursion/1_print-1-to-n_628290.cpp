#include <bits/stdc++.h>

//?? Time Complexity: O(n)

using namespace std;
vector<int> printNos(int x) {
  // Write Your Code Here
  if (x == 1) {
    vector<int> v = {1};
    return v;
  }
  vector<int> v = printNos(x - 1);
  v.emplace_back(x);
  return (v);
}
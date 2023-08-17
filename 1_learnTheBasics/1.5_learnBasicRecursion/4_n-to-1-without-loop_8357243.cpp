#include <bits/stdc++.h>

//? Time Complexity: O(n)

using namespace std;
vector<int> func(int n, vector<int> &v) {
  v.push_back(n);
  if (n == 1)
    return v;
  return func(n - 1, v);
}
vector<int> printNos(int x) {
  // Write Your Code Here
  vector<int> v;
  return func(x, v);
}
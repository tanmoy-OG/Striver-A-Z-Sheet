#include <bits/stdc++.h>

//? Time Complexity: O(n)

using namespace std;
vector<string> printNTimes(int n) {
  // Write your code here.
  vector<string> s;
  if (n == 1) {
    s.push_back("Coding Ninjas");
    return s;
  }
  s = printNTimes(n - 1);
  s.push_back("Coding Ninjas");
  return s;
}
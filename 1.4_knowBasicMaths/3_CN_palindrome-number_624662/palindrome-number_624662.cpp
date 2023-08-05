#include <bits/stdc++.h>

using namespace std;
bool palindrome(int n) {
  // Write your code here
  int m = 0, s = n;
  while (s > 0) {
    m = m * 10 + s % 10;
    s /= 10;
  }
  return (m == n ? 1 : 0);
}

//?? Time Complexity: O(log10 (n))
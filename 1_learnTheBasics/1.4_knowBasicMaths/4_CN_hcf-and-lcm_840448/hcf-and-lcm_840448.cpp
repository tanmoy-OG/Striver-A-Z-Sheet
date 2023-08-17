#include <bits/stdc++.h>

using namespace std;
int calcGCD(int n, int m) {
  // Write your code here.
  if (m == 0)
    return n;
  return calcGCD(m, n % m);
}

//?? Time Complexity: O(log$ (min(n,m)))
//* Euclidean Approach
#include <bits/stdc++.h>
int countDigits(int n) {
  // Write your code here.
  int m = n, c = 0;
  while (m > 0) {
    int d = m % 10;
    if (d != 0 && n % d == 0)
      c++;
    m /= 10;
  }
  return c;
}

//?? Time Complexity: O(log (n))
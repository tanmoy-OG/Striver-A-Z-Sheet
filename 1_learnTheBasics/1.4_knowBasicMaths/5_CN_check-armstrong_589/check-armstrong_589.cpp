#include <bits/stdc++.h>

using namespace std;
bool checkArmstrong(int n) {
  // Write your code here

  // counting digits
  int m = n, c = 0;
  while (m) {
    c++;
    m /= 10;
  }

  // calculating and checking
  m = n;
  int sum = 0;
  while (m) {
    sum += pow(m % 10, c);
    m /= 10;
  }
  return (sum == n ? true : false);
}

//?? Time Complexity: O(log10 (n))
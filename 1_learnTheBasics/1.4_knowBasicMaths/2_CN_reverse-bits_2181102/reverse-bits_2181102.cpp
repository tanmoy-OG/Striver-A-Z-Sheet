#include <bits/stdc++.h>

using namespace std;
long reverseBits(long n) {
  // Write your code here.
  int d, c = 0;
  list<int> l;
  for (int i = 31; i >= 0; i--) {
    l.emplace_front(n % 2);
    n /= 2;
  }
  for (auto i : l) {
    n += i * pow(2, c);
    c++;
  }
  return n;
}

//?? Time Complexity: O(2n)
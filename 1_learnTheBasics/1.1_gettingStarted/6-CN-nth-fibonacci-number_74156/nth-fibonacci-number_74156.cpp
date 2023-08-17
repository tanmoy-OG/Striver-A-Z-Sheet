#include <bits/stdc++.h>
using namespace std;

int main() {
  /*
   *  Write your code here.
   *  Read input as specified in the question.
   *  Print output as specified in the question.
   */
  int n;
  cin >> n;

  if (n == 0)
    cout << 0;
  else {
    int i, a = 1, b = 1, c = 1;
    for (i = 3; i <= n; i++) {
      c = a + b;
      a = b;
      b = c;
    }
    cout << c;
  }
}
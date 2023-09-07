int NthRoot(int n, int m) {
  // Write your code here.
  int low = 1, high = m;
  while (low <= high) {
    long long mid = (low + high) / 2;
    long long val = pow(mid, n);
    if (val == m)
      return (int)mid;
    else if (val < m &&
             val > 0) // val > 0 check cus pow(mid, n) of a very long value
                      // might overflow and return a negetive number
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
}
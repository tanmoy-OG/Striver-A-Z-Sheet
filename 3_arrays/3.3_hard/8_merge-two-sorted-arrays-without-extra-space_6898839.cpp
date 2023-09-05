#include <vector>
void swapGreater(vector<long long> &a, vector<long long> &b, int left,
                 int right) {
  if (a[left] > b[right])
    swap(a[left], b[right]);
}
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a,
                                           vector<long long> &b) {
  // Write your code here.
  int n = a.size(), m = b.size(), len = n + m;
  int gap = (len / 2) + (len % 2);
  while (gap > 0) {
    int left = 0;
    int right = left + gap;
    while (right < len) {
      if (left < n && right >= n)
        swapGreater(a, b, left, right - n);
      else if (left >= n)
        swapGreater(a, b, left - n, right - n);
      else
        swapGreater(a, b, left, right);
      left++;
      right++;
    }
    if (gap == 1)
      break;
    gap = (gap / 2) + (gap % 2);
  }
}
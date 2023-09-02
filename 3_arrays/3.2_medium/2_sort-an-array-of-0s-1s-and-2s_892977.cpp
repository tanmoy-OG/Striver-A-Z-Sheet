#include <bits/stdc++.h>
void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}
void sortArray(vector<int> &arr, int n) {
  // Write your code here
  int zero = 0, one = 0, two = n - 1;
  while (one <= two) {
    if (arr[one] == 0) {
      swap(arr[one], arr[zero]);
      zero++;
      one++;
    } else if (arr[one] == 2) {
      swap(arr[one], arr[two]);
      two--;
    } else
      one++;
  }
}

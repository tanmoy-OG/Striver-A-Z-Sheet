#include <bits/stdc++.h>
vector<int> rotateArray(vector<int> &arr, int n) {
  // Write your code here.
  int i, temp = arr[0];
  for (i = 0; i < n - 1; i++)
    arr[i] = arr[i + 1];
  arr[i] = temp;
  return arr;
}

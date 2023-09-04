#include <vector>

int getSingleElement(vector<int> &arr) {
  // Write your code here.
  int count = 0, i;
  for (i = 0; i < arr.size() - 1; i++) {
    count++;
    if (arr[i] == arr[i + 1]) {
      i++;
      count++;
    }
    if (count == 2)
      count = 0;
    else if (count == 1)
      return arr[i];
  }
  return arr[i];
}
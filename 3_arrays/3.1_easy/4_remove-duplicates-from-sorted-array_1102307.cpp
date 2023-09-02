int removeDuplicates(vector<int> &arr, int n) {
  // Write your code here.
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] == arr[i + 1]) {
      arr.erase(arr.begin() + i);
      n = arr.size();
      i--;
    }
  }
  return arr.size();
}
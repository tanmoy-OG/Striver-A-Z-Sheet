vector<int> rotateArray(vector<int> arr, int k) {
  // Write your code here.
  vector<int> temp(arr.size());
  int c = 0;
  for (int i = 0; i < arr.size(); i++) {
    temp[i] = arr[i];
    if (k < arr.size()) {
      arr[i] = arr[k];
      k++;
    } else {
      arr[i] = temp[c];
      c++;
    }
  }
  return arr;
}

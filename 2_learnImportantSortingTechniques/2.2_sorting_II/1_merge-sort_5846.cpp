void merge(vector<int> &arr, int low, int mid, int high) {
  vector<int> temp;
  int i = low;
  int j = mid + 1;
  while (i <= mid && j <= high) {
    if (arr[i] <= arr[j]) {
      temp.push_back(arr[i]);
      i++;
    } else {
      temp.push_back(arr[j]);
      j++;
    }
  }
  while (i <= mid) {
    temp.push_back(arr[i]);
    i++;
  }
  while (j <= high) {
    temp.push_back(arr[j]);
    j++;
  }
  for (int k = low; k <= high; k++)
    arr[k] = temp[k - low];
}

void mergeSort(vector<int> &arr, int l, int r) {
  // Write Your Code Here
  if (l >= r)
    return;
  int mid = (l + r) / 2;
  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, r);
  merge(arr, l, mid, r);
}
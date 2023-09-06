int cnt = 0;
void pairs(vector<int> &arr, int low, int mid, int high, int i, int j) {
  while (i <= mid) {
    while (j <= high && arr[i] > 2 * arr[j])
      j++;
    cnt += j - (mid + 1);
    i++;
  }
}
void merge(vector<int> &arr, int low, int mid, int high) {
  vector<int> temp;
  int i = low;
  int j = mid + 1;
  pairs(arr, low, mid, high, i, j);
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
  if (l >= r)
    return;
  int mid = (l + r) / 2;
  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, r);
  merge(arr, l, mid, r);
}
int team(vector<int> &skill, int n) {
  // Write your code here.
  mergeSort(skill, 0, n - 1);
  return cnt;
}

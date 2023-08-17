void sort(int arr[], int &n, int &i) {
  if (i < n) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      arr[j] += arr[j - 1];
      arr[j - 1] = arr[j] - arr[j - 1];
      arr[j] -= arr[j - 1];
      j--;
    }
    i++;
    sort(arr, n, i);
    return;
  }
  return;
}

void insertionSort(int arr[], int n) {
  // write your code here
  int i = 1;
  sort(arr, n, i);
}
void bubbleSort(vector<int> &arr, int n) {
  for (int i = n - 1; i > 0; i--) {
    int swap = 0;
    for (int j = 0; j <= i - 1; j++)
      if (arr[j] > arr[j + 1]) {
        arr[j] += arr[j + 1];
        arr[j + 1] = arr[j] - arr[j + 1];
        arr[j] -= arr[j + 1];
        swap = 1;
      }
    if (swap == 0)
      break;
  }
}

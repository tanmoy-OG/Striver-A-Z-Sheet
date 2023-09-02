void swap(int input[], int i, int j) {
  int temp = input[i];
  input[i] = input[j];
  input[j] = temp;
}

int partitionArray(int input[], int start, int end) {
  int i = start, j = end;
  while (i < j) {
    while (input[i] <= input[start] && i < end)
      i++;
    while (input[j] > input[start] && j > start)
      j--;
    if (i < j)
      swap(input, i, j);
  }
  swap(input, j, start);
  return j;
}

void quickSort(int input[], int start, int end) {
  if (start < end) {
    int pivot = partitionArray(input, start, end);
    quickSort(input, start, pivot - 1);
    quickSort(input, pivot + 1, end);
  }
}
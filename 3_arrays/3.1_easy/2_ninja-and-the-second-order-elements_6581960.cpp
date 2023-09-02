vector<int> getSecondOrderElements(int n, vector<int> a) {
  // Write your code here.
  int max = INT_MIN, smax = INT_MIN, min = INT_MAX, smin = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (a[i] < min) {
      smin = min;
      min = a[i];
    } else if (a[i] >= min && a[i] < smin)
      smin = a[i];
    if (a[i] > max) {
      smax = max;
      max = a[i];
    } else if (a[i] <= max && a[i] > smax)
      smax = a[i];
  }
  return {smax, smin};
}

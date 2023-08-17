vector<int> countFrequency(int n, int x, vector<int> &nums) {
  // Write your code here.
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++)
    if (nums[i] <= n)
      v[nums[i] - 1]++;
  return v;
}
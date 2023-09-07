int search(vector<int> &nums, int target) {
  // Write your code here.
  int high = nums.size() - 1, low = 0;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (nums[mid] == target)
      return mid;
    else if (nums[mid] < target)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
}
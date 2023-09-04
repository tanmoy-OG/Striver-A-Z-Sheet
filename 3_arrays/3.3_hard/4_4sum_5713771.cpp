#include <bits/stdc++.h>
vector<vector<int>> fourSum(vector<int> &nums, int target) {
  // Write your code here
  sort(nums.begin(), nums.end());
  vector<vector<int>> result;
  int n = nums.size();
  for (int i = 0; i < n; i++) {
    if (i > 0 && nums[i] == nums[i - 1])
      continue;
    for (int j = i + 1; j < n; j++) {
      if (j > i + 1 && nums[j] == nums[j - 1])
        continue;
      int k = j + 1;
      int l = n - 1;
      while (k < l) {
        int sum = nums[i] + nums[j] + nums[k] + nums[l];
        if (sum < target)
          k++;
        else if (sum > target)
          l--;
        else {
          vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
          result.push_back(temp);
          k++;
          l--;
          while (j < k && nums[k] == nums[k - 1])
            k++;
          while (j < k && nums[l] == nums[k + 1])
            l--;
        }
      }
    }
  }
  return result;
}
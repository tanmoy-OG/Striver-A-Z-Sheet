#include <bits/stdc++.h>
int bestTimeToBuyAndSellStock(vector<int> &prices) {
  // Write your code here.
  int buy = prices[0], maxProfit = 0;
  for (int i = 1; i < prices.size(); i++) {
    int profit = prices[i] - buy;
    maxProfit = max(maxProfit, profit);
    buy = min(buy, prices[i]);
  }
  return maxProfit;
}

#include <vector>

void rotateMatrix(vector<vector<int>> &mat) {
  // Write your code here.
  int n = mat.size();
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++)
      swap(mat[i][j], mat[j][i]);
    reverse(mat[i].begin(), mat[i].end());
  }
}
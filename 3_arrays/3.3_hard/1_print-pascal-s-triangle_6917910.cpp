vector<vector<int>> pascalTriangle(int N) {
  // Write your code here.
  vector<vector<int>> triangle;
  for (int i = 0; i < N; i++) {
    int temp = 1;
    vector<int> row = {temp};
    for (int j = 1; j <= i; j++) {
      temp = temp * (i + 1 - j) / j;
      row.push_back(temp);
    }
    triangle.push_back(row);
  }
  return triangle;
}
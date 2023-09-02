string read(int n, vector<int> book, int target) {
  // Write your code here.
  sort(book.begin(), book.end());
  int l = 0, r = n - 1;
  while (l < r) {
    if (book[l] + book[r] < target)
      l++;
    else if (book[l] + book[r] > target)
      r--;
    else if (book[l] + book[r] == target)
      return "YES";
  }
  return "NO";
}

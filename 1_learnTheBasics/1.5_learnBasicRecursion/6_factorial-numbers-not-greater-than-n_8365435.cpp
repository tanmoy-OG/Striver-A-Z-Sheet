//? Time Complexity: O(n^2)

long long fact(int n) {
  if (n == 0)
    return 1;
  return n * fact(n - 1);
}

vector<long long> factorialNumbers(long long n) {
  // Write Your Code Here
  vector<long long> v;
  for (int i = 1; i <= n; i++) {
    long long f = fact(i);
    if (f > n)
      break;
    v.push_back(f);
  }
  return v;
}
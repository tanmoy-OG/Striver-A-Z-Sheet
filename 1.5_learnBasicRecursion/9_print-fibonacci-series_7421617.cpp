//? Time Complexity: O(n)

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    if (n == 1) {
      vector<int> v = {0};
      return v;
    }
    if (n == 1 || n == 2) {
        vector<int> v = generateFibonacciNumbers(n - 1);
        v.push_back(1);
        return (v);
    }
    vector<int> v = generateFibonacciNumbers(n - 1);
    int c = *(v.end()-1) + *(v.end()-2);
    v.push_back(c);
    return (v);
}
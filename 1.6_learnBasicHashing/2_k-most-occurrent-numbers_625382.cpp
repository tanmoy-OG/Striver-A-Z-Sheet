vector<int> getFrequencies(vector<int> &v) {
  // Write Your Code Here
  unordered_map<int, int> m;
  vector<int> vc(2, 0);
  int max = 0, min = v.size();
  for (int i = 0; i < v.size(); i++)
    m[v[i]]++;
  for (auto i : m) {
    int temp = i.second;
    if (temp > max || (temp == max && i.first < vc[0])) {
      max = temp;
      vc[0] = i.first;
    }
    if (temp < min || (temp == min && i.first < vc[1])) {
      min = temp;
      vc[1] = i.first;
    }
  }
  return vc;
}
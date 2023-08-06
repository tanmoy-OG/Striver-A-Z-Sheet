//? Time Complexity: O(n/2)

bool palin(string &s, int i) {
    if (i >= s.size()/2)
        return true;
    if (s[i] != s[s.size()-i-1])
        return false;
    return palin(s, i+1);
}

bool isPalindrome(string& str) {
    // Write your code here.
    return palin(str, 0);
}

class Solution {
public:
    bool palin(string &s, int l, int r) {
        if (l >= r)
            return true;
        if ((int)s[l] < 48 || ((int)s[l] > 57 && (int)s[l] < 97) || (int)s[l] > 122)
            return palin(s, l+1, r);
        if ((int)s[r] < 48 || ((int)s[r] > 57 && (int)s[r] < 97) || (int)s[r] > 122)
            return palin(s, l, r-1);
        if (s[l] != s[r]) 
            return false;
        return palin(s, l+1, r-1);
    }
    bool isPalindrome(string &s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return palin(s, 0, s.size()-1);
    }
};
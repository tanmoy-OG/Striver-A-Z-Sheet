class Solution {
public:
    bool isPalindrome(int x) {
        long n = 0, s = x;
        while (s>0) {
            n=n*10+s%10;
            s/=10;
        }
        return (n==x ? 1 : 0);
    }
};
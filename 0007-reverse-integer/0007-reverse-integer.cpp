class Solution {
public:
    int reverse(int x) {
        int n, p;
        long rev = 0;
        if (x > 0) {
            n = x;
            p = 1;
        }
        else {
            n = abs(x);
            p = -1;
        }
        while (n > 0) {
            if (rev*10 > 2147483647) return 0;
            rev = rev*10 + n %10;
            n/= 10;
        }
        return rev * p;
    }
};
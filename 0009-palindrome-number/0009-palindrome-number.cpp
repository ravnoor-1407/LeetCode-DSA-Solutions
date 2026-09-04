class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int originalNum = x;
        long reversedNum = 0;

        while (x > 0) {
            reversedNum = reversedNum * 10 + x % 10;
            x /= 10;
        }
        return originalNum == reversedNum;
    }
};
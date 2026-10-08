class Solution {
public:
    double myPow(double x, int n) {
        long long binaryForm = n;
        long double base = x;
        if (n < 0) {
            base = 1.0 / base;
            binaryForm = -binaryForm;
        }
        double result = 1.0;

        while (binaryForm > 0) {
            if (binaryForm % 2 == 1) {
                result *= base;
            }
            base *= base;
            binaryForm /= 2;   
        }
        return result;
    }
};
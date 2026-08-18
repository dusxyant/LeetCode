class Solution {
    unordered_set<int> seen;

public:
    bool isHappy(int n) {
        if (n == 1) return true;
        if (seen.count(n)) return false;

        seen.insert(n);

        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return isHappy(sum);
    }
};
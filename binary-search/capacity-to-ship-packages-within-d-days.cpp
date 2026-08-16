class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);

        while (l < r) {
            int m = l + (r - l) / 2;

            int total = 1;
            int sum = 0;

            for (int w : weights) {
                if (sum + w <= m) {
                    sum += w;
                } else {
                    total++;
                    sum = w;
                }
            }

            if (total <= days)
                r = m;
            else
                l = m + 1;
        }

        return l;
    }
};
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int left = 0;
        int right = 0;
        string ans = "";

        while (left < word1.length() || right < word2.length()) {

            if (left < word1.length()) {
                ans += word1[left];
                left++;
            }

            if (right < word2.length()) {
                ans += word2[right];
                right++;
            }
        }

        return ans;
    }
};
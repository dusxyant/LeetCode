class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int, int> mpp;
        mpp[0]=1;
        int pre=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            pre+= nums[i];
            int remove = pre-k;
            count += mpp[remove];
            mpp[pre] += 1;
        }
        return count;
    }
};
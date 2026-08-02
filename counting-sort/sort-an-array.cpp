class Solution {
private:
    int partition(vector<int>&nums, int l, int h){
        int pivot = nums[l + rand() % (h-l)];

        int i = l;
        int j = h;
        
        while(1){
            while(nums[i] < pivot) ++i;
            while(nums[j] > pivot) --j;
            if(i >= j)
                break;

            swap(nums[i], nums[j]);
            ++i; --j;
        }
        return j;
    }

    void sort(vector<int>&nums, int l, int h){ // [l, h]
        if(l >= h)
            return;

        int i = partition(nums, l, h);
        sort(nums, l, i);
        sort(nums, i+1, h);
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums, 0, nums.size()-1);
        return nums;
    }
};
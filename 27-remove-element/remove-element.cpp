class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        // Two pointers approach: Same as that of move zeros problem !!
        int j = 0;
        for(int i = 0;i < n;i ++){
            if(nums[i] != val) nums[j ++] = nums[i];
        }

        return j;
    }
};
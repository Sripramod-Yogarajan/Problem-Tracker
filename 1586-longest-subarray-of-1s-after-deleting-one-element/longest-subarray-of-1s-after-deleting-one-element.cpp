class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        // Two-pointer Approach: Use a counter to ensure only one 1 has encountered so far !!
        // If more than 1 one is encountered then move the left pointer until the count
        // becomes 1 again, move the right pointer constantly 
        int n = nums.size();
        int left = 0, count = 0;
        int maxLen = 0;
        for(int right = 0;right < n;right ++){
            if(nums[right] == 0) count ++;
            while(count > 1) {
                if(nums[left ++] == 0) count --;
            }
            maxLen = max(maxLen, right - left);
        }
        return maxLen;
    }
};

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int total = accumulate(nums.begin(), nums.end(), 0);
        int count = 0, sum = 0;
        for(int i = 0;i < n - 1;i ++){
            total -= nums[i];
            sum += nums[i];
            if((sum - total)%2 == 0) count ++;
        }
        return count;
        /* 
            Simpilified Approach: If total is even then return nums.size()-1
            else return 0
        */
    }
};
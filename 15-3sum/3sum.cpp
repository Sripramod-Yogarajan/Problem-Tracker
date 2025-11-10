class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res; 
        // Sort the nums to use two-pointers based approach
        sort(nums.begin(), nums.end());
        for(int i = 0;i < n;i ++){
            // If duplicate encountered skip it -> It would again provide the same combination
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            // Two pointers approach (Alternate approach: Hashmap to find the difference)
            int start = i + 1, end = n - 1;
            while(start < end){
                int sum = nums[i] + nums[start] + nums[end];
                
                if(sum == 0){
                    res.push_back({nums[i], nums[start], nums[end]});
                    start ++;
                    end --;
                    // Skip duplicates 
                    while(start < end && nums[start] == nums[start - 1]) start ++;
                    while(start < end && nums[end] == nums[end + 1]) end --;
                } else if(sum < 0){
                    start ++;
                } else{
                    end --;
                }
            }
        }
        return res;
    }
};
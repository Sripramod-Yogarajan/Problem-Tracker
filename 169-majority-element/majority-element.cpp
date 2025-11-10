class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Brute-force approach: Using Hash-Map
        // Maintain a map to store frequency of each element -> then check which element's 
        // frequency > n/2

        // Optimal approach (reducing extra space) - using Boyer Moore's voting algorithm
        int n = nums.size();
        int candidate = nums[0], count = 1; 
        for(int i = 1;i < n;i ++){
            if(candidate == nums[i] && count > 0) count ++;
            else if (count == 0) {
                candidate = nums[i];
                count = 1;
            } else {
                count --;
            }
        }
        return candidate;
    }
};
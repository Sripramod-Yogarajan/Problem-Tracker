class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        bool flag = false; // A flag to denote whether the first one has encountered
        int n = nums.size();
        int dist = 0; // Calculate the number of zeros between two 1s
        for(int i = 0;i < n;i ++){
            if(nums[i] == 1 && !flag) flag = true; // If the first one is encountered set the flag true
            // If the flag has been set then each zero contributes to the dist
            // Increment the dist for every 0 encountered after the flag has been set
            // If 1 has been encountered after the first one (i.e. the flag has been set)
            // Then compare the dist with k if dist < k then return false
            // If not set the dist = 0 to calculate the distance b/w current 1 and it's next one 
            else if (nums[i] == 1 && flag){
                if(dist < k) return false;
                dist = 0;
            }else if(nums[i] == 0 && flag) dist ++;
        }
        return true;
    }
};
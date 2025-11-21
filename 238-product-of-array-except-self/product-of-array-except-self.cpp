class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Brute-force: Using two loops inside a loop O(n^2) 
        // First loop to calculate the product of elements 0 to i-1
        // Second loop to calculate the product of elements i+1 to n
        // Optimal Approach: Using prefix and suffix arrays 
        // prefix[i] = prefix[i-1] * nums[i-1] and suffix[i] = suffix[i+1] * nums[i+1]  
        // Then res[i] = prefix[i] * suffix[i]
        // Time and space: O(n)
        // Follow Up: To solve it in O(1) space -> instead of using arrays we use 
        // prefix and suffix variables    
        int n = nums.size();
        vector<int> res(n,1);
        int prefix = 1;
        for(int i = 0;i < n;i ++){
            res[i] *= prefix;
            prefix *= nums[i];
        }
        int suffix = 1;
        for(int i = n-1;i >= 0;i --){
            res[i] *= suffix;
            suffix *= nums[i];
        }
        return res;
    }
};
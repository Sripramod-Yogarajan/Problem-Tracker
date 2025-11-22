class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for(int num : nums){
            if(num % 3 != 0) res++;
        }
        return res;
    }
};
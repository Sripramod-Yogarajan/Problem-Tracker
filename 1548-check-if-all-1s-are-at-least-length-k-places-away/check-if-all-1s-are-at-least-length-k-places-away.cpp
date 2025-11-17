class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        bool flag = false;
        int n = nums.size();
        int dist = 0;
        for(int i = 0;i < n;i ++){
            if(nums[i] == 1 && !flag) flag = true;
            else if (nums[i] == 1 && flag){
                if(dist < k) return false;
                dist = 0;
            }else if(nums[i] == 0 && flag) dist ++;
        }
        return true;
    }
};
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> res;
        int rem = 0;
        for(int b: nums){
            rem = ((rem << 1) + b) % 5;
            res.push_back(rem == 0);
        }

        return res;
    }
};
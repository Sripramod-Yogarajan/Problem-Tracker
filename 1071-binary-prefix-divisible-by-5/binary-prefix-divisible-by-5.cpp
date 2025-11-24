class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> res;
        int rem = 0;
        for(int b: nums){
            // Binary concatenation: old_num * 2 + 1 or 0
            // Eg: 11 (0101 (shift left)) -> 1010 (10) -> add 1 (current bit) -> 1011
            // Multiply by 2 -> shift left !!!
            rem = ((rem << 1) + b) % 5;
            res.push_back(rem == 0);
        }

        return res;
    }
};
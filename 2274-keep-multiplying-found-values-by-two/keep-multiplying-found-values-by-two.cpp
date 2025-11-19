class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        // Approach: Just simulate the given problem statement 
        unordered_set<int> seen(nums.begin(), nums.end());

        while(seen.find(original) != seen.end()){
            original *= 2;
        }

        return original;
    }
};
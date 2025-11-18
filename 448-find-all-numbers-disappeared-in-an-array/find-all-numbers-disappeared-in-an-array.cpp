class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //Brute force: Using a hashmap (frequency map)
        unordered_map<int, int> seen;
        for(int num : nums) seen[num] ++;
        vector<int> res;
        for(int i = 1;i <= nums.size();i ++){
            if(seen[i] == 0) res.push_back(i);
        }
        return res;
    }
};
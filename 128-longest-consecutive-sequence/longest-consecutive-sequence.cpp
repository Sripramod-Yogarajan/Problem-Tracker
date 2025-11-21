class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        // Brute Force: To sort the array and find the sequence 
        // But the given question is to solve this problem in O(n) time
        // So use a unordered_set (since set results in sorting the array)
        // Find the starting point if for any num -> if num-1 is present in
        // the set then it's not the starting point so skip it
        // if it's the starting point then find the length of the sequence 
        // and find the maxlen
        int maxLen = 0;
        unordered_set<int> elts(nums.begin(), nums.end());
        for(int num : elts){
            if(elts.find(num-1) == elts.end()){
                int len = 1;
                while(elts.find(num+len) != elts.end()) len ++;
                maxLen = max(maxLen, len);
            }
        }
        return maxLen;
    }
};
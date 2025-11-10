class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_set<int> candies(candyType.begin(), candyType.end());
        if(candies.size() >= n/2) return n/2;
        else return candies.size();
    }
};
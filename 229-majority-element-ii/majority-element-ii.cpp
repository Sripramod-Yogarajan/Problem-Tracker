class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        // Brute force: Maintain a freq map and check return the elements whose freq > n/3
        // Follow up: To solve the question in O(1) space

        // Optimal approach (to solve it in O(1) space) -> Modified Boyer Moore's voting algorithm
        // Only atmost 2 elements can have freqeuency > n/3 in an array
        // Assume if 3 elements have frequency n/3 then, n/3 + n/3 + n/3 = n (which is equal to n)
        // But the resultant elements should have frequency > n/3, if 3 elements have frequency >n/3
        // Then it would exceed n (array size), which is impossible !!!
        int candidate1 = INT_MIN, candidate2 = INT_MIN;
        int count1 = 0, count2 = 0;
        for(int i = 0;i < n;i ++){
            if(count1 == 0 && nums[i] != candidate2){
                candidate1 = nums[i];
                count1 ++;
            } else if(count2 == 0 && nums[i] != candidate1){
                candidate2 = nums[i];
                count2 ++;
            } else if(candidate1 == nums[i]){
                count1 ++;
            } else if(candidate2 == nums[i]){
                count2 ++;
            } else{
                count1 --;
                count2 --;
            }
        }
        // Mistake: Verify again !! check again whether the current candidate's freq > n/3
        count1 = 0, count2 = 0;
        for(int i = 0;i < n;i ++){
            if(candidate1 == nums[i]) count1 ++;
            else if(candidate2 == nums[i]) count2 ++;
        }
        int range = floor(n/3);
        if(count1 > range && count2 > range) return {candidate1, candidate2};
        else if (count1 > range) return {candidate1};
        else if (count2 > range) return {candidate2};
        else return {};
    }
};
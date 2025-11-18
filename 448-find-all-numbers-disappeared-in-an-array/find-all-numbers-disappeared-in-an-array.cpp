class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // Brute force: 1.Using a hashmap (frequency map) (T: O(n) and S: O(n))
        // 2. Sorting and adding the elements where the index + 1 and the current 
        // element doesn't match (T: O(nlogn) S: O(1))
        // Follow up: Solve it without using extra-space and in O(n) which means 
        // -> Any sorting algorithms of T: O(nlogn) not allowed
        // -> Use of additional datastructure not allowed
        // Approach: Using Cyclic Sort (T: O(n) and S: O(1))
        // Cyclic sort is applied only when the array contains integers from [1..n] 
        // Swap the current element until it's placed in the correct index (nums[i] == i + 1)
        // Cyclic sort also works when duplicate exists in the array
        int n = nums.size();
        int i = 0;
        while(i < n){
            int index = nums[i] - 1;
            if(nums[index] != nums[i]) swap(nums[i], nums[index]);
            else i ++; 
        }
        vector<int> res;
        for(int i = 0;i < n;i ++) if(nums[i] != i + 1) res.push_back(i+1);
        return res;
    }
};
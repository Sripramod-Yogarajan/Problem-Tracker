class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 1 && nums[0] == target) return 0;
        if(n == 1 && nums[0] != target) return -1;
        // Brute-force Approach: Perform linear search 
        // Since, it's given in question to solve it in O(logn) -> Binary search
        // Base idea: Find the sorted part of the array and move towards it !!
        int low = 0, high = n-1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target) return mid;
            // Check whether the left half is sorted
            // If the left half is sorted then nums[mid] <= nums[low]
            if(nums[mid] >= nums[low]){
                // Check whether the target lies in this range else move to the right half
                if(nums[low] <= target && nums[mid] >= target){
                    high = mid-1;
                } else{
                    low = mid+1;
                }
            }else{
                if(nums[mid] <= target && nums[high] >= target){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Brute force: Just sort the array 
        // Optimal Approach: Dutch National Flag Algorithm 
        // Maintain 3 pointers low, mid, high
        // Move mid pointer from left to right, if nums[mid] == 2 swap it with the high element 
        // and move high one step left
        // If nums[mid] == 0 swap it with the left element and move mid and left one step right 
        // If nums[mid] == 1 just move the mid one step right

        int n = nums.size();
        int low = 0, high = n-1, mid = 0;
        while(mid <= high){
            if(nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low ++;
                mid ++;
            }else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high --;
            }else{
                mid ++;
            }
        }
    }
};
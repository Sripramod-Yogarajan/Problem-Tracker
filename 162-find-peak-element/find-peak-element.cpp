class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        // Brute force: For every element we can maintain a flag that if all the 
        // elements to the left to it are smaller than that and
        // elements to the right to it are greater 
        // If both conditions satisfied then return that element
        // But this results in O(n^2) complexity but it's asked to solve the problem in
        // O(log n) complexity -> Binary Search
        // Binary Search Approach: 
        // All the elements to the left of peak will be increasing
        // and right will be decreasing 
        // So if nums[mid] < nums[mid+1] then peak is on the right side
        // Similarly if nums[mid] > nums[mid+1] then peak is on the left 
        // Base cases : The peak shall be / or \ (i.e. first element and last element)
        if(n == 1) return 0;
        if(nums[0] > nums[1]) return 0; 
        if(nums[n-1] > nums[n-2]) return n-1;
        int low = 0, high = n-2;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] < nums[mid+1]) low = mid+1;
            else high = mid-1;
        }
        return low;
    }
};
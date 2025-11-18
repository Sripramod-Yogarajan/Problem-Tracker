class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // Keyword: Kth largest -> Heaps
        // Another approach is to use Divide and Conquer method !! (DAA)
        // By default priority queues are max-heap 
        // Syntax: prioriry_queue<datatype, container, comparing function> name (minheap)
        /* priority_queue<int, vector<int>, greater<int>> pq;
        for(int num: nums){
            pq.push(num);
            if(pq.size() > k) pq.pop();
        }
        return pq.top();
        */
        int n = nums.size();
        nth_element(begin(nums), begin(nums) + n - k, end(nums));
        return nums[n-k];
    }
};
class Solution {
private:
    int checkValley(vector<int>& nums){
        int count = 0;
        for(int i = 1;i < nums.size()-1;i ++){
            if(nums[i] < nums[i-1] && nums[i] < nums[i+1]) count ++;
        }
        return count;
    }

    int checkPeak(vector<int>& nums){
        int count = 0;
        for(int i = 1;i < nums.size()-1;i ++){
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1]) count ++;
        }
        return count;
    }
public:
    int totalWaviness(int num1, int num2) {
        if(num1 < 100 && num2 < 100) return 0;
        if(num1 < 100) num1 = 100;
        int sum = 0;
        for(int i = num1; i <= num2;i ++){
            vector<int> digits;
            int num = i;
            while(num > 0){
                digits.push_back(num%10);
                num /= 10;
            }
            reverse(digits.begin(), digits.end());
            sum += checkPeak(digits) + checkValley(digits);
        }
        return sum;
    }
};
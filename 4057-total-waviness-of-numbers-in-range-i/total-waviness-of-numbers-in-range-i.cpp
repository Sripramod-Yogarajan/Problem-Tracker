class Solution {
private:
    int countWaviness(int n){
        int count = 0;
        string s = to_string(n);
        if(s.size() < 3) return 0;
        for(int i = 1;i < s.size()-1;i ++){
            int x = s[i-1] - '0';
            int y = s[i] - '0';
            int z = s[i+1] - '0';
            if(y < x && y < z) count ++;
            if(y > x && y > z) count ++;
        }
        return count;
    }
public:
    int totalWaviness(int num1, int num2) {
        int total = 0;
        for(int i = num1;i <= num2;i ++){
            total += countWaviness(i);
        }
        return total;
    }
};
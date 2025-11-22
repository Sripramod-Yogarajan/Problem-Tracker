class Solution {
public:
    int minimumFlips(int n) {
        string s = "";
        int count = 0;
        while(n > 0){
            char bit = (char) (n%2);
            s = bit + s;
            n /= 2;
        }
        int left = 0, right = s.size()-1;
        while(left < right){
            if(s[left] != s[right]) count += 2;
            left ++;
            right --;
        }
        return count;
        
    }
};
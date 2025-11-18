class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        // Approach: If a 0 is encountered it's a 1 bit character and hence move 1 step 
        // If 1 is encountered it's a 2 bit character and hence move 2 steps 
        // If we reached exactly the last position (n-1) of the array then return true
        // Since the last character is 1-bit character
        // If we reached (n)th step then return false since the last character is 2-bit character
        // [1,0,0] - 1 is 2 bit character so i += 2 we reached the last position so return true
        // [1,0,1,0] - 1 is 2 bit charcter so i += 2 again at index 2 we ecnountered 1
        // So again i += 2 we reached (n)th position so return false
        int i = 0;
        while(i < bits.size() - 1){
            if(bits[i] == 0) i += 1;
            else i += 2;
        }

        return i == bits.size()-1;
    }
};
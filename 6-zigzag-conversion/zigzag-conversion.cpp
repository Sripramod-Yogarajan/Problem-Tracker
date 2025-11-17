class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(numRows == 1 || s.size() <= numRows) return s;
        // Have a flag to denote whether the direction is to go down or up 
        bool flag = false;
        // A char matrix (array of strings) to store the characters
        vector<string> zzmat(min(numRows, n));
        // Denotes the current row !!
        int i = 0;
        for(char c: s){
            // Append the current character to the current row
            zzmat[i] += c;
            // If the current row == 0, then we have to set the flag true -> because now the next character 
            // has to be appended to the consecutive next rows. 
            // Until numRows - 1 is reached flag remains true.
            // If the current row == numRows - 1 then we have to set the flag false -> because now
            // the next charaters has to be appended to the previous rows.
            // Until 0 is reached flag remains false 
            if(i == 0 || i == numRows - 1) flag = !flag;
            // From the logic above is the flag - true, then move to the nextRows (+1)
            // If flag - false then move to the previous rows (-1)
            i += flag ? 1 : -1;
        }

        string res = "";
        for(string row: zzmat){
            res += row;
        }

        return res;
    }
};
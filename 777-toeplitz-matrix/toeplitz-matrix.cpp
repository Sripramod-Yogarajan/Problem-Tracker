class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        // Approach: Just traverse the matrix from 1 to m-1 (rows) and 1 to n-1 (columns)
        // If any element is not equal to it's left diagonal element return false

        int m = matrix.size(); // Number of rows
        int n = matrix[0].size(); // Number of columns
        for(int i = 1;i < m;i ++){
            for(int j = 1;j < n;j ++){
                if(matrix[i][j] != matrix[i-1][j-1]) return false;
            }
        }
        return true;
    }
};
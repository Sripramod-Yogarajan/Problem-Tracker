class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size(); // Number of rows
        int n = mat[0].size(); // Number of columns
        // Brute-force approach: Simulate according to the question 
        vector<vector<int>> res(m, vector<int>(n, 0));
        for(int i = 0;i < m;i ++){
            for(int j = 0;j < n;j ++){
                for(int r = max(i - k, 0);r <= min(i + k, m-1);r ++){
                    for(int c = max(j - k, 0); c <= min(j + k, n-1);c ++){
                        res[i][j] += mat[r][c];
                    }
                }
            }
        }
        return res;
    }
};
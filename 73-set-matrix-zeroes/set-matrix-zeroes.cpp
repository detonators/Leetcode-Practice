class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();           // number of rows
        int n = matrix[0].size();        // number of columns

        vector<int> row(m, 0), col(n, 0);

        // First pass: mark the rows and columns that need to be zeroed
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // Second pass: set matrix[i][j] to 0 if its row or column is marked
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

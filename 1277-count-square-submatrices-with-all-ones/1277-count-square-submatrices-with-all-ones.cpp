class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = 0;

        // Count all 1's in the first row
        for (int j = 0; j < m; ++j) {
            ans += matrix[0][j];
        }

        // Count all 1's in the first column
        for (int i = 1; i < n; ++i) {
            ans += matrix[i][0];
        }

        // DP logic for squares greater than 1x1
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                if (matrix[i][j]) {
                    matrix[i][j] += min({matrix[i-1][j-1], matrix[i][j-1], matrix[i-1][j]});
                    ans += matrix[i][j];
                }
            }
        }

        return ans;
    }
};

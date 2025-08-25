class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> result;
        result.reserve(m * n);

        int row = 0, col = 0;
        bool up = true;  // direction flag

        while (result.size() < m * n) {
            result.push_back(mat[row][col]);

            if (up) {
                if (col == n - 1) {      // Hit right boundary
                    row++;
                    up = false;
                } else if (row == 0) {  // Hit top boundary
                    col++;
                    up = false;
                } else {                // Move up-right
                    row--;
                    col++;
                }
            } else {  // moving down
                if (row == m - 1) {     // Hit bottom boundary
                    col++;
                    up = true;
                } else if (col == 0) {  // Hit left boundary
                    row++;
                    up = true;
                } else {                // Move down-left
                    row++;
                    col--;
                }
            }
        }

        return result;
    }
};

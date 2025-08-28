class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, deque<int>> diag;

        // Step 1: Group elements by diagonal (key = i - j)
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                diag[i - j].push_back(grid[i][j]);
            }
        }

        // Step 2: Sort diagonals
        for (auto &d : diag) {
            if (d.first >= 0)
                sort(d.second.begin(), d.second.end(), greater<int>()); // descending
            else
                sort(d.second.begin(), d.second.end()); // ascending
        }

        // Step 3: Fill the grid from FRONT of each deque
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                grid[i][j] = diag[i - j].front();
                diag[i - j].pop_front();
            }
        }

        return grid;
    }
};

class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long total = 0;

        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                total += grid[i][j];
            }
        }

        if (total % 2 != 0)
            return false;

        long long prefix = 0;
        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n; j++) {
                prefix += grid[i][j];
            }

            if (prefix * 2 == total)
                return true;
        }
        prefix = 0;

        for (int j = 0; j < n - 1; j++) {
            for (int i = 0; i < m; i++) {
                prefix += grid[i][j];
            }

            if (prefix * 2 == total)
                return true;
        }

        return false;
    }
};
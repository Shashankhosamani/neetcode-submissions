class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rl = 0;
        int rr = matrix.size() - 1;
        int susrow = 0;
        while (rl <= rr) {
            int mid = rl + (rr - rl) / 2;
            if (matrix[mid][0] <= target && target <= matrix[mid].back()) {
                susrow = mid;
                break;
            } else if (matrix[mid][0] < target) {
                rl = mid + 1;
            } else {
                rr = mid - 1;
            }
        }

        int cl = 0;
        int ce = matrix[0].size() - 1;
        int mid = 0;
        while (cl <= ce) {
            mid = cl + (ce - cl) / 2;
            if (matrix[susrow][mid] == target)
                return true;
            else if (matrix[susrow][mid] < target) {
                cl = mid + 1;
            } else {
                ce = mid - 1;
            }
        }

        return false;
    }
};


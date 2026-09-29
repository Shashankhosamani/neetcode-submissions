class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            set<char> rowset;
            for (int j = 0; j < board.size(); j++) {
                if (board[i][j] == '.') {
                    continue;
                } else if (rowset.find(board[i][j]) != rowset.end()) {
                    return false;
                } else {
                    rowset.insert(board[i][j]);
                }
            }
        }

        for (int i = 0; i < board.size(); i++) {
            set<char> colset;
            for (int j = 0; j < board.size(); j++) {
                if (board[j][i] == '.') {
                    continue;
                } else if (colset.find(board[j][i]) != colset.end()) {
                    return false;
                } else {
                    colset.insert(board[j][i]);
                }
            }
        }

        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                set<char> boxset;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char cell = board[row * 3 + i][col * 3 + j];
                        if (cell == '.') {
                            continue;
                        } else if (boxset.find(cell) != boxset.end()) {
                            return false;
                        } else {
                            boxset.insert(cell);
                        }
                    }
                }
            }
        }

        return true;
    }
};

class Solution {
public:

    bool checkBox(vector<vector<char>>& board, int sr, int sc) {
        set<char> s;

        for (int r = sr; r < sr + 3; r++) {
            for (int c = sc; c < sc + 3; c++) {

                if (board[r][c] == '.')
                    continue;

                if (s.find(board[r][c]) != s.end())
                    return false;

                s.insert(board[r][c]);
            }
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {

        // Rows
        for (int row = 0; row < 9; row++) {
            set<char> s;

            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.')
                    continue;

                if (s.find(board[row][col]) != s.end())
                    return false;

                s.insert(board[row][col]);
            }
        }

        // Columns
        for (int col = 0; col < 9; col++) {
            set<char> s;

            for (int row = 0; row < 9; row++) {
                if (board[row][col] == '.')
                    continue;

                if (s.find(board[row][col]) != s.end())
                    return false;

                s.insert(board[row][col]);
            }
        }

        // 3x3 boxes
        for (int r = 0; r < 9; r += 3) {
            for (int c = 0; c < 9; c += 3) {

                if (!checkBox(board, r, c))
                    return false;
            }
        }

        return true;
    }
};
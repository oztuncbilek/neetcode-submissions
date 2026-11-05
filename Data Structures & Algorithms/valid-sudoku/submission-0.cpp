class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {


        for (int row = 0; row < 9; row++) {
            unordered_set<char> seen;

            for (int column = 0; column < 9; column++) {
                char value = board[row][column];

                if (value == '.') {
                    continue;
                }

                if (seen.count(value)) {
                    return false;
                }

                seen.insert(value);
            }
        }


        for (int column = 0; column < 9; column++) {
            unordered_set<char> seen;

            for (int row = 0; row < 9; row++) {
                char value = board[row][column];

                if (value == '.') {
                    continue;
                }

                if (seen.count(value)) {
                    return false;
                }

                seen.insert(value);
            }
        }

    
        for (int boxRow = 0; boxRow < 9; boxRow += 3) {
            for (int boxColumn = 0; boxColumn < 9; boxColumn += 3) {
                unordered_set<char> seen;

                for (int row = boxRow; row < boxRow + 3; row++) {
                    for (
                        int column = boxColumn;
                        column < boxColumn + 3;
                        column++
                    ) {
                        char value = board[row][column];

                        if (value == '.') {
                            continue;
                        }

                        if (seen.count(value)) {
                            return false;
                        }

                        seen.insert(value);
                    }
                }
            }
        }

        return true;
    }
};
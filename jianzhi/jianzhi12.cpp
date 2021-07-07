#include "thehead.h"

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        this->board = board;
        this->word = word;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (check(i, j, 0)) return true;
            }
        }
        return false;
    }
private:
    vector<vector<char>> board;
    string word;
    bool check(int x, int y, int index) {
        if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size() || board[x][y] != word[index]) return false;
        if (index == word.size() - 1) return true;
        board[x][y] = '#';
        if (check(x - 1, y, index + 1) || check(x + 1, y, index + 1)
            || check(x, y - 1, index + 1) || check(x, y + 1, index + 1)) return true;
        board[x][y] = word[index];
        return false;
    }
};
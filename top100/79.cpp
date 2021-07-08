#include "thehead.h"

class Solution {
public:
    vector<vector<char>> board;
    string word;
    int m, n;
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size(), n = board[0].size();
        this->board = board;
        this->word = word;
        vector<vector<bool>> visited (m, vector<bool> (n, false));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (find(i, j, 0, visited)) return true;
            }
        }
        return false;
    }

    bool find(int x, int y, int index, vector<vector<bool>>& visited) {
        if (x < 0 || x >= m || y < 0 || y >= n ||  visited[x][y] || board[x][y] != word[index]) return false;
        if (index == word.size()-1) return true;
        visited[x][y] = true;
        bool ans = find(x-1, y, index+1, visited) ||
                   find(x+1, y, index+1, visited) ||
                   find(x, y-1, index+1, visited) ||
                   find(x, y+1, index+1, visited);
        visited[x][y] = false;
        return ans;
    }
}; 
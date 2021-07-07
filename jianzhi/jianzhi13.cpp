#include "thehead.h"

class Solution {
public:
    int movingCount(int m, int n, int k) {
        this->m = m;
        this->n = n;
        this->k = k;
        vector<vector<bool>> visited(m, vector<bool>(n, 0));
        this->visited = visited;
        int ans = 0;
        ans = recur(0, 0);
        return ans;
    }
private:
    int m, n, k;
    vector<vector<bool>> visited;
    int get(int x) {
        int sum = 0;
        while (x != 0) {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }

    int recur(int x, int y) {
        if (x >= m || y >= n || visited[x][y] || get(x) + get(y) > k) return 0;
        visited[x][y] = true;
        return recur(x + 1, y) + recur(x, y + 1) + 1;
    }
};
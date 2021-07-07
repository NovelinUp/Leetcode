#include "thehead.h"

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if (m == 0) return;
        int n = matrix[0].size();
        int i = 0, j = m-1;
        while (i < j) {
            for (int k = 0; k < n; k++) {
                swap(matrix[i][k], matrix[j][k]);
            }
            i++;
            j--;
        }
        for (i = 0; i < m; i++) {
            for (j = i+1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};
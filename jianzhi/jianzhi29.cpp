#include "thehead.h"

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top, bottom, left, right;
        vector<int>ans;
        top = left = 0;
        if (matrix.empty()) return ans;
        bottom = matrix.size();
        right = matrix[0].size();
        int numbers = bottom * right;
        while (numbers != 0) {
            for (int i = left; i < right && numbers != 0; i++) {
                ans.push_back(matrix[top][i]);
                numbers--;
            }
            top++;
            for (int i = top; i < bottom && numbers != 0; i++) {
                ans.push_back(matrix[i][right - 1]);
                numbers--;
            }
            right--;
            for (int i = right - 1; i >= left && numbers != 0; i--) {
                ans.push_back(matrix[bottom - 1][i]);
                numbers--;
            }
            bottom--;
            for (int i = bottom - 1; i >= top && numbers != 0; i--) {
                ans.push_back(matrix[i][left]);
                numbers--;
            }
            left++;
        }
        return ans;
    }
};
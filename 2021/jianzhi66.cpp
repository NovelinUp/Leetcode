#include "thehead.h"

class Solution {
public:
    vector<int> constructArr(vector<int>& a) {
        vector<int> ans(a.size(), 1);
        for (int i = 1; i < a.size(); i++) {
            ans[i] = ans[i - 1] * a[i - 1];
        }
        int multi = 1;
        for (int i = ans.size() - 2; i >= 0; i--) {
            multi *= a[i + 1];
            ans[i] *= multi;
        }
        return ans;
    }
};
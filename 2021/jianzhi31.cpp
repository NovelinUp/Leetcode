#include "thehead.h"

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> in;
        for (int i = 0, j = 0; i < pushed.size() || j < popped.size();) {
            if (in.empty() || in.top() != popped[j]) {
                if (i == pushed.size()) break;
                in.push(pushed[i++]);
            }
            if (in.top() == popped[j]) {
                in.pop();
                j++;
            }
        }
        return in.empty();
    }
};
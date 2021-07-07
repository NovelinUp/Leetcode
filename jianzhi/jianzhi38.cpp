#include "thehead.h"

class Solution {
public:
    vector<string> ans;
    vector<string> permutation(string s) {
        recur(s, 0);
        return ans;
    }

    void recur(string s, int index) {
        if (index == s.size() - 1) {
            ans.push_back(s);
            return;
        }
        set<int> st;
        for (int i = index; i < s.size(); i++) {
            if (st.find(s[i]) != st.end()) continue;
            st.insert(s[i]);
            swap(s[i], s[index]);
            recur(s, index + 1);
            swap(s[i], s[index]);
        }
    }
};
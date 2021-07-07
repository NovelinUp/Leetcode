#include "thehead.h"

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> dic = {
            {'}', '{'},
            {']', '['},
            {')', '('}
        };
        for (char ch : s) {
            if (!dic.count(ch)) {
                st.push(ch);
            }
            else {
                if (!st.empty() && dic[ch] == st.top()) st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};
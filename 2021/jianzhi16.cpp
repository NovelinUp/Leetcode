#include "thehead.h"

class Solution {
public:
    vector<int> ans;
    string str = "0123456789";
    int n;
    int pos = 0;
    vector<int> printNumbers(int n) {
        string s = "";
        this->n = n;
        recur(s);
        return ans;
    }
    
    void recur(string s) {
        if (s.size() == n) {
            if (pos == 0) {
                pos = 1;
            }
            else ans.push_back(stoi(s));
            return;
        }
        for (int i = 0; i < str.size(); i++) {
            s += str[i];
            recur(s);  //下一个位置
            s.pop_back();
        }
    }
};
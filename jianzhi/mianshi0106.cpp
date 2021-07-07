#include "thehead.h"

class Solution {
public:
    string compressString(string S) {
        if (S.size() <= 2) return S;
        string s1 = "";
        int index = 0;
        while (index < S.size()-1) {
            int tmp = index;
            while (index < S.size()-1 && S[index] == S[index+1]) index++;
            index++;
            s1 += S[tmp];
            s1 += to_string(index - tmp);
        }
        if (s1.size() < S.size()) return s1;
        else return S;
    }
};
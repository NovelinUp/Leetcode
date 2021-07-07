#include "thehead.h"

class Solution {
public:
    string replaceSpaces(string S, int length) {
        int right = S.size()-1;
        int index = length-1;
        while (index >= 0) {
            if (S[index] != ' ') S[right] = S[index];
            else {
                S[right--] = '0';
                S[right--] = '2';
                S[right] = '%';
            }
            right--;
            index--;
        }
        return S.substr(right+1, S.size()-right+1);
    }
};
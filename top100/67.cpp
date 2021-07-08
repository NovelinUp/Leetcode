#include "thehead.h"

class Solution {
public:
    string addBinary(string a, string b) {
        int lena = a.size(), lenb = b.size();
        if (lena < lenb) {
            swap(a, b);
        }
        int indexa = a.size() - 1, indexb = b.size() - 1;
        int carry = 0;
        while (indexb >= 0) {
            int numa = a[indexa] - '0';
            int numb = b[indexb] - '0';
            a[indexa] = (numa + numb + carry)%2 + '0';
            carry = numa & numb;
            indexa--;
            indexb--;
        }
        while (indexa >= 0 && carry != 0) {
            int numa = a[indexa] - '0';
            a[indexa] = (numa + carry)%2 + '0';
            carry = (numa + carry)/2;
            indexa--;
        }
        if (indexa < 0 && carry != 0) {
            string ans = "1";
            ans += a;
            return ans;
        }
        return a;
    }
};
#include "thehead.h"
#include "jianzhi38.cpp"

int main()
{
    Solution so;
    string s = "abc";
    vector<string> ans;
    ans = so.permutation(s);
    for (auto str : ans) {
        cout << str << endl;
    }
    return 0;
}
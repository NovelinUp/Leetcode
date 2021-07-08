#include "thehead.h"
#include "139.cpp"

int main()
{
    Solution so;
    // vector<int> a = {1, 2, 3};
    // vector<string> s = {"eat", "tea", "tan", "ate", "nat", "bat"};
    // auto ans = so.groupAnagrams(s);
    // for (auto x : ans) {
    //     for (auto y : x)
    //         cout << y << " ";
    //     cout << endl;
    // }

    string s = "leetcode";
    vector<string> wordDict = {"leet", "code"};
    auto ans = so.wordBreak(s, wordDict);
    cout << ans << endl;
    return 0;
}
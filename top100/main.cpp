#include "thehead.h"
#include "56.cpp"

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

    vector<vector<int>> a = {{1, 4}, {4, 5}};
    auto ans = so.merge(a);
    for (auto a : ans) {
        for (auto b : a) {
            cout << b << " ";
        }
        cout << endl;
    }
    return 0;
}
#include "thehead.h"
#include "jianzhi16.cpp"

int main()
{
    Solution so;
    
    vector<int> ans = so.printNumbers(3);
    for (auto x : ans) {
        cout << x << " ";
    }

    return 0;
}
#include "thehead.h"
#include "jianzhi31.cpp"

int main()
{
    Solution so;
    
    vector<int> pushed = { 1, 2, 3, 4, 5 };
    vector<int> popped = { 4, 5, 3, 2 , 1 };
    if (so.validateStackSequences(pushed, popped)) cout << "OK" << endl;
    else cout << "not" << endl;
    return 0;
}
#include "thehead.h"

class Solution
{
public:
    bool oneEditAway(string first, string second)
    {
        int i = 0, j = first.size() - 1, k = second.size() - 1;
        while (i <= j && i <= k && first[i] == second[i])
        {
            ++i;
        }
        while (j >= 0 && k >= 0 && first[j] == second[k])
        {
            --j;
            --k;
        }
        if (j - i > 0 || k - i > 0)
            return false;
        return true;
    }
};
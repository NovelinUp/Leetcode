#include "thehead.h"

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> dic;
        for (int i = 0; i < nums.size(); i++)
        {
            if (dic.find(target - nums[i]) != dic.end())
            {
                return vector<int>{dic[target - nums[i]], i};
            }
            dic[nums[i]] = i;
        }
        return vector<int>{};
    }
};
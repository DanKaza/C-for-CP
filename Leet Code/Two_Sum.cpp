#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); ++i)
        {
            int complement = target - nums[i];
            if (seen.find(complement) != seen.end())
            {
                return {seen[complement], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    Solution solv;
    vector<int> nums = {3, 2, 4};
    cout << solv.twoSum(nums, 6)[0] << " " << solv.twoSum(nums, 6)[1];
    return 0;
}

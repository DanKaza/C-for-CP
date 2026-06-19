#include <iostream>
using namespace std;

class Solution
{
public:
    int climbStairs(int w)
    {
        if (w == 0 || w == 1)
        {
            return 1;
        }
        int av = 1, aur = 1;
        for (int i = 2; i <= w; i++)
        {
            int wakt = aur;
            aur = av + aur;
            av = wakt;
        }
        return aur;
    }
};

int main()
{
    Solution sol;
    cout << sol.climbStairs(2);
    return 0;
}

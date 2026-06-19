#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        cost.push_back(0); // Append 0 for the top step

        for (int i = n - 3; i >= 0; i--)
        {
            cost[i] += min(cost[i + 1], cost[i + 2]);
        }

        return min(cost[0], cost[1]);
    }
};
int main()
{
    vector<int> cost;
    int val;

    while (cin >> val)
    {
        cost.push_back(val);
        // Berhenti membaca jika user menekan Enter lalu Ctrl+Z (Windows) atau Ctrl+D (Linux/Mac)
        if (cin.peek() == '\n')
            break;
    }

    Solution sol;
    cout << sol.minCostClimbingStairs(cost) << endl; // Output hasil

    return 0;
}

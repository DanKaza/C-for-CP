#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int RAO = 0;
        int maxRAO = 0;

        for (int curV : nums)
        {
            int temp = max(maxRAO, RAO + curV);
            RAO = maxRAO;
            maxRAO = temp;
        }
        return maxRAO;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums;
    int var;
    while (cin >> var)
    {
        nums.push_back(var);
        if (cin.peek() == '\n')
            break;
    }
    // buat liat memori dan ping
    Solution sol;
    auto start = chrono::high_resolution_clock::now();
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
    cout << sol.rob(nums) << endl;
    cout << "Waktu eksekusi: " << duration.count() << " ms" << endl;
    return 0;
}
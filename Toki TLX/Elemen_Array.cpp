#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    vector<int> data;
    long long tj = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        data.push_back(x);
        tj += x;
    }
    for (int i = 0; i < n; i++)
    {
        long long hasil = tj - data[i];
        cout << hasil << "\n";
    }
    return 0;
}
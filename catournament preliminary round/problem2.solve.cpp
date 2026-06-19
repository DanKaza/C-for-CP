#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool pangkat2(long long n)
{
    return n > 0 && (n & (n - 1)) == 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    if (!(cin >> N))
        return 0;
    ///////////////////
    long long notal = 0;
    for (int i = 0; i < N; ++i)
    {
        long long a;
        cin >> a;
        notal += a;
    }
    if (pangkat2(notal))
    {
        cout << "YA" << endl;
    }
    else
    {
        cout << "TIDAK" << endl;
    }
    return 0;
}

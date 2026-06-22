#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    long long jumlah = 0;
    for (long long i = 1; i <= N; i++)
    {
        long long x;
        cin >> x;
        jumlah += x;
    }

    cout << jumlah << endl;
}
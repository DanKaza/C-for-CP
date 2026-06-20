#include <iostream>
#include <chrono>
using namespace std;

int faktorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * faktorial(n - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    auto start = chrono::high_resolution_clock::now();

    auto stop = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    cout << faktorial(12) << endl;
    cout << "Waktu eksekusi: " << duration.count() << " mikrodetik\n";
    return 0;
}

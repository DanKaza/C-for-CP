#include <iostream>
#include <chrono>
using namespace std;

int jumlah_digit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + jumlah_digit(n / 10);
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    auto start = chrono::high_resolution_clock::now();

    auto stop = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << jumlah_digit(1982304556) << endl;
    cout << "Waktu eksekusi: " << duration.count() << " mikrodetik\n";
    return 0;
}
#include <iostream>
#include <chrono>
using namespace std;

void cetak_menurun(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n << endl;
        cetak_menurun(n - 1);
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
    cetak_menurun(10);
    cout << "Waktu eksekusi: " << duration.count() << " mikrodetik\n";
    return 0;
}

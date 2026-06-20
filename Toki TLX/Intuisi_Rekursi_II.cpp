#include <iostream>
#include <string>
#include <chrono>
using namespace std;

int hitung_vokal(string s)
{
    if (s.empty())
    {
        return 0;
    }

    char c = s[0];
    if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
    {
        return 1 + hitung_vokal(s.substr(1));
    }
    else
    {
        return hitung_vokal(s.substr(1));
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
    cout << hitung_vokal("lorem ipsum dolor sit amet fermentum egestas luctus praesent torquent justo.") << endl;
    cout << "Waktu eksekusi: " << duration.count() << " mikrodetik\n";
    return 0;
}

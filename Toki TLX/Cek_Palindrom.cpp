#include <iostream>
#include <string>
#include <chrono>
using namespace std;

bool palindrom(string s)
{
    if (s.length() <= 1)
    {
        return true;
    }

    if (s[0] == s[s.length() - 1])
    {
        return palindrom(s.substr(1, s.length() - 2));
    }
    else
    {
        return false;
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
    cout << palindrom("") << endl;
    cout << palindrom("x") << endl;
    cout << palindrom("aa") << endl;
    cout << palindrom("ab") << endl;
    cout << palindrom("ini") << endl;
    cout << palindrom("itu") << endl;
    cout << palindrom("anna") << endl;
    cout << palindrom("ibu ratna antar ubi") << endl;
    cout << palindrom("rumah murah") << endl;
    cout << palindrom("aku suka rajawali bapak apabila wajar aku suka") << endl;
    cout << "waktu: " << duration.count() << " detik\n";
}

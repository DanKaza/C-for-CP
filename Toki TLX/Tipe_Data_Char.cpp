#include <iostream>
#include <string>
#include <chrono> // 1. Wajib sertakan library ini

using namespace std;

int main()
{
    // Optimasi I/O agar cetak layar tidak menghambat stopwatch
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibus tellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis ullamcorper hac odio imperdiet.";
    int total_vokal = 0;

    // 2. TEKAN TOMBOL START (Catat waktu mulai sebelum loop)
    auto start = chrono::high_resolution_clock::now();

    // Proses yang ingin dihitung waktunya
    for (char c : s)
    {
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
        {
            total_vokal++;
        }
    }
    // 3. TEKAN TOMBOL STOP (Catat waktu selesai tepat setelah loop)
    auto stop = chrono::high_resolution_clock::now();

    // 4. HITUNG SELISIH WAKTU
    // Kita ubah selisihnya ke dalam satuan mikrodetik (microseconds) agar lebih presisi dari milidetik
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    // Tampilkan hasil
    cout << "Total Vokal: " << total_vokal << "\n";
    cout << "Waktu eksekusi: " << duration.count() << " mikrodetik\n";
    return 0;
}

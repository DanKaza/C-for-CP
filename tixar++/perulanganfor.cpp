#include <iostream>  // memanggil library untuk input/output seperti cout dan cin
using namespace std; // menggunakan namespace std agar tidak perlu menulis std:: sebelum cout

int main()
{ // fungsi utama program
    for (int counter = 0; counter <= 10; counter++)
    {                                                // perulangan for, dimulai dari counter=0, berhenti ketika counter<10, bertambah 1 tiap iterasi
        cout << "Perulangan ke-" << counter << endl; // menampilkan teks "Perulangan ke-" diikuti nilai counter
    }

    return 0; // mengembalikan nilai 0 sebagai tanda program selesai dengan sukses
}

#include <iostream>  // memanggil library untuk input/output seperti cout dan cin
using namespace std; // menggunakan namespace std agar tidak perlu menulis std:: sebelum cout

int main()
{                      // fungsi utama program
    int counter = 0;   // inisialisasi variabel counter dengan nilai 0
    char ulangi = 'y'; // inisialisasi variabel ulangi dengan 'y' untuk memulai perulangan

    while (ulangi == 'y')
    { // perulangan while, akan terus berjalan selama ulangi bernilai 'y'
        cout << "ulang?" << endl;
        cout << "ya/tidak? : "; // menampilkan pertanyaan kepada pengguna
        cin >> ulangi;          // mengambil input dari pengguna untuk menentukan apakah akan mengulang

        counter++; // menambah nilai counter setiap kali perulangan terjadi
    }

    cout << "\n\n------------------------\n";
    cout << "Perulangan Selesai!" << endl;
    cout << "Kamu mengulang sebanyak " << counter << " kali" << endl; // menampilkan jumlah perulangan yang telah dilakukan

    return 0; // mengembalikan nilai 0 sebagai tanda program selesai dengan sukses
}

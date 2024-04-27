#include <iostream>
using namespace std;

int main() 
{
    int total_nilai = 0; int jumlah_nilai = 0; int nilai;
    cout << "Masukkan nilai (masukkan -1 untuk mengakhiri):\n";
    while (true) {
        cout << "Nilai ke-" << jumlah_nilai + 1 << ": ";
        cin >> nilai;
        if (nilai == -1) {
            break;
        }
        if (nilai < 0) {
            cout << "Error: Masukkan bilangan bulat positif.\n";
            continue;
        }
        total_nilai += nilai;
        jumlah_nilai++;
    }
    if (jumlah_nilai == 0) {
        cout << "Tidak ada nilai yang dimasukkan.\n";
    } else {
        double rata_rata = static_cast<double>(total_nilai) / jumlah_nilai;
        cout << "Nilai rata-rata: " << rata_rata << endl;
    }

    return 0;
}

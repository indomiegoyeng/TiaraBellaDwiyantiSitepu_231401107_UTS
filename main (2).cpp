#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Masukkan nilai (masukkan -1 untuk mengakhiri):  ";
    cin >> nilai;

    if (nilai >= 2 && nilai <= 10) {
        // Segitiga atas
        int i = 1;
        while (i <= nilai) {
            int j = 1;
            while (j <= i) {
                cout << "X ";
                j++;
            }
            cout << endl;
            i++;
        }

        // Segitiga bawah
        int i2 = 1;
        while (i2 <= nilai) {
            int spasi = 1;
            while (spasi <= nilai) {
                cout << "  ";
                spasi++;
            }

            int j2 = 2;
            while (j2 <= i2) {
                cout << "  ";
                j2++;
            }

            int k = nilai;
            while (k >= i2) {
                cout << "X ";
                k--;
            }

            cout << endl;
            i2++;
        }
    } else {
        cout << "Tidak ada nilai yang dimasukkan" << endl;
    }

    return 0;
}

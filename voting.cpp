#include <iostream>
using namespace std;

int main() {
    int tunai = 0, emoney = 0, qris = 0;
    int jumlah, pilihan;

    cout << "=== VOTING SISTEM PARKIR ===\n";
    cout << "Jumlah petugas voting: ";
    cin >> jumlah;

    for (int i = 1; i <= jumlah; i++) {
        cout << "\nPetugas ke-" << i << endl;
        cout << "1. Tunai\n2. E-Money\n3. QRIS\n";
        cout << "Pilih (1-3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: tunai++; break;
            case 2: emoney++; break;
            case 3: qris++; break;
            default: cout << "Pilihan tidak valid\n";
        }
    }

    cout << "\n=== HASIL VOTING ===\n";
    cout << "Tunai   : " << tunai << " suara\n";
    cout << "E-Money : " << emoney << " suara\n";
    cout << "QRIS    : " << qris << " suara\n";

    return 0;
}

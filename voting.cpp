#include <iostream>
#include <string>
using namespace std;

int main() {
    int tunai = 0, emoney = 0, Qris = 0;
    int jumlah, pilihan;

    cout << "==== VOTING SISTEM PARKIR====\n";
    cout << "jumlah petugas voting: ";
    cin >> jumlah;
    cin.ignore();

    for (int i = 1; i <= jumlah; i++) {
        cout << "\nPetugas k-" << i << endl;
        cout << "1. Tunai\n2. E-money\n3. Qris\n";
        cout << "(pilih 1-3): ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1) tunai++;
        else if (pilihan == 2) emoney++;
        else if (pilihan == 3) Qris++;
        else cout << "pilihan tidak valid\n";
    }
    cout << "\n==== HASIL VOTING====\n";
    cout << "Tunai  : " << tunai << " suara\n";
    cout << "E-money  : " << emoney << " suara\n";
    cout << "Qris  : " << Qris << " suara\n";

    return 0;
}
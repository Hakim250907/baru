#include <iostream>
#include <string>
using namespace std;

struct Kendaraan {
    string plat, jenis;
    int jamMasuk;
};

int cariData(Kendaraan p[], int jumlah, string plat) {
    for (int i = 0; i < jumlah; i++)
    if (p[i].plat == plat) return i;
    return -1;
}

int main() {
    const int MAX = 50;
    Kendaraan parkir[MAX];
    int jumlah = 0, pilihan;

    do {
        cout << "\n===== SISTEM MANAJEMEN PARKIR=====\n"
             << "1. tampilkan data kendaraan\n"
             << "2. Tampilkan semua data kendaraan\n"
             << "3. biaya parkir kendaran\n"
             << "4. hapus data kendaraan\n"
             << "5. keluar program\n"
             << "pilih: ";
        cin >> pilihan;
    

    switch (pilihan) {
        case 1:
            if (jumlah < MAX) {
                cout << "plat   : "; cin >> parkir[jumlah].plat;
                cout << "jenis  : "; cin >> parkir[jumlah].jenis;
                cout << "jamMasuk  : "; cin >> parkir[jumlah].jamMasuk;
                jumlah++;
            } else cout << "parkiran penuh:\n";
            break;

        case 2:
            for (int i = 0; i < jumlah; i++)
            cout << i+1 << ". " << parkir[i].plat << " | "
                 << parkir[i].jenis << " | "
                 << parkir[i].jamMasuk << endl;
        if (jumlah == 0) cout << "belum ada kendaraan.\n";
        break;

        case 3: {
            string plat; int keluar;
            cout << "plat: "; cin >> plat;
            int i = cariData(parkir, jumlah, plat);
            if (i == -1) break;

            cout << "jam Keluar: "; cin >> keluar;
            int lama = keluar - parkir[i].jamMasuk;
            int biaya = (parkir[i].jenis == "motor") ? lama * 2000 : lama * 5000;

            cout << "lama: " << lama << " jam\n";
            cout << "biaya: Rp " << biaya << endl;
            break;
        }

        case 4: {
            string plat;
            cout << "plat: "; cin >> plat;
            int i = cariData(parkir, jumlah, plat);
            if (i == -1) break;

            for (; i < jumlah - 1; i++)
                parkir[i] = parkir[i + 1];
            jumlah--;
            cout << "data dihapus.\n";
            break;
        }

        case 5:
        cout << "terima kasih.\n";
            break;
        } 
    } while (pilihan != 5);

    return 0;
}
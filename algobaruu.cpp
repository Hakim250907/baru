#include <iostream>
#include <string>
using namespace std;

struct K { string plat, jenis; int jam; };

int cari(K a[], int n, string plat){
    for(int i=0;i<n;i++) if(a[i].plat==plat) return i;
    return -1;
}

int main(){
    K a[50]; int n=0,pilih;
    do{
        cout<<"\n1.Masuk Kendaraan\n2.Tampilkan Data\n3.Hitung Biaya\n4.Hapus Data\n5.Keluar\nPilih: ";
        cin>>pilih;

        if(pilih==1){
            if(n<50){
                cout<<"Plat Jenis JamMasuk: ";
                cin>>a[n].plat>>a[n].jenis>>a[n++].jam;
            } else cout<<"Parkiran penuh\n";
        }
        else if(pilih==2){
            if(!n) cout<<"Data kosong\n";
            for(int i=0;i<n;i++)
                cout<<i+1<<" "<<a[i].plat<<" "<<a[i].jenis<<" "<<a[i].jam<<endl;
        }
        else if(pilih==3){
            string plat; int keluar;
            cout<<"Plat & Jam Keluar: ";
            cin>>plat>>keluar;
            int i=cari(a,n,plat);
            if(i>=0)
                cout<<"Biaya: Rp "
                    <<(keluar-a[i].jam)*(a[i].jenis=="motor"?2000:5000)
                    <<endl;
            else cout<<"Data tidak ditemukan\n";
        }
        else if(pilih==4){
            string plat; cout<<"Plat: ";
            cin>>plat;
            int i=cari(a,n,plat);
            if(i>=0){
                for(;i<n-1;i++) a[i]=a[i+1];
                n--; cout<<"Data dihapus\n";
            } else cout<<"Data tidak ditemukan\n";
        }
    } while(pilih!=5);
}

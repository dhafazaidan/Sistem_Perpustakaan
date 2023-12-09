#include <iostream>

using namespace std;

int pilih;

void Pilihan() {
    cout << "pilih :" << endl;
    cin >> pilih;
    }

void Case() {
    Pilihan();
    switch(pilih) {
        case 1:
        cout << "[1]. Input Buku" << endl;
        system("cls");
        break;
        case 2 :
        cout << "[2]. Info Buku" << endl;
        break;
        case 3 :
        cout << "[3]. Edit" << endl;
        break;
        case 4 :
        cout << "[4]. Hapus" << endl;
        break;
        case 5 :
        cout << "[5]. Peminjaman" << endl;
        break;
        case 6 :
        cout << "[6]. Keluar" << endl;
        break;
        default : 
        cout << "Input tidak valid, kembali ke menu...";
        system("pause");
        system("cls");
        Pilihan();
        break;



        }
    }

int main() {
    Case();
}

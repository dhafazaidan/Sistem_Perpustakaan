#include <iostream>

using namespace std;

void Pilihan() {
    cout << "pilih" << endl;
    int a;

    switch(a) {
        case 1:
        cout << "[1]. Input Buku" << endl;
        system("cls");
        break;
        case 2 :
        cout << "[2]. Detail Buku" << endl;
        break;
        case 3 :
        cout << "[3]. Edit" << endl;
        break;
        case 4 :
        cout << "[4]. Hapus" << endl;
        break;
        case 5 :
        cout << "[5]. Status Peminjaman" << endl;
        break;
        case 6 :
        cout << "[6]. Pencarian" << endl;
        break;
        default : 
        cout << "Input tidak valid, kembali ke menu...";
        system("cls");
        system("main0.exe");
        break;



        }
    }

int main() {
    Pilihan();
}

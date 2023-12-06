#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct buku
{
   int id;
   string judul;
   string pengarang;
   int jumlah;
};

buku bk;
int a;

void SimpanBuku() {
    fstream sdata;
    sdata.open("buku.txt" , ios::app);
    sdata << bk.id << endl;
    sdata << bk.judul << endl;
    sdata << bk.pengarang << endl;
    sdata << bk.jumlah << endl << endl;

    sdata.close();
    }

void Info() {
    ifstream tdata;
    tdata.open("buku.txt" , ios::app);
    tdata >> bk.id;
    tdata >> bk.judul;
    tdata >> bk.pengarang;
    tdata >> bk.jumlah;

    while(!tdata.eof) {
        cout << "ID BUKU \t :" << bk.id << endl;
        cout << "JUDUL BUKU \t :" << bk.judul << endl;
        cout << "PENGARANG BUKU \t :" << bk.pengarang << endl;
        cout << "STOK BUKU \t :" << bk.jumlah << endl;
    }
}

int main() {
    Info();
}
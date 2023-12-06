#include <iostream>
#include <thread>
#include <chrono>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <fstream>

using namespace std::chrono_literals;
using namespace std;





void Info() {
    ifstream tdata;
    tdata.open("buku.txt" , ios::app);
    tdata >> bk.id;
    tdata >> bk.judulBuku;
    tdata >> bk.pengarang;
    tdata >> bk.stokBuku;

    while(!tdata) {
        cout << "ID BUKU \t :" << bk.id << endl;
        cout << "JUDUL BUKU \t :" << bk.judulBuku << endl;
        cout << "PENGARANG BUKU \t :" << bk.pengarang << endl;
        cout << "STOK BUKU \t :" << bk.stokBuku << endl;

        tdata >> bk.id;
        tdata >> bk.judulBuku;
        tdata >> bk.pengarang;
        tdata >> bk.stokBuku;
    }

    tdata.close();
}


 cout<<"\n\n";

 //Percabangan untuk menentukan output berdasarkan level
 

system("cls");
    cout << endl;
    MainMenu();
    cout << "Pilih menu: ";
    cin >> menu1;

    switch(menu1) {
    
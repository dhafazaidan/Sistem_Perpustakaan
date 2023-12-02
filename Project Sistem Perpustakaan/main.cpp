#include <iostream>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <fstream>

using namespace std;

string data_login[2][3]={{"zdnahnf","$ly001","Admin"},{"haidar12","haidarganteng","User1"}};
string username, pass, level;
char ch;

struct buku {
int id;
string judulBuku;
string pengarang;
int stokBuku;
};

buku bk;
int menu1;

void SimpanBuku() {
 fstream sdata;
 sdata.open("buku.txt" , ios::app);
 sdata << bk.id << endl;
 sdata << bk.judulBuku << endl;
 sdata << bk.pengarang << endl;
 sdata << bk.stokBuku << endl << endl;

 sdata.close();
}

int main() {
    //Membuat tampilan output login
 login:
 cout<<"TUTOR-ALL PROGRAMMING"<<endl;
 cout<<"MULTILOGIN ARRAY 2 DIMENSI"<<endl;

 //Tampilan untuk menginput data
 cout<<"\nUsername : "; cin>>username;
 cout<<"\nPassword : "; ch=_getch();
 while(ch !=13){
  pass.push_back(ch);
  cout<<'*';
  ch = _getch();
 }

 //Perulangan untuk mengecek apakah data yang diinput sudah sesuai dengan data yang tersimpan
 for(int i =0; i<=1; i++){
  //Cek inputan dengan data yang disimpan
  if(data_login[i][0]==username && data_login[i][1]==pass){
   //Menyimpan data dari array ke variabel level
   level=data_login[i][2];
   break;
  }
 }
 cout<<"\n\n";

 //Percabangan untuk menentukan output berdasarkan level
 if(level=="Admin")
  cout<<"Anda login sebagai Admin Dhafa";
 else if(level=="User1")
  cout<<"Anda login sebagi User1: Haidar";
 else
  cout<<"Pengguna tidak ditemukan";

cout << endl << endl;

    cout << "------------------------------------" << endl;
    cout << ":::SISTEM PERPUSTAKAAN KELOMPOK 2:::" << endl;
    cout << "------------------------------------" << endl;
    cout << ": [1]. Input Buku (admin)          :" << endl;
    cout << "------------------------------------" << endl;
    cout << ": [2]. Detail Buku                 :" << endl;
    cout << "------------------------------------" << endl;
    cout << ": [3]. Edit                        :" << endl;
    cout << "------------------------------------" << endl;
    cout << ": [4]. Hapus                       :" << endl;
    cout << "------------------------------------" << endl;
    cout << ": [1]. Pinjam Buku                 :" << endl;
    cout << "------------------------------------" << endl;
    cout << ": [5]. Status Peminjaman           :" << endl;
    cout << "------------------------------------" << endl;
    cout << ": [6]. Pencarian                   :" << endl;
    cout << "------------------------------------" << endl << endl;

    cout << "Pilih menu: ";
    cin >> menu1;

    switch(menu1) {
    case 1 : {
    system("cls");
    cout << "=== Input Buku === " << endl;
    cout << "Masukkan ID Buku \t : ";
    cin >> bk.id;
    cout << "Masukkan Judul Buku \t : ";
    cin >> bk.judulBuku;
    cout << "Masukkan Nama Pengarang Buku \t : ";
    cin >> bk.pengarang;
    cout << "Masukkan Stok Buku \t : ";
    cin >> bk.stokBuku;

    SimpanBuku();

    break;
    }
    case 2 : {
    cout << "[2]. Detail Buku" << endl;
    break;
    }
    case 3 : {
    cout << "[3]. Edit" << endl;
    break;
    }
    case 4 : {
    cout << "[4]. Hapus" << endl;
    break;
    }
    case 5 : {
    cout << "[5]. Status Peminjaman" << endl;
    break;
    }
    case 6 : {
    cout << "[6]. Pencarian" << endl;
    break;
    }

    }
    return 0;
}

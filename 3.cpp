#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int Login() {
string data_login[2][3]={{"zdnahnf","$ly001","Admin"},{"haidar12","haidarganteng","User1"}};
string username, pass, level;
char ch;

 cout << endl << endl;   //Membuat tampilan output login
 cout<<"=== SILAHKAN LOGIN ==="<<endl;

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
 cout<<endl<<endl;

 if(level=="Admin") {
  cout << "====================================" << endl;
  cout<<"       Anda login sebagai Admin       " << endl;
  cout << "====================================" << endl;
  system("PAUSE");
  system("CLS");
 }
 else if(level=="User1") {
  cout << "====================================" << endl;
  cout <<"   Anda login sebagi User1: Haidar   " << endl;
  cout << "====================================" << endl;
  system("PAUSE");
  system("CLS");
 }
 else {
  cout << "====================================" << endl;
  cout<<"        Pengguna tidak ditemukan      " << endl;
  cout << "====================================" << endl;
  system("PAUSE");
  system("CLS");
  Login();
 }
}

 int main() {
    Login();
 }

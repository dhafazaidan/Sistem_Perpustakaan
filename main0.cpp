#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

char nama[20], dt[10], kode[10][10], jb[5][10], k[4],
daftar[5][100]={"Fiksi Fantasi","Fiksi Sejarah","Young Adult","Biografi","Sains Non-Fiksi"},
judul[5][100]={"Three Ways to Survive in a Ruined World","Malin Kundang","Lalaland","CR7 - The Biography","The Sains of Interstellar - Kip Thorne"};

int i, jd, a, b, c, d, e, jumlah[10],total[10];
    
//Membuat struct
struct tanggal{
  int DD, MM, YYYY;
};

//Terdapat objek pada tiap-tiap struct
struct tanggal brw, rtn, bts;

int charjadiint(char dt[10],int jd){
    jd=atoi(dt);
    return(jd);
}

void Rules();
    cout << "\n\n\n\t   Syarat Dan Ketentuan Peminjaman Buku:\n";
    cout << "\n\t1. Mengisi data peminjaman buku";
    cout << "\n\t2. Membayar tarif buku pinjaman yang telah ditentukan";
    cout << "\n\t3. Apabila terlambat mengembalikan buku 7 hari akan dikenakan denda Rp 1.000/hari dan untuk 30 hari setelahnya denda akan ditetapkan menjadi Rp 100.000";
    cout << "\n\t4. Harap menjaga buku dengan baik\n";
    cout << "\n\t*Uang tersebut akan dialokasikan untuk pembelian buku baru";


void Menu() {
    printf("==========================================================================================================\n\n");
    printf("                                          DAFTAR BUKU PERPUSTAKAAN         \n");
    printf("                                       K E L O M P O K  2  A L P R O            \n");
    printf("===========================================================================================================\n\n");

    printf("-----------------------------------------------------------------------------------------------------------\n");
    printf("|   KODE BUKU   |     JENIS BUKU      |                      NAMA BUKU                    |   TARIF BUKU  |\n");
    printf("-----------------------------------------------------------------------------------------------------------\n");
    printf("|     FF001     |    Fiksi Fantasi    |      Three Ways to Survive in a Ruined World      |   RP. 3.000   |\n");
    printf("|     FS002     |    Fiksi Sejarah    |                   Malin Kundang                   |   RP. 2.000   |\n");
    printf("|     NE003     |     Young Adult     |                     Lalaland                      |   RP. 5.000   |\n");
    printf("|     BG004     |      Biografi       |                 CR7 - The Biography               |   RP. 7.000   |\n");
    printf("|     SN005     |   Sains Non-Fiksi   |       The Sains of Interstellar - Kip Thorne      |   RP. 4.000   |\n");
    printf("-----------------------------------------------------------------------------------------------------------\n\n");
}

void Exit();

int main() {
    char choice = 0
    bool exitNow = false
    
    do{
    Rules();
    
    printf("\n\n\n\tNama Penyewa Buku : ");
    gets(nama);
    strupr(nama);
    system ("cls");

    Menu();

    printf("Nama Penyewa Buku             : %s \n", nama);

    printf("Masukkan Jumlah Transaksi     : ");
    gets(dt);

    jd=charjadiint(dt,jd);
    for (i=0;i<jd;i++){
        printf("\n\tBuku ke-%d ",i+1);
        printf("\n\tKode Buku [FF001, FS002, NE003, BG004, SN005]\t: "); gets(kode[i]);
        printf("\n\tJumlah Buku Yang Dipinjam\t            : "); gets(jb[i]);
        jumlah[i]=atoi(jb[i]);

        a=strcmp(kode[i],"FF001");
        if(a==0){
            total[i]=jumlah[i]*3000;
            k[i]=0;
         }

         b=strcmp(kode[i],"FS002");
         if(b==0){
            total[i]=jumlah[i]*2000;
            k[i]=1;
        }
        c=strcmp(kode[i],"NE003");
         if(c==0){
            total[i]=jumlah[i]*5000;
            k[i]=2;
        }
        d=strcmp(kode[i],"BG004");
         if(d==0){
            total[i]=jumlah[i]*7000;
            k[i]=3;
        }
        e=strcmp(kode[i],"SN005");
         if(e==0){
            total[i]=jumlah[i]*4000;
            k[i]=4;
        }
        else if(a<0, a>0, b<0,b>0, c<0, c>0, d<0, d>0, e<0, e>0){
            system ("cls");
            system("color 0C");
            printf("\n\n\ntMaaf Kode Buku Tidak Tersedia! Harap Masukan Entri Sesuai Kode Buku!\n\n");
            system ("pause");
            system ("cls");
            system("color 07");
            Menu();
            }
        }

        //Input tanggal peminjaman
    cout<<"\nTanggal Pinjam\n";
  while(1){
    cout<<"Tanggal [DD]             : "; cin>>brw.DD;
    if(brw.DD<=0||brw.DD>30){
      cout<<" Isikan data..\n";
    }else{break;}
  }
  while(1){
    cout<<"Bulan   [MM]             : "; cin>>brw.MM;
    if(brw.MM<=0||brw.MM>12){
      cout<<" Isikan data..\n";
    }else{break;}
  }
  while(1){
    cout<<"Tahun   [YYYY]           : "; cin>>brw.YYYY;
    if(brw.YYYY<=0){
      cout<<" Isikan data..\n";
    }else{break;}
  }


    //Input tanggal pengembalian
    cout<<"\nTanggal Kembali\n";
  while(1){
    cout<<"Tanggal [DD]             : "; cin>>rtn.DD;
    if(rtn.DD<=0||rtn.DD>30){
      cout<<" Isikan data..\n";
    }else{break;}
  }
  while(1){
    cout<<"Bulan   [MM]             : "; cin>>rtn.MM;
    if(rtn.MM<=0||rtn.MM>12){
      cout<<" Isikan data..\n";
    }else{break;}
  }
  while(1){
    cout<<"Tahun   [YYYY]           : "; cin>>rtn.YYYY;
    if(rtn.YYYY<=0){
      cout<<" Isikan data..\n";
    }else{break;}
  }

  //Proses untuk perhitungan denda
  int lamaPinjam=(rtn.DD-brw.DD)+((rtn.MM-brw.MM)*30)+((rtn.YYYY-brw.YYYY)*360);
  int terlambat=lamaPinjam-7;
  int denda=0;
  if(lamaPinjam>7){
    denda =terlambat*1000;
    if(lamaPinjam>30){
        denda = 100000;
    }
  }

  //Proses untuk perhitungan jatuh tempo pengembalian buku
  bts.DD = brw.DD+7;
  bts.MM = brw.MM+(bts.DD/31);
  bts.YYYY = brw.YYYY+(bts.MM/13);
  if(bts.DD>30){
    bts.DD-=30;
  }
  if(bts.MM>12){
    bts.MM-=12;
  }

    system("cls");
    system ("color 0E");

    printf("\nNama Penyewa Buku    : %s", nama);
    printf("\nJumlah Buku          : %s\n\n", dt);


    printf("-----------------------------------------------------------------------------------------\n");
    printf("| KODE BUKU |     JENIS BUKU      |       NAMA BUKU        |  JUMLAH BUKU |   SUBTOTAL  |\n");
    printf("-----------------------------------------------------------------------------------------\n");


    for (i=0;i<jd;i++){
    printf("   %5s         %11s         %13s        %7d     %10d    \n\n",&kode[i],&daftar[k[i]],&judul[k[i]],jumlah[i],total[i]);
    }


  cout<<"\n Tanggal Pinjam       : "<<brw.DD<<" / "<<brw.MM<<" / "<<brw.YYYY;
  cout<<"\n Tanggal Kembali      : "<<rtn.DD<<" / "<<rtn.MM<<" / "<<rtn.YYYY;
  cout<<"\n Tanggal Jatuh tempo  : "<<bts.DD<<" / "<<bts.MM<<" / "<<bts.YYYY;
  cout<<"\n Lama Peminjaman      : "<<lamaPinjam<<" hari";
  cout<<"\n Lama Keterlambatan   : "<<terlambat<<" hari";
  cout<<"\n Denda                : Rp."<<denda;
    do{
        cout<<"\n\nKembali ke Menu (N) atau Keluar (Y)?"<<endl;
        cin>>choice;
    }
    while( !(choice == 'n' & 'N' || choice == 'y' & 'Y') && cout<<"Invalid input!"<<endl);

    if(choice == 'y' & 'Y')
        exitNow = true;
} while (!exitNow);
Exit();

    system ("cls");
    system("color 07");
    return 0;
}
int SCase() {
    int choice = 0;
    bool repeat = false
    printf("============= SISTEM PERPUSTAKAAN KELOMPOK 2 =============\n");
    printf("[1]. PERATURAN\n");
    printf("[2]. INFO BUKU\n");
    printf("[3]. PEMINJAMAN BUKU\n");
    printf("[4]. KELUAR\n");
    
    cin >> choice;
    
    do {
    switch(choice) {
        case 1: 
            Rules();
            break;
        case 2:
            Menu();
            break;
        case 3:
            Process();
            break;
        case 4:
            Exit();
            break;
        default:
            cout << "Input Salah!";
            repeat = true
            break;
    } while (!repeat)
    SCase();
}
        
void Exit() {
    printf("\n\n\n\t\tTERIMAKASIH, SAMPAI JUMPA KEMBALI \n",nama);
    printf("\n\t\t     MEMBACA MEMBUATMU BAHAGIA     \n");
}

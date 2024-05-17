#include<iostream>
using namespace std;

int main(){
    int absensi, tugas, uts, uas, nabsensi, ntugas, nuts, nuas, nilai;
    char jawab;

    cout<<"=========================================="<<endl;
    cout<<"          DAFTAR NILAI MAHASIWA           "<<endl;
    cout<<"=========================================="<<endl;

    do {
    cout<<"nilai absensi = ";
    cin>>absensi;
    cout<<"nilai tugas = ";
    cin>>tugas;
    cout<<"nilai uts = ";
    cin>>uts;
    cout<<"nilai uas = ";
    cin>>uas;

    nabsensi = absensi * 5/100;
    ntugas = tugas * 25/100;
    nuts = uts * 30/100;
    nuas = uas * 40/100;

    nilai = nabsensi + ntugas + nuts + nuas;

    if(nilai>=85&&nilai<=100){
        cout<<"anda mmendapat nilai A dengan total nilai ="<<nilai;
    }
    else if(nilai>=75&&nilai<=84){
        cout<<"anda mendapatkan nilai B dengan total nilai = "<<nilai;
    }
    else if(nilai>=65&&nilai<=74){
        cout<<"anda mendapatkan nilai c dengan total nilai = "<<nilai;
    }
    else if(nilai>=55&&nilai<=64){
        cout<<"anda mendapatkan nilai c dengan total nilai = "<<nilai;
    }
    else if(nilai<=54){
        cout<<"MAAF ANDA HARUS MENGULLANG KARENA NILAI ANDA = "<<nilai<<" JAUH DI BAWAH KKM";
    }

    cout<<endl<<endl;
    cout<<"apakah anda ingin mencoba lagi?, ketik ya ketik Y = ";cin>>jawab;

  }while (jawab=='y'); //control menggunakan string
  cout<<endl;
    return 0;

}
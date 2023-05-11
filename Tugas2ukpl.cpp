#include <iostream>
#include <windows.h>
using namespace std;


struct nilaiMhs
{
    int NoMhs;
    string Nama;
    string MTKul;
    int nilaiAkhir;
};

int main()
{
    string username, password;
    int i,m;
    int pilih;
    int nilaiRaw;
    nilaiMhs mhs[10];

    for (int attempts = 0; attempts <= 2; attempts++)
    {
        system("cls");
        cout<<"Enter your username: ";
        cin>>username;
        cout<<"Enter your password: ";
        cin>>password;
        if (username == "user" && password == "pass")
        {
            cout<<"Successful login."<<endl;
            system("pause");
            ulang :
            system("cls");
            cout<<"========================"<<endl;
            cout<<"       Menu Utama"<<endl;
            cout<<"========================"<<endl;
            cout<<" 1. Input Nilai"<<endl;
            cout<<" 2. Lihat Data"<<endl;
            cout<<" 3. Keluar"<<endl;
            cout<<"========================"<<endl;
            cout<<" Pilih : "; cin>>pilih;
            switch(pilih){
                case 1:
                    system("cls");
                    cout<<"Banyaknya Mahasiswa = "; cin>>m;
                    system("cls");

                    cout<<"========================"<<endl;
                    cout<<" Input Data Nilai Akhir"<<endl;
                    cout<<"========================"<<endl;
                    for (i=0;i<m;i++)
                    {
                        cout<<"Data Mahasiswa ke-"<<i+1<<endl;
                        cout<<"No.Mhs           : "; cin>>mhs[i].NoMhs;
                        cin.ignore();
                        cout<<"Nama             : "; getline(cin,mhs[i].Nama);
                        cout<<"Matakuliah       : "; getline(cin,mhs[i].MTKul);
                        inputUlang:
                        cout<<"Nilai Akhir      : "; cin>>nilaiRaw;
                        if (nilaiRaw>0 && nilaiRaw<=100){
                            mhs[i].nilaiAkhir = nilaiRaw;
                            cout<<"Data tersimpan!"<<endl<<endl;
                        }
                        else{
                            cout<<"================================================"<<endl;
                            cout<<" NIlai tidak valid, masukkan nilai 1 hingga 100"<<endl;
                            cout<<"================================================"<<endl;
                            goto inputUlang;
                        }
                    }
                    break;

                case 2:
                    system("cls");
                    for (i=0;i<m;i++)
                    {
                        cout<<"No.Mhs           : "<<mhs[i].NoMhs<<endl;
                        cout<<"Nama             : "<<mhs[i].Nama<<endl;
                        cout<<"Matakuliah       : "<<mhs[i].MTKul<<endl;
                        cout<<"Nila Akhir       : "<<mhs[i].nilaiAkhir<<endl<<endl;
                    }
                    system("pause");
                    break;
                case 3:
                    return 0;
                    break;
            }
            goto ulang;
            return 0; // biar ga ngulang
        }
        else
            cout<<"Unsuccessful login."<<endl;
            system("pause");
    }
    cout<<"=========================="<<endl;
    cout<<" MAXIMUM ATTEMPTS REACHED."<<endl;
    cout<<"=========================="<<endl;
    system("pause");
    return 0;
}


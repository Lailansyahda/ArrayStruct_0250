#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    string alamat;
};

int main()
{
    //membuat object struct
    Mahasiswa mhs;

    cout << "Masukkan nim = " ;
    cin >> mhs.nim;
    cout << "Masukkan nama = " ;
    cin >> mhs.nama;
    cout << "Masukkan alamat = " ;
    cin >> mhs.alamat;
    
    cout << endl;
    cout << "Menampilkan Data" << endl;
    cout << endl;

    cout << "NIM = " << mhs.nim << endl;
    cout << "Nama = " << mhs.nama << endl;
    cout << "Alamat = " << mhs.alamat << endl;
}
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
    
}
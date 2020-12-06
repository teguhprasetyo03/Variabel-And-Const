#include <iostream>
 
using namespace std;
// mayoritas ketika mendeklarasikan const dengan keyword
// define menggunakan huruf besar, tetapi bisa juga 
// menggunakan huruf kecil
#define PANJANG 10
#define LEBAR 20
#define youtube "www.youtube.com"
#define ipk 3.50
 
int main(){
    
    // deklarasi variabel
    int hasil;
    double ipk;
    char kelas;
    string kegiatan;
    string nama_depan;
    string nama_belakang;
    
    // inisiasi
    hasil = 22,8;
    
    // diubah
    hasil = 40;
    ipk = 3.55;
    
    ipk = 2.75;

    kelas = 'B';
    kegiatan = "Membuat Masakan Padang";
    nama_depan = "Andi";
    nama_belakang = "Alfian";
    
    cout << hasil << endl;
    cout << ipk << endl;
    cout <<  kelas << endl;
    cout <<  kegiatan << endl;
    cout <<  nama_depan << endl;
    cout <<  nama_belakang<< endl;
    
    jika variabel memiliki tipe data sama, misal : int
        int a,b,c,x,y,z;
        
        // opsi pertama
        a = 20;
        b = 30;
        c = a+b;
        double  d = c/a;
        
        // opsi kedua
        x = 10, y = 25;
        z = x*y;
        
        // menampilkan opsi pertama    
      cout << a << endl;
      cout << b << endl;
      cout << "Hasil dari Penjumlahan A dan B adalah " << c ;
      cout <<  "\n";
      cout << "Hasil dari Pembagian C dan A adalah " << d ;
       
       
      // menampilkan opsi kedua
      cout <<  "\n";
      cout << x << endl;
      cout << y << endl;
      cout << "Hasil dari Perkalian X dan Y adalah " << z;
       
    cout << "PANJANG = " << PANJANG;
    cout <<  "\n";
    
    cout << "LEBAR = " << LEBAR;
    cout <<  "\n";
    
    cout << "LUAS (panjang*lebar) = " << PANJANG*LEBAR;
    cout <<  "\n";
    
     cout << "Saya Sedang Menonton = " << youtube;
    cout <<  "\n";
    
    cout << "IPK YANG SAYA MILIKI = " << ipk;
    cout <<  "\n";
    
    const string instagram = "www.instagram.com";
    const int nilai = 70;
    const char kelas = 'A';
    // instagram = "www.facebook.com";
    
    cout << "WEBSITE INSTAGRAM ADALAH = " << instagram;
    cout <<  "\n";
    
    cout << "NILAI UJIAN SAYA = " << nilai;
    cout <<  "\n";
    
    cout << "KELASNYA ADALAH = " << kelas;
    cout <<  "\n";
    
    // ketika kita merubah nilai akan terjadi error
    // karena const hanya bisa di deklarasikan sekali 
    // dan nilainya tidak bisa diubah
    kelas = 'C';
    
    
  return 0;
}

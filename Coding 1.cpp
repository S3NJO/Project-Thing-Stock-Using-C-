#include <iostream>
#include <stdlib.h>
using namespace std;

class penambahanData{
private:
int stock;
	
public :
void Pensil ();
void Buku ();
void Penghapus ();	
};

void penambahanData::Pensil(){
int stock = 8, stockPensil, total;
cout<<"Masukkan Jumlah Stock Barang = "; cin>> stockPensil;
total = stock + stockPensil;
cout<<"Total Stock Pensil Adalah " << total<<endl;	
}

void penambahanData::Buku(){
int stock = 10, stockBuku, total;
cout<<"Masukkan Jumlah Stock Barang = "; cin>> stockBuku;
total = stock + stockBuku;
cout<<"Total Stock Buku Adalah " << total<<endl;	
}	

void penambahanData::Penghapus(){
int stock = 10, stockPenghapus, total;
cout<<"Masukkan Jumlah Stock Barang = "; cin>> stockPenghapus;
total = stock + stockPenghapus;
cout<<"Total Stock Penghapus Adalah " << total<<endl;	
}	

int main (int argc, char** argv){
int pilih;
cout<<"No. \t Nama Barang \t stock"<<endl;
cout<<"1. \t Pensil /t 8"<<endl;
cout<<"2. \t Buku \t 10"<<endl;
cout<<"3. \t Penghapus \t"<<endl;

cout<<"Pilih barang yang akan ditambah stocknya [1,2,3] = "; cin>>pilih;

if (pilih == 1){
penambahanData pensil;
pensil.Pensil();
cout<<"Terima Kasih"<<endl;	
}

if (pilih == 2){
penambahanData buku;
buku.Buku();
cout<<"Terima Kasih"<<endl;	
}

if (pilih == 3){
penambahanData penghapus;
penghapus.Penghapus();
cout<<"Terima Kasih"<<endl;	
}		

return 0;
system("PAUSE");
}

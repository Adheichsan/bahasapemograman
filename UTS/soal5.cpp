#include <iostream>
using namespace std;

int main(){
    float a,b,hasil;
    
    cout<<"Masukkan Angka Pertama =";
    cin>>a;
    cout<<"Masukkan Angka Kedua =";
    cin>>b;

    hasil = a+b;
    cout<<"Penjumlahan = "<<hasil<<endl;

    hasil = a-b;
    cout<<"Pengurangan = "<<hasil<<endl;

    hasil = a*b;
    cout<<"Perkalian = "<<hasil<<endl;

    hasil = a/b;
    cout<<"Pembagian = "<<hasil<<endl;

    return 0;
}
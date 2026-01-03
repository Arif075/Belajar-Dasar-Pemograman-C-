#include <iostream>
using namespace std;

int main(){
    int rumah_pertama = 20;
    int *alamat = &rumah_pertama;

    cout << "ini adalah uang dari dari rumah pertama: Rp." << rumah_pertama << ".000.000" << endl;
    cout << "ini adalah alamat dari rumah pertama: " << &rumah_pertama << endl;
    cout << "berdasarkan kertas, ini adalah nilai uang yang kita datangi ke rumah pertama: Rp." << *alamat << ".000.000" << endl;
    cout << "berdasarkan kertas ini, alamat rumah pertama disini: " << alamat << endl;  

    *alamat = 50;

    cout << "mulai baris ini, rumah pertama memiliki uang: Rp." << rumah_pertama << ".000.000" << endl;
    
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int rumah_pertama = 20;
    int *alamat = &rumah_pertama;

    cout << "ini adalah uang dari dari rumah pertama: Rp." << rumah_pertama << ".000.000" << endl;
    cout << "ini adalah alamat dari rumah pertama: " << &rumah_pertama << endl;
    cout << "berdasarkan kertas, ini adalah nilai uang yang kita datangi ke rumah pertama: Rp." << *alamat << ".000.000" << endl;
    cout << "berdasarkan kertas ini, alamat rumah pertama disini: " << alamat << endl << endl;  

    *alamat = 50;

    cout << "mulai baris ini, rumah pertama memiliki uang: Rp." << rumah_pertama << ".000.000" << endl << endl;

    int &b = *alamat;

    cout << "ini adalah uang dari rumah pertama dengan mode samaran: Rp." << b << ".000.000" << endl;
    cout << "ini adalah alamat dari rumah pertama dengan mode samaran: " << &b << endl << endl;

    *alamat = 80;
    
    cout << "mulai baris ini nilai uangnya sudah ditambah lagi" << endl;
    cout << "ini adalah uang dari dari rumah pertama: Rp." << rumah_pertama << ".000.000" << endl;
    cout << "ini adalah alamat dari rumah pertama: " << &rumah_pertama << endl;
    cout << "berdasarkan kertas, ini adalah nilai uang yang kita datangi ke rumah pertama: Rp." << *alamat << ".000.000" << endl;
    cout << "berdasarkan kertas ini, alamat rumah pertama disini: " << alamat << endl;  
    cout << "ini adalah uang dari rumah pertama dengan mode samaran: Rp." << b << ".000.000" << endl;
    cout << "ini adalah alamat dari rumah pertama dengan mode samaran: " << &b << endl;


    return 0;
}
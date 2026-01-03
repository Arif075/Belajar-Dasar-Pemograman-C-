#include <iostream>
using namespace std;

int main(){
    int rumah1 = 10;
    int *datar1 = &rumah1;

    cout << "rumah 1 memiliki uang sebanyak: Rp." << rumah1 << ".000.000" << endl;
    cout << "rumah 1 memiliki alamat rumah di " << &rumah1 << endl << endl;

    cout << "berdasarkan data, rumah 1 jika dikunjungi memiliki uang sebanyak: Rp." << *datar1 << ".000.000" << endl;
    cout << "berdasarkan data, jika kita kunjungi alamat " << datar1 << " maka kita akan sampai ke rumah 1" << endl << endl;

    int &benalu1 = *datar1;
    benalu1 = 20;

    cout << "menurut data gelap, rumah 1 sekarang memiliki uang: Rp." << benalu1 << ".000.000" << " karena dia punya benalu yang menambahkan uangnya" << endl;
    cout << "dan juga, benalu itu tinggal dialamat yang sama dengan rumah 1, yaitu :" << &benalu1 << endl;

    return 0;
}
#include <iostream>
#include <array>
using namespace std;

int main(){
    array <int, 5> a;

    for (int i = 0; i < a.size(); i++)
    {   a[i] = i;
        cout << "ini adalah array dari nilai[" << i << "], nilainya: " << a[i];
        cout << " dan alamatnya: " << &a[i] << endl;
    }

    //fungsi mengetahui jumlah data array
    cout << "jumlah array difile ini: " << a.size() << endl;
    //fungsi mengetahui alamat awal yang ditempati array
    cout << "alamat awalnya: " << a.begin() << endl;
    //fungsi mengetahui alamat akhir yang ditempati array
    cout << "alamat akhirnya: " << a.end() << endl; // satu setelah terakhir ya bukan terakhir dari arraynya
    //fungsi mengubah nilai melalui index [....]
    cout << "nilai dari a[4] adalah: " << a.at(4) << endl;
    cout << "nilai dari a[4] adalah: " << a[4] << endl; //sama saja tapi lebih mudah
    

    return 0;
}
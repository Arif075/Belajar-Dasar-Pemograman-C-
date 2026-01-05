#include <iostream>
#include <array>
using namespace std;

int main(){
    array <int, 10> nilai;

    for (int i = 0; i < nilai.size(); i++)
    {
        cout << "jumlah mahasiswa yang nilainya ";
        if (i == 0)//nilai index array pertama menampilkan 0-10
        {
           cout << "0-10: ";
        } else if (i == 9)
        {
            cout << "90-100: ";
        }
        
         else {//nilai index 1-9 menampilkan 11-100
            cout << (i*10)+1 << "-" << (i*10) + 10 << ": ";
        }
        cin >> nilai[i];
    }

    cout << endl << endl;
    cout << "grafik nilainya" << endl;
     for (int i = 0; i < nilai.size(); i++)
    {
        cout << "jumlah mahasiswa yang nilainya ";
        if (i == 0)//nilai index array pertama menampilkan 0-9
        {
           cout << "0-10: ";
        } else if (i == 9)
        {
            cout << "90-100: ";
        }
        
         else {//nilai index 1-9 menampilkan 10-90
            cout << (i*10)+1 << "-" << (i*10) + 10 << ": ";
        }
        for (int bintang = 0; bintang < nilai[i]; bintang++)
        {
            cout << "*"; // karena tidak mengambil input, maka menggunakan nilai for yang sebelumnya
        }
        cout << endl;
    }
    

    return 0;
}
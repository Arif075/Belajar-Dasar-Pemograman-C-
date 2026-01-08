#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t banyaknya = 15;

void angka(array <int, banyaknya> &haha){
    cout << "semua nilai arraynya: ";
    for (int &i : haha)
    {
        cout << i << " ";
    }
    
}

int main(){

    array <int, banyaknya> hasil = {12,46,24,2,5,7,2,6,8,3,6,8,9,4,2};

    angka(hasil);

    cout << endl << endl;
    int cari;
    bool ketemu;
   
    cout << "dari angka yang diatas kamu mau cari angka berapa:";
    cin >> cari;
    sort(hasil.begin(), hasil.end());
    ketemu = binary_search(hasil.begin(), hasil.end(), cari);
    int jumlah = count(hasil.begin(), hasil.end(), cari);
    if (ketemu)
    {
        cout << "angka yang kamu cari ada, yaitu sebanyak: " << jumlah << endl;
    } else{
        cout << "angka yang kamu cari tidak ada ya" << endl;
    }
    



    return 0;
}
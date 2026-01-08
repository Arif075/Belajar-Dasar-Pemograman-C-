#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t sizea = 10;

void printa(array <int, sizea> &bebas);
void printa(array <char, sizea> &bebas);

int main(){
    array <int, sizea> angka = {10,12,43,46,75,35,63,14,75,84};
    array <char, sizea> huruf = {'a','f','h','r','u','d','r','v','u','e'};

    printa(angka);
    printa(huruf);

    sort(angka.begin(),angka.end());
    printa(angka);
    sort(huruf.begin(),huruf.end());
    printa(huruf);

    return 0;
}

void printa(array <char, sizea> &bebas){
    cout << "nilai yang dikeluarkan: ";
    for (char &i : bebas)
    {
        cout << i << " ";
    }
    cout << endl;
}
void printa(array <int, sizea> &bebas){
    cout << "nilai yang dikeluarkan: ";
    for (int &i : bebas)
    {
        cout << i << " ";
    }
    cout << endl;
}
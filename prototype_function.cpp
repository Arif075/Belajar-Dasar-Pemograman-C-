#include <iostream>
using namespace std;

int luas(int a, int b);
int keliling(int a, int b);

void luasnya(int a, int b){
    cout << "luasnya adalah: " << luas(a,b) << endl;
}
void kelilingnya(int a, int b){
    cout << "kelilingnya adalah: " << keliling(a,b) << endl;
}

int main (){
    int panjang, lebar;

    cout << "panjang: ";
    cin >> panjang;
    cout << "lebar: ";
    cin >> lebar;
    luasnya(panjang,lebar);
    kelilingnya(panjang,lebar);

    return 0;
}

int luas(int a, int b){
    return a * b;
}
int keliling(int a, int b){
    return 2 * (a + b);
}
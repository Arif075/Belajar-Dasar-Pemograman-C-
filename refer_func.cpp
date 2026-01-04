#include <iostream>
using namespace std;

void refer(int &a){
    a = a * a;
}

int nyoba(int &a){
    return a * a;
}

int& coba(int &a){
    return a;
}

int main(){
    int a = 5;
    cout << "nyoba manggil nilai a aja: " << a << endl;
    cout << "nyoba manggil alamat a aja: " << &a << endl;

    refer(a);

    cout << "nyoba manggil nilai refer aja: " << a << endl;
    cout << "nyoba manggil alamat refer aja: " << &a << endl;

    int &b = coba(a);

    cout << "nyoba manggil nilai versi fungsi return: " << nyoba(a) << endl;
    cout << "nyoba manggil alamat versi fungsi return: " << &b << endl;
    cout << "nyoba manggil nilai versi fungsi return refer lebih ribet: " << b << endl;


    return 0;
}

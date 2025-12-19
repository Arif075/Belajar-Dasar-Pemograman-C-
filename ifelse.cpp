#include <iostream>

using namespace std;

int main () {
    float a, b;
    char aritmatika;

    cout << "masukkan nilai pertama =";
    cin >> a;
    cout << "pilih salah satu operator : ( + - * /)";
    cin >> aritmatika;
    cout << "masukkan nilai kedua =";
    cin >> b;

    if (aritmatika == '+')
    {
        cout << a << " + " << b << " = " << a+b;
    } else if (aritmatika == '-')
    {
        cout << a << " - " << b << " = " << a-b;
    } else if (aritmatika == '*')
    {
        cout << a << " * " << b << " = " << a*b;
    } else if (aritmatika == '/')
    { if (b == 0) {
        cout << "tidak bisa membagi dengan angka nol";
    } else {
        cout << a << " / " << b << " = " << a/b;
        }
    } else {
        cout << "operator yang kamu masukkan tidak sesuai";
    }

    cin.get ();
    return 0;
}
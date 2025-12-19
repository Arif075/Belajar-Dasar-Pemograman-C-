#include <iostream>

using namespace std;

int main () {
    double a, b;
    char aritmatika;

    cout << "masukkan nilai pertama =";
    cin >> a;
    cout << "pilih salah satu operator : ( + - * / %)";
    cin >> aritmatika;
    cout << "masukkan nilai kedua =";
    cin >> b;

    switch (aritmatika)
    {
    case '+':
        cout << a << " + " << b << " = " << a+b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a-b;
        break;
    case '*':
        cout << a << " * " << b << " = " << a*b;
        break;
    case '/':
        if (b == 0)
        {
            cout << "tidak bisa membagi dengan angka nol";
        } else {
            cout << a << " / " << b << " = " << a/b;
        } 
        break;
    default:
        cout << "operator yang anda masukkan tidak sesuai";
        break;
    }

    cin.get ();
    return 0;
}
#include <iostream>

using namespace std;

int main () {

    int a;

    cout << "masukkan angka bebas yang penting diatas 0 = ";
    cin >> a;

    do
    {
        
        cin >> a;
        if (a > 0)
        {
            cout << "angka yang kamu masukkan sudah benar" << endl;
        } else {
            cout << "nilai yang kamu masukkan salah, mohon ulangi lagi" << endl;
        }
        
    } while (a <= 0);
    
}
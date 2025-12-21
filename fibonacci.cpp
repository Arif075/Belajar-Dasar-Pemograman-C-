#include <iostream>

using namespace std;

int main() {
    int n, f_n, f_n1 = 1, f_n2 = 0;
    f_n = f_n1 + f_n2;

    cout << "ini adalah program deret Finonacci \n";
    cout << "masukkan nilai suku ke-n yang kamu mau = ";
    cin >> n;
    cout << f_n << " ";

    for (int i = 1; i < n; i++)
    {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        
        cout << f_n << " ";
    }
    
}
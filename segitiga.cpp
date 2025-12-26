#include <iostream>
using namespace std;

int main () {

    int n;
    // int n untuk suku ke-n
    // int i untuk membuat baris
    // int b untuk bintang
    // int s untuk spasi

    cout << "selamat datang diproyek segitiga" << endl;
    cout << "silahkan masukkan suku ke-n untuk membuat segitiga = ";
    cin >> n;

    cout << "pola segitiga pertama" << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int b = 1; b <= i; b++)
        {
            cout << "*";
        }
        cout << endl;
    }
     
    cout << "pola segitiga kedua" << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int b = n; b >= i; b--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "pola segitiga ketiga" << endl;

    for (int i = 0; i < n; i++)
    {   
        for (int s = 0; s < i; s++)
        {
            cout << " ";
        }
        
        for (int b = n; b > i; b--)
        {
        cout << "*";
        }
        cout << endl;
    }

    cout << "pola segitiga keempat" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        for (int s = n; s > i; s--)
        {
            cout << " ";
        }
        for (int b = 0; b < i; b++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "pola segitiga kelima" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        for (int s = n; s > i; s--)
        {
            cout << " ";
        }
        for (int b = 0; b < (i * 2 - 1); b++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    cout << "pola segitiga keenam" << endl;

    for (int i = 1; i <= n; i++)
    {   
        for (int s = 2; s <= i; s++)
        {
            cout << " ";
        }
        
        for (int b = n; b >= (i * 2 - 5); b--)
        {
        cout << "*";
        }
        cout << endl;
    }

     cout << "pola segitiga ketujuh" << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int s = n; s > i; s--)
        {
            cout << " ";
        }
        for (int b = 0; b < (i * 2 - 1); b++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {   
        for (int s = 2; s <= i; s++)
        {
            cout << " ";
        }
        
        for (int b = n; b >= (i * 2 - 5); b--)
        {
        cout << "*";
        }
        cout << endl;
    }


    return 0;
}

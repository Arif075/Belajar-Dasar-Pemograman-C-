#include <iostream>
#include <string>
using namespace std;

void hai(const string &a, int jumval){
    for (int i = 0; i < a.length();i++)
    {
        cout << a[i] << " ";
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'u' || a[i] == 'o')
        {
            jumval++;
        }
        
    }
    cout << endl;
    cout << "jumlah huruf vokal dari kalimat yang kamu masukkan ialah :" << jumval << endl;
}

int main(){
    string kata;
    int jumlahnya;
    
    cout << "silahkan masukkan sebuah kalimat: ";
    getline(cin, kata);
    hai(kata, jumlahnya);

    return 0;
}
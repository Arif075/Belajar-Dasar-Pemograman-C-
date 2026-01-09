#include <iostream>
#include <string>
using namespace std;

int main(){
    string namamu;
    cout << "masukkan nama panggilanmu: ";
    cin >> namamu;
    cout << "namamu panggilanmu adalah: " << namamu << endl;
    cin.ignore();
    cout << "sekarang masukkan nama panjang kamu: ";
    getline(cin, namamu);
    cout << "nama panjang kamu adalah: " << namamu << endl;
    
    return 0;
}

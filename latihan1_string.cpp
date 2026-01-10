#include <iostream>
#include <string>
using namespace std;

string hallo(const string &abcd);
void berhasil(string &b); 

int main(){
    string nama;
    cout << "masukkan nama kamu: ";
    getline(cin, nama);
    berhasil(nama);

    return 0;
}

string hallo(const string &abcd){
    string hasil;
    for (int i = 0; i < abcd.length(); i++)
    {
        hasil += abcd[i];
        if (i != abcd.length() - 1)
        {
            hasil += " ";
        }
    }
    return hasil;
}
void berhasil(string &b){
    cout << "nama kamu adalah: ";
    for (char i : b)
    {
        cout << i;
    }
    cout << endl;
    cout << "ejaan dari namamu: " << hallo(b) << endl;
    cout << "jumlah Namamu: " << b.length() << endl;
    if (b.find("a") != string::npos){
    cout << "namamu mengandung 'a' kecil";
}

}
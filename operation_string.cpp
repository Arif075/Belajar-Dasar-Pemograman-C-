#include <iostream>
#include <string>
using namespace std;

void ulang(string &hello);
string hai(const string &eja);
void ulang1(string &hasil);


int main(){
    //Type data String
    string nama("Ucup");
    ulang(nama);
    ulang1(nama);

    //Menambahkan kata 
    string nama2("Namaku " + nama + " Bin"); //cara ke-1
    cout << nama2 << endl;

    string nama3(" Markucup"); // cara ke-2
    nama2.append(nama3);
    cout << nama2 << endl;

    string nama4("Markucup, "); // cara ke-2 nyoba
    nama4.append(nama2);
    cout << nama4 << endl;

    string nama5("haha");
    nama4 += " " + nama5;
    cout << nama4 << endl;

    return 0;
}

void ulang(string &hello){
    cout << "namanya ialah: ";
    for (char i : hello)
    {
        cout << i;
    }
    cout << endl;
}

void ulang1(string &hasil){
    cout << "jika namanya dieja menjadi: " << hai(hasil) << endl;}

string hai(const string &eja){
    string hasil;
    for (int i = 0; i < eja.length(); i++)
    {
        hasil += eja[i];
        if (i != eja.length() - 1){
            hasil += " ";
        }
    }
    return hasil;
}
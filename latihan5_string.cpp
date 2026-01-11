#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void hasil(string &name){
    cout << "nama kamu adalah: ";
    for (char &i : name)
    {   if (i == ' ')
        {
            i = '_';
        }
        
        cout << char(tolower(i));
    }
    
}

int main(){
    string nama;

    cout << "silahkan masukkan nama kamu: ";
    getline(cin, nama);
    hasil(nama);

    return 0;
}
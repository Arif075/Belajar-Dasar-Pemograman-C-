#include <iostream>
#include <string>
using namespace std;

int main(){
    string sifat;

    cout << "silahkan masukkan kalimat bebas asal sopan: ";
    getline(cin, sifat);

    size_t temukan = sifat.find("bodoh");
    size_t temukan1 = sifat.find("jelek");
    size_t temukan2 = sifat.find("malas");

    if (temukan != string::npos)
    {
        cout << "kalimat yang kamu masukkan mengandung kata tidak sopan yaitu bodoh " << endl;
    } else if (temukan1 != string::npos){
        cout << "kalimat yang kamu masukkan mengandung kata tidak sopan yaitu jelek " << endl;
    } else if (temukan2 != string::npos)
    {
        cout << "kalimat yang kamu masukkan mengandung kata tidak sopan yaitu malas " << endl;
    } else{
        cout << "kalimat yang kamu masukkan aman" << endl;
    }

    return 0;
}
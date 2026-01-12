#include <iostream>
#include <string>
using namespace std;

void fungsi1(string jumkar, int spasi, int kata);
string fungsi2(string &ejaan);
void fungsi3(string &strip){
    cout << "kalimatmu versi spasi dan strip: ";
    for (char &i : strip)
    {
        if (i == ' ')
        {
            i = '_';
        }
        
    }
    cout << fungsi2(strip) << endl;
    
}


int main(){
    //fitur 1 (info teks)
    string kata;
    int jumspa, jumkat;

    cout << "silahkan masukkan kalimat: ";
    getline(cin, kata);
    fungsi1(kata, jumspa, jumkat);
    cout << "ejaan dari namamu: " << fungsi2(kata) << endl;
    fungsi3(kata);

    return 0;
}

void fungsi1(string jumkar, int spasi, int kata){
    cout << "panjang karakter kalimatmu: " << jumkar.length() << endl;
    int posisi;
    while (true)
    {
        posisi = jumkar.find(" ", posisi);
        spasi++;
        if (posisi < 0)
        {
            break;
        }
        
    }
    cout << "jumlah spasi pada kalimatmu: " << spasi << endl;
    kata = 0;
    while (true)
    {
        posisi = jumkar.find(" ", posisi + 1);
        kata++;
        if (posisi < 0)
        {
            break;
        }
        
    }
    cout << "jumlah kata pada kalimatmu: " << kata << endl;
}
string fungsi2(string &ejaan){
    string hasil;
    
    for (char i = 0; i < ejaan.length(); i++)
    {
        hasil += ejaan[i];
        if (i != ejaan.length() - 1)
        {
            hasil += " ";
        }
        
    }
    return hasil;
}
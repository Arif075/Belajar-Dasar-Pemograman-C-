#include <iostream>
#include <string>
using namespace std;

void func1(const string fungsi1);
void func2(const string fungsi2);


int main(){
    string teks;

    cout << "silahkan masukkan sebuah kalimat: ";
    getline(cin, teks);
    func1(teks);
    func2(teks);
    
    return 0;
}

void func1(string fungsi1){
    cout << "kalimat yang kamu masukkan: ";
    for (char i : fungsi1)
    {
        cout << i;
    }
    cout << endl;
    cout << "panjang karakter kalimatmu:" << fungsi1.length() << endl;
    int spasi = 0, kata = 0, posisi = 0;
    bool dalamkata = false;

    for (char i : fungsi1)
    {
        if (i != ' ') //jika karakter i bukan sebuah spasi buka gerbang untuknya
        {   
            if (dalamkata == false) //apakah kita tidak sedang dalam kata, jika iya maka ini awal kata baru (sama saja kayak !dalamkata )
            {
                kata++; //tambahkan nilai kata
                dalamkata = true; //kita sekarang berada dalam kata dan kunci
            } 
        }else{ //jika karakter adalah spasi
                dalamkata = false; //kita keluar dari kata
                spasi++; //keluar dari kata dan tambah jumlah spasi
            }
        
    }
    cout << "spasi pada kalimatmu berjumlah: " << spasi << endl;
    cout << "jumlah kata pada kalimatmu sebanyak: " << kata << endl;
}
void func2(string fungsi2){
    cout << "kalimatmu saat dipisah spasi dan underscore: ";
    for (char i : fungsi2)
    {
        if (i == ' ')
        {
            i = '_';
        }
        cout << i << " ";
    }
    cout << endl; 
}



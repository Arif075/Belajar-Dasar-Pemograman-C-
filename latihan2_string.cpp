#include <iostream>
#include <string>
using namespace std;



int main(){
    string nama;
    
    cout << "silahkan masukkan nama untuk username akunmu (tidak boleh pakai spasi + minimal 5 karakter) melalui kolom dibawah ini" << endl;
    
    while (true)
    {
        cout << "masukkan usernamemu: ";
        cin >> nama;
        if (nama.length() < 5 )
        {
            cout << "namamu terlalu pendek, masukkan lagi" << endl;
        } else if (nama == "admin" || nama == "root")
        {
            cout << "namamu dilarang, masukkan lagi" << endl;
        } else {
            cout << "username kamu adalah: " << nama << endl;
            break;
        }
        
    }
    cout << "username berhasil dibuat" << endl;

    return 0;
}
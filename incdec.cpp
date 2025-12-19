#include <iostream>
using namespace std;

int main () {
    int a;
    char pesan;

        cout << "apakah anda ingin memesan, ketik Y untuk iya dan N untuk keluar" << endl;
        cin >> pesan;

    do
    {
    switch (pesan)
    {
    case 'Y':
        cout << "ketik 1 untuk memesan mie ayam + es jeruk" << endl;
        cout << "ketik 2 untuk memesan ayam geprek + es teh" << endl;
        cout << "ketik 3 untuk memesan bakso + es campur" << endl;
        cin >> a;
        if (a == 1)
        {
            cout << "kamu memesan mie ayam + es jeruk, pesanan akan segera diantar, ingin pesan lagi? jika iya ketik Y dan tidak ketik N"<< endl;
            cin >> pesan;
            if (pesan == 'N') {
                cout << "terimakasih sudah berkunjung, selamat melanjutkan perjalanan" << endl;
            }
        } else if (a == 2)
        {
            cout << "kamu memesan mie geprek + es teh, pesanan akan segera diantar, ingin pesan lagi? jika iya ketik Y dan tidak ketik N" << endl;
            cin >> pesan;
            if (pesan == 'N') {
                cout << "terimakasih sudah berkunjung, selamat melanjutkan perjalanan" << endl;
            }
        } else if (a == 3)
        {
            cout << "kamu memesan bakso + es campur, pesanan akan segera diantar, ingin pesan lagi? jika iya ketik Y dan tidak ketik N" << endl;
            cin >> pesan;
            if (pesan == 'N') {
                cout << "terimakasih sudah berkunjung, selamat melanjutkan perjalanan" << endl;
            }
        } else {
            cout << "angka yang kamu masukkan tidak sesuai instruksi" << endl;
        }
        break;
    case 'N':
    cout << "terimakasih sudah berkunjung, selamat melanjutkan perjalanan" << endl;
        break;
    
    default:
    cout << "mohon masukkan Y atau N;" << endl;
    cin >> pesan;
        break;
    }

    } while (pesan == 'Y');
    
    return 0;
}
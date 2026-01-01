#include <iostream>
using namespace std;

int luas(int a, int b){
    int c = a * b;
    return c;
}

int keliling(int d, int e){
    int f = 2 * (d + e);
    return f;
}

void salam(){
    cout << "selamat datang di program menghitung luas dan keliling persegi" << endl;
}

int main(){

    salam();
    int p, i, l, k;
    char hitung, konfirmasi;

    do
    {
    
        cout << "kamu ingin menghitung apa? ketik (L) untuk Luas dan (K) untuk Keliling: ";
      cin >> hitung;
      if (hitung == 'L')
    {
        cout << "silahkan masukkan nilai panjang yang ingin kamu hitung: ";
        cin >> p;
        cout << "silahkan masukkan nilai lebar yang ingin kamu hitung: ";
        cin >> i;
        l = luas(p,i);
        cout << "luas dari panjang dan lebar tersebut adalah = " << l << endl;
        cout << "apakah kamu ingin menghitung lagi?? ketik (Y/N): ";
        cin >> konfirmasi;

    } else if (hitung == 'K')
    {
        cout << "silahkan masukkan nilai panjang yang ingin kamu hitung: ";
        cin >> p;
        cout << "silahkan masukkan nilai lebar yang ingin kamu hitung: ";
        cin >> i;
        k = keliling(p,i);
        cout << "keliling dari panjang dan lebar tersebut adalah = " << k << endl;
        cout << "apakah kamu ingin menghitung lagi?? ketik (Y/N): ";
        cin >> konfirmasi;
    } else {
        cout << "tolong masukkan keyword yang benar ya kakak, masukkan (Y) untuk lanjut atau (N) untuk keluar: ";
        cin >> konfirmasi;
    }
        
    } while (konfirmasi == 'Y');

    cout << "terimakasih sudah berkunjung" << endl;

    return 0;
}
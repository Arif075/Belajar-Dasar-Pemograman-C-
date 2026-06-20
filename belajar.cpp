#include <iostream>
#include <string>
#include <limits>
using namespace std;

/*Prototype Input Login Masuk*/
string Input_Username();
int Input_PIN();
void Input_Masuk(string &user, int &pin);
/*Prototype Validasi Login berhasil*/
bool login_sukses(string user, int pin);
bool login_habis(int &habis);
void sisa_login (int sisa);
/*Prototype Pilihan Menu ATM*/
char pilihan_menu();
void tampilkan_saldo(int uang);
int input_angka();
void tarik_saldo(int &saldo);
void setor_saldo(int &saldo);
bool ingin_keluar(char pilihan);


int main(){
    string username;
    int pin_rahasia;
    int kesempatan = 3;
    int saldo = 1000000;
    int tarik, setor;
    char pilihan;

    Input_Masuk(username, pin_rahasia);

    while (!login_sukses(username, pin_rahasia) && kesempatan > 0){

        if (username == "admin" && pin_rahasia != 1234){
             if (!login_habis(kesempatan)) {
                cout << "PIN yang anda masukkan salah, silahkan coba lagi" << endl;
                sisa_login(kesempatan);
                pin_rahasia = Input_PIN();
            }
        } else if (username != "admin" && pin_rahasia == 1234){
            if (!login_habis(kesempatan)) {
                cout << "username yang anda masukkan salah, silahkan coba lagi" << endl;
                sisa_login(kesempatan);
                username = Input_Username();
            }
        } else if (!login_sukses(username, pin_rahasia)) {
            if (!login_habis(kesempatan)) {
                cout << "Username dan PIN yang kamu masukkan salah, akses ditolak, mohon ulangi lagi" << endl;
                sisa_login(kesempatan);
                Input_Masuk(username, pin_rahasia);
            }
        }

    }


    if (login_sukses(username, pin_rahasia)){
        cout << "Username dan PIN yang anda masukkan tepat, silahkan akses Brankas anda" << endl;
        do {
            pilihan = pilihan_menu();

            switch (pilihan){
                case '1':
                    tampilkan_saldo(saldo);
                    break;
                case '2':
                    tarik_saldo(saldo);
                    break;
                case '3' :
                    setor_saldo(saldo);
                    break;
                case '4':
                    cout << "Terimakasih sudah berkunjung, sampai berjumpa kembali" << endl;
                    break;
                default:
                    cout << "pilihan yang kamu ketik tidak sesuai" << endl;
                    break;
            }
        }

        while (!ingin_keluar(pilihan));

    } else if (kesempatan == 0) {
        cout << "mohon maaf, akses untuk anda masuk ditolak" << endl;
    }


    return 0;
}

/*Fungsi Input Login Masuk*/

string Input_Username(){
    string username;
    cout << "Silahkan masukkan username anda: ";
    cin >> username;
    return username;
}
int Input_PIN(){
    int pin;
    while(true) {
        cout << "Silahkan masukkan PIN anda: ";
        cin >> pin;

        if(cin.fail()){
            cout << "Tolong masukkan angka untuk pin yang anda masukkan!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        break;
    }
    return pin;

}
void Input_Masuk (string &user, int &pin){
    user = Input_Username();
    pin = Input_PIN();
}

/*Fungsi Validasi Login berhasil*/

bool login_sukses(string user, int pin){
    return user == "admin" && pin == 1234;
}

bool login_habis(int &habis){
    habis--;
    if (habis == 0){
        cout << "kesempatan login anda sudah habis" << endl;
        return true;
    }
    return false;
}
void sisa_login (int sisa){
    cout << "kesempatan anda tersisa " << sisa << " lagi" << endl;
}

/*Fungsi Pilihan Menu ATM*/

char pilihan_menu(){
    char opsi;
    cout << "1. Cek Saldo" << endl;
    cout << "2. Tarik Uang" << endl;
    cout << "3. Setor Uang" <<  endl;
    cout << "4. Keluar" << endl;
    cout << "Silahkan pilih tujuan anda dan ketikkan menggunakan nomer: ";
    cin >> opsi;
    return opsi;
}
void tampilkan_saldo(int uang){
    cout << "Jumlah saldo anda sekarang sebesar Rp" << uang << endl;
}
int input_angka(){
    int salah;
    while(true) {
        cout << "Silahkan ketik nominal dengan benar: ";
        cin >> salah;

        if(cin.fail()){
            cout << "Input tidak valid! silahkan masukkan nominal angka dengan benar." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        break;
    }
    return salah;

}
void tarik_saldo(int &saldo){
    int tarik;
    do {
        tarik = input_angka();
        if (tarik < 1){
            cout << "nominal penarikan harus lebih dari 0!" << endl;
        } else if (tarik > saldo){
            cout << "nominal penarikan melebihi saldo anda, mohon masukkan ulang!" << endl;
        }
    } while (tarik < 1 || tarik > saldo);

    saldo -= tarik;
    tampilkan_saldo(saldo);
}
void setor_saldo(int &saldo){
    int setor;
    do {
        setor = input_angka();
        if (setor < 1){
            cout << "nominal penyetoran harus lebih dari 0!" << endl;
    }
    } while (setor < 1);

    saldo += setor;
    tampilkan_saldo(saldo);
}

bool ingin_keluar(char pilihan) {
    return pilihan == '4';
}

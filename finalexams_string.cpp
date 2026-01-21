#include <iostream>
#include <string>
#include <array>
using namespace std;

void func1(const string fungsi1);
void func2(const string fungsi2);
string func3(string fungsi3);
void ft3(string tf3);
void func4(string input, string cariinput);
void func5(string spasi);
void func6(string input);
string func7(string tukar);

int main(){
    string teks;

    cout << "silahkan masukkan sebuah kalimat: ";
    getline(cin, teks);
    func1(teks);
    func2(teks);
    ft3(teks);
    func5(teks);
    func6(teks);
    cout << "Kalimat setelah swap: " << func7(teks) << endl;

    cout << "ketikkan kalimat yang kamu cari: ";
    string cari;
    getline(cin, cari);

    func4(teks, cari);

    return 0;
}

void func1(const string fungsi1){
    cout << "kalimat yang kamu masukkan: ";
    for (char i : fungsi1)
    {
        cout << i;
    }
    cout << endl;
    cout << "panjang karakter kalimatmu:" << fungsi1.length() << endl;
    int spasi = 0, kata = 0;
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
void func2(const string fungsi2){
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
string func3(string fungsi3){
    string larangan[] = {"burik", "dekil", "kucel", "bebal", "culas", "pelit", "sombong", "angkuh", "lebay", "alay", "cupu", "culun", "kudet", "dungu", "pandir", "senga", "songong", "rempong", "bacot", "jablay"};
    for (char &kecil : fungsi3)
            {
                kecil = tolower(kecil);
            }
    for (string kata : larangan) // setiap iterasi, variabel kata berisi satu kata terlarang dari array larangan
    {
        size_t pos = fungsi3.find(kata); // pos menyimpan posisi pertama kemunculan kata terlarang di dalam teks
        while (pos != string::npos) // ketika tidak menemukan unsur kata yang ada dilarangan baru berhenti (kalau nemu ulang terus)
        {   
            fungsi3.replace(pos, kata.length(), string(kata.length(), '*')); // mengganti kata terlarang dengan tanda * sepanjang panjang katanya
            pos = fungsi3.find(kata); //cari lagi, jika ketemu ulang dari atas
        }
    }
    return fungsi3;
}
void ft3(string tf3){
    cout << "nyoba teks larangan: " << func3(tf3) << endl;
}
void func4(string input, string cariinput){
    if (cariinput.empty()) {
        cout << "kata pencarian tidak boleh kosong\n";
        return;
    }
    size_t posisi = input.find(cariinput);
    if (posisi != string::npos){
        cout << "kata yang kamu masukkan ditemukan diposisi index ke: ";
        while (posisi != string::npos)
        {  
                cout << posisi;
                posisi += cariinput.length();
                posisi = input.find(cariinput, posisi);
                if (posisi != string::npos)
                {
                    cout << ", ";
                }      
        }
    } else {
        cout << "kata yang kamu cari tidak ditemukan" << endl;
    }
}
void func5(string spasi){
    bool sp = true;
    cout << "merapikan spasi yang kebanyakan: ";
    for (char i : spasi){
        if (i != ' ')
        {
        cout << i;
        sp = false;

        }else {
            if (sp == false){
                cout << ' ';
            sp = true;
            }
        }
    }
    cout << endl;
}

void func6(string input){
    array <int, 26> huruf = {0};
    for(char i : input){
        i = tolower(i);
        if(i >= 'a' && i <= 'z'){
            int index = i - 'a';
            huruf[index]++;
        }
    }
    for(int i = 0; i < 26; i++){
        if(huruf[i] > 0){
            cout << char('a' + i) << ": " << huruf[i] << endl;
        }
    }
}
string func7(string tukar){
    int start = 0; // indeks awal kata
    for (int i = 0; i <= tukar.length(); i++) {
        // Deteksi akhir kata (spasi atau akhir string)
        if (i == tukar.length() || tukar[i] == ' ') {
            int end = i - 1; // indeks terakhir karakter kata
            // Swap karakter dari ujung ke tengah
            int left = start, right = end;
            while (left < right) {
                swap(tukar[left], tukar[right]);
                left++;
                right--;
            }
            start = i + 1; // kata berikutnya dimulai setelah spasi
        }
    }
    return tukar;
}

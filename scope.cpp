#include <iostream>
using namespace std;

int x = 10; //scope global langsung, singkat saja jadi GL

int global(){ //scope ambil dari global
    return x;
}

int main(){
    cout << "1. variabel dari GL: " << x << endl; //tidak ngambil nilai x dari lokal karena kode ini diatasnya, jadi tidak kebaca compiler
    int x = 9; //scope lokal
    cout << "2. variabel dari lokal: " << x << endl; //mengambil dari lokal, mungkin karena x nya udah diperbarui lewat blocknya si main atau dari lokal
    cout << "3. variabel dari global function: " << global() << endl; // mengambil dari global karena sudah dibungkus pakai function

    { //scope block
        cout << "4. variabel dari local part 2: " << x << endl; //masih ngambil dari local karena int x belum diperbarui
        int x = 8;
        cout << "5. variabel dari block: " << x << endl; //ngambil dari int block karena sudah diperbarui nilai x nya
        cout << "6. variabel dari global" << global() << endl; // ngambil dari global karena yang dipanggil nilai fungsi dari global
    }
    cout << "7. variabel dari lokal part 3: " << x << endl; // ngambil dari lokal karena dia tidak terkena zona dari scope blok + variabel di lokal nilainya masih sama dan belum diperbarui lagi yaitu 9

    return 0;
}
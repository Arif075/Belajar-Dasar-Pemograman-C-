#include <iostream>
using namespace std;

void pointer(int *a);
void kuadrat(int *a);
int funcpoint(int *a);
int* addrfunc(int *a);
void bungkusfuncreturn(int *a){
    cout << "ini adalah nilai kuadrat a fungsi return versi dibungkus void: " << funcpoint(a) << endl;
    cout << "ini adalah alamat a fungsi return versi dibungkus void: " << addrfunc(a) << endl << endl;
}

int main(){
    int a = 9;//ini adalah nilai dan alamat awal variabel a

    cout << "ini adalah nilai a: " << a << endl; //masih nilai awal
    cout << "ini adalah alamat a: " << &a << endl << endl; // masih alamat awal

    pointer(&a); // ini versi yang benar pakai &a (fungsi void dengan pointer)

    kuadrat(&a); // dipanggil terlebih dahulu supaya nilai pada variabel a berubah
    cout << "ini adalah nilai kuadrat a: " << a << endl; //nilai sudah berubah karena memanggil fungsi
    cout << "ini adalah alamat kuadrat a: " << &a << endl << endl; //alamat sudah berubah karena memanggil fungsi

    cout << "ini adalah nilai kuadrat a fungsi return: " << funcpoint(&a) << endl; //jadi 6561 karena nilai a sudah 81
    cout << "ini adalah alamat a fungsi return: " << addrfunc(&a) << endl << endl;

    bungkusfuncreturn(&a); // masih sama kayak contoh ke-4, hanya saja dibungkus void

    return 0;
}

void pointer(int *a){
    cout << "ini adalah nilai a dengan fungsi pointer versi void: " << *a << endl;
    cout << "ini adalah alamat a dengan fungsi pointer versi void: " << a << endl << endl;
}

void kuadrat(int *a){
    *a = *a * *a;
}

int funcpoint(int *a){
    return *a * *a;
}

int* addrfunc(int *a){
    return a;
}

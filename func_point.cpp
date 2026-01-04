#include <iostream>
using namespace std;

void pointer(int *);
void hitung(int *);
int kuadrat(int *a);
int* kuadart_ribet(int *a);

int main(){
    int a = 5;

    cout << "ini adalah nilai a: " << a << endl; 
    cout << "ini adalah alamat a: " << &a << endl;//sebelum ketemu fungsi

    pointer(&a); //setelah ketemu fungsi void versi teks cout

    cout << "ini adalah kuadrat a versi fungsi kembalian: " << kuadrat(&a) << endl;
    cout << "ini adalah nilai a versi fungsi kembalian ribet: " << *kuadart_ribet(&a) << endl;
    cout << "ini adalah alamat a versi fungsi kembalian ribet: " << kuadart_ribet(&a) << endl;


    hitung(&a);
    cout << "ini adalah nilai kuadrat a versi fungsi void: " << a << endl; //ketemu fungsi hitung versi void
    cout << "ini adalah alamat kuadrat a: " << &a << endl;

    return 0;
}

void pointer(int *a){
    cout << "ini adalah nilai a: " << *a << endl;
    cout << "ini adalah alamat a: " << a << endl;
}
void hitung(int *a){
    *a = (*a) * (*a);
}

int kuadrat(int *a){
    return *a * *a;
}

int* kuadart_ribet(int *a){
    return a;
}

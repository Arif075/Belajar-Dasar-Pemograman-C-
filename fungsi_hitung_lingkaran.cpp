#include <iostream>
using namespace std;

double luaslingkaran(double b, double a = 22.0 / 7);
double kelilinglingkaran(double b, double a = 22.0 / 7);

void coutluas(double b){
    cout << "luasnya adalah: " << luaslingkaran(b) << endl;
}
void coutkeliling(double b){
    cout << "kelilingnya adalah: " << kelilinglingkaran(b) << endl;
}

int main(){
    double b;

    cout << "masukkan jari-jari lingkaran: ";
    cin >> b;
    coutluas(b);
    coutkeliling(b);

    return 0;
}

double luaslingkaran(double b, double a){
    return a * b * b;
}
double kelilinglingkaran(double b, double a){
    return 2 * a * b;
}

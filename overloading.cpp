#include <iostream>
using namespace std;

int volper(int s); //kubus
int volper(int p, int l, int t); //balok
double volper(double s); //kubus versi double
double volper(double p, double l, double t);//balok versi double

void hasilvolper(int s){
    cout << "ini volper kubus int : " << volper(s) << endl;
}
void hasilvolper(double s){
    cout << "ini volper kubus double : " << volper(s) << endl;
}

void hasilvolper(int p, int l, int t){
    cout << "ini volper balok int : " << volper(p,l,t) << endl;
}
void hasilvolper(double p, double l, double t){
    cout << "ini volper balok double : " << volper(p,l,t) << endl;
}

int main(){
    hasilvolper(9);
    hasilvolper(8.9);
    hasilvolper(9,10,11);
    hasilvolper(9.0,11.1,8.0);
    
    return 0;
}

int volper(int s){
    return s * s * s;
}
int volper(int p, int l, int t){
    return p * l * t;
}

double volper(double s){
    return s * s * s;
}

double volper(double p, double l, double t){
    return p * l * t;
}
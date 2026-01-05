#include <iostream>
using namespace std;

int main(){
    int x[5];
    x[0] = 10;
    x[1] = 20;
    x[2] = 30;
    x[3] = 40;
    x[4] = 50;


    cout << "ini adalah nilai dari x(0): " << x[0] << " alamatnya: " << &x[0] << endl;
    cout << "ini adalah nilai dari x(1): " << x[1] << " alamatnya: " << &x[1] << endl;
    cout << "ini adalah nilai dari x(2): " << x[2] << " alamatnya: " << &x[2] << endl;
    cout << "ini adalah nilai dari x(3): " << x[3] << " alamatnya: " << &x[3] << endl;
    cout << "ini adalah nilai dari x(4): " << x[4] << " alamatnya: " << &x[4] << endl;

    int *y = x;

    *(y + 4) = 100;

    cout << "ini adalah nilai dari x(4): " << x[4] << " alamatnya: " << &x[4] << endl;
    cout << "ini adalah nilai dari x(4) versi pointer: " << y[4] << " alamatnya: " << &y[4] << endl;

    return 0;
}
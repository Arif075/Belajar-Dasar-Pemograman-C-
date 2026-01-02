#include <iostream>
using namespace std;

int factorial(int n);

void jawabanfactorial(int n){
    cout << "nilai dari factorial " << n << "! adalah: " << factorial(n);
}

int main(){
    int n;
    cout << "silahkan masukkan nilai factorial yang ingin kamu ketahui: ";
    cin >> n;
    jawabanfactorial(n);

    return 0;
}

int factorial(int n){
    if (n <=1)
    {
        cout << n << "=";
       return n;
    } else {
        cout << n << "x";
        return n * factorial(n-1);
    }
   
}
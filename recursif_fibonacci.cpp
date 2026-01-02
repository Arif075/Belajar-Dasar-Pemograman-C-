#include <iostream>
using namespace std;

int fibonacci(int n);
void deretfibo(int n){
    for(int i = 0; i <= n; i++){ // i adalah 0, ketika nilai i kurang dari sama dengan dari n tambah nilai i sampai sama dengan nilai n 
        cout << fibonacci(i) << " "; // 1 = (1-1) + (1-2), 2 = 2 + 0, 3 = 2 + 1, 5 = 3 + 2
    }
}

int main(){
    int n;
    cout << "silahkan masukkan deret fibonacci yang ingin kamu lihat:";
    cin >> n;
    deretfibo(n);

    return 0;
}

int fibonacci(int n){
    if (n <= 1) //Jika nilai n kurang dari sama dengan 1 maka return n
    {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2); //rekursif n-1 + n-2
    }
}


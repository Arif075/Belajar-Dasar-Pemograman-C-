#include <iostream>
#include <array>
using namespace std;

const int kolom = 10;
const int baris = 10;

void func(array < array <int, kolom>, baris> &reference){//disini kolom dan baris memiliki nilai pasti yaitu 10x10 karena const, setelah itu gabungan mereka bernama reference
    for (array <int, kolom> &hellobaris: reference)//nahh, untuk membuat kolom kita menggunakan looping yang ini, batasnya ialah sampai reference tadi, yaitu 10
    {
        cout << "[";
        for (int nilaikolom : hellobaris)//nah ini untuk membuat angka nya, karena hellobaris itu perkolomnya, dan nanti akan melooping sampai referencennya habis yaitu 10 baris
        {
            cout << nilaikolom << " ";
        }
        cout << "]" << endl;
    }
    
}

int main(){
    
    array < array <int, kolom>, baris> matriks = {9,8,5,3,7,2,6,4,100,50,9,8,5,3,7,2,6,4,100,50,9,8,5,3,7,2,6,4,100,50,9,8,5,3,7,2,6,4,100,50,9,8,5,3,7,2,6,4,100,50,9,8,5,3,7,2,6,4,100,50,9,8,5,3,7,2,6,4,100,50,9,8,5,3,7,2,6,4,100,50,9,8,5,3,7,2,6,4,100,50,9,8,5,3,7,2,6,4,100,50};

    func(matriks);


    return 0;
}
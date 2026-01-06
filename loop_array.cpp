#include <iostream>
#include <array>
using namespace std;

int main(){
    array <int, 10> nilai = {0,1,2,3,4,5,6,7,8,9};

    for (int i : nilai)
    {
        cout << "ini alamatnya: " << &i << " Nilainya: " << i << endl;
    }
    cout << endl << endl;
    cout << "ini cara mengubah nilai dengan reference: " << endl;
    for (int &i : nilai)
    {   
        i *= 3;
        cout << "ini alamatnya: " << &i << " Nilainya: " << i << endl;
    }

    cout << endl << endl;
    for (int *i : nilai)
    {   
        cout << "ini alamatnya: " << i << " Nilainya: " << *i << endl;
    }

    

    return 0;
}
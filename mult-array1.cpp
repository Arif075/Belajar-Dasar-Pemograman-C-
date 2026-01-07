#include <iostream>
using namespace std;

void matriksfor(int *a, int baris, int kolom);

int main(){
    const int baris = 2;
    const int kolom = 2;
    int matriks[baris][kolom] = {5,10,15,20};

    matriksfor(*matriks, baris, kolom); // karena disini baris dan kolom bernilai 2, maka terjadi pengulangan hanya sebanyak 2x
    

    return 0;
}

void matriksfor(int *a, int baris, int kolom){//int a itu merujuk ke matriks, tapi karena ada pointer dan nulisnya *a polos tanpa [] jadi nunjuknya ke baris pertama yaitu a[0]
    int index = 0; // index disini bertujuan menambahkan *a atau matriks 
    for (int i = 0; i < baris; i++) //
    {
        cout << "["; // cuma bertujuan mengeluarkan [ sebelum angka dibuat
        for (int j = 0; j < kolom; j++)
        {
            cout << *(a + index) << " "; //nah index disini masih bernilai nol, makanya masih mengambil a[0], ditambahkan pointer agar menuju ke alamat pastinya dan bisa menambahkan hasil
            index++; //dari sini index menambahkan dirinya, ketika ia mengulang lagi maka ia sudah berjumlah 1 dan seterusnya
        }
        cout << "]" << endl; //cuma untuk menutup dan menambahkan baris baru jika terjadi pengulangan
    }
}

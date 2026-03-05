#include <iostream>
#include <string>
using namespace std;

int arr[20]; //deklarasi variable global array a dengan ukuran 20
int n; //deklarasi variable global n untuk menyimpan banyaknya elemen

void input(){  //prosedur untuk input
    while(true) {
        cout << "masukkan banyaknya elemen pada pada array : ";  
        cin >> n;  //input dari pengguna
        if (n <= 20)  //jika n kurang dari atau sama dengan 20
            break; //keluar dari loop
        else {  //jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
}
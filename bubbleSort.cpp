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
    cout << endl;
    cout << "======================" << endl;
    cout << "masukkan Elemen Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ":";
        cin >> arr[i];
    }
}


void bubbleSortArray(){
    int pass = 1;

    do {
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }     
        }
        pass = pass + 1;
    }
}
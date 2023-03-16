#include <iostream>
using namespace std;


int a[20];           //Deklarasi array a dengan ukuran 20
int n;               //Deklarasi variable n untuk menyimpan banyaknya elemen pada array


void input() {       //Method untuk input
    while (true) {   //Looping
        cout << "Masukan array banyaknya elemen pada array : "; //Output ke layar
        cin >> n;    //Input dari pengguna
        if (n <= 20) //Jika n kurang dari atau sama dengan 20
            break;   //Keluar dari loop
        else {       //Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; //Output ke layar
        }
    }
    cout << endl;                            //Output baris kosong
    cout << "====================" << endl;  //Output ke layar
    cout << "Masukan Elemen Array" << endl;  //Output ke layar
    cout << "====================" << endl;  //Output ke layar

    for (int i = 0; i < n; i++) {     //Looping ddengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; //Output ke layar
        cin >> a[i];                  //Input dari pengguna
    }
}

void display() { //Method untuk menampilkan hasil
    cout << endl;                            //Output baris kosong
    cout << "=================================" << endl;  //Output ke layar
    cout << "Element Array yang telah tersusun" << endl;  //Output ke layar
    cout << "=================================" << endl;  //Output ke layar
    for (int j = 0; j < n; j++) {
        cout << a[j] << endl;
    }
    cout << endl;                                         //Output ke layar
}

void bubbleSortArray() {        //Method untuk mengurungkan array dengan metode bubble sort
    for (int i = 1; i < n; i++) {            //Looping dengan i dimulai dari 1 hingga n-1
        for (int j = 0; j < n - i; j++) {     // looping dengan j dimulai dari 0 hingga n-i-1
            if (a[j] > a[j + 1]) {           //Jikna nilai pada a[j] lebih besar dari a[j+1]
                int temp = a[j];            //Simpan nilai a[j] ke variable sementara temp
                a[j] = a[j + 1];            //Assign nilai a[j+1] ke a[j]
                a[j + 1] = temp;            //Assign nilai temp ke a[j+1]
            }
        }
    }
}


int main() {
    //Membuat objek obj dari class Bubblesort
    input();            //Memanggil read() dari class Bubblesort
    bubbleSortArray();  //Memanggil bubbleSortArray() dari class BubbleSort
    display();          //Memanggil display() dari class BubbleSort
    return 0;
}
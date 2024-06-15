# <h1 align="center">Laporan Praktikum Modul Rekursif</h1>
<p align="center">Ananda Rizky</p>

## Dasar Teori

Rekursi adalah proses di mana sebuah fungsi atau prosedur memanggil dirinya sendiri secara berulang. Dalam fungsi rekursif, pemanggilan dapat terjadi berulang kali. Namun, untuk mencegah proses tersebut terus berlanjut tanpa henti dan membebani memori yang digunakan, kondisi terminasi harus diatur. Tanpa kondisi terminasi, proses rekursif akan terus berjalan dan berpotensi mengakibatkan kehabisan memori.

Fungsi rekursif ditemukan sekitar tahun 1934 oleh
seorang ahli matematika asal Hungaria yang bernama
Rosza Peter1 Teori fungsi rekursif sendiri adalah
pengembangan dari penemuan primitive recursive yang
sebelumnya telah diajukan oleh Jacques Herbrand dan
didefinisikan secara lebih umum oleh Kurt Godel, yang keduanya merupakan ahli matematika pada abad ke-20.[1]

## Guided 

### 1. Rekursif Langsung (Direct Recursion) 
```C++
#include <iostream>

using namespace std;

void countdown(int n) {
    if (n == 0) {
        return;
    }

    cout << n << " ";
    countdown(n -1);
}

int main() {
    cout << "Rekursif langsung: ";
    countdown(5);
    cout << endl;
    return 0;
}
```
Kode di atas ditulis dalam bahasa pemrograman C++. Pertama, kita memasukkan file header <iostream>, yang berisi definisi fungsi-fungsi untuk input/output (I/O). Kemudian, kita mendefinisikan fungsi countdown yang melakukan rekursi mundur dari angka 5 hingga 1. Jika nilai n sama dengan 0, fungsi berhenti. Setiap langkah rekursi mencetak nilai n di layar. Fungsi utama (main) mencetak teks "Rekursif langsung: " dan memanggil fungsi countdown dengan argumen 5. Hasil keluaran dari program ini adalah "Rekursif langsung: 5 4 3 2 1".

## Guided 2

### 2. Rekursif Tidak Langsung (Indirect Recursion)


```c++
#include <iostream>

using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1);
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2);
    }
}

int main() {
    int num = 3;
    cout << "Rekursif tidak langsung: ";
    functionA(num);
    return 0;
}
```

Code di atas mengilustrasikan rekursi tidak langsung. Fungsi functionA mencetak angka dari 3 hingga 1, sementara functionB memanggil functionA dengan argumen setengah dari nilai n. Output dari program ini adalah "Rekursif tidak langsung: 3 2 1".

## Unguided 

1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!

Contoh Output:

Masukkan bilangan bulat positif: 5
Faktorial dari 5 adalah: 120


```C++
#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * faktorial(n - 1);
}

int main() {
    int bilangan;

    // Meminta input dari pengguna
    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    // Memeriksa apakah input valid
    if (bilangan < 0) {
        cout << "Harap masukkan bilangan bulat positif." << endl;
    } else {
        int hasil = faktorial(bilangan);
        cout << "Faktorial dari " << bilangan << " adalah: " << hasil << endl;
    }

    return 0;
}
```

#### Output:
![Screenshot 2024-05-25 145706](https://github.com/chelsisdeo/praksrtukdata/assets/161056340/a2ca95d1-646c-464c-8c4b-1d110b2a3430)

#### penjelasan 

Kode di atas menggunakan rekursi untuk menghitung faktorial dari bilangan bulat positif. Fungsi faktorial mengembalikan 1 jika n adalah 0 atau 1, dan mengalikan n dengan faktorial(n - 1) jika n lebih besar dari 1. Fungsi main meminta input dari pengguna, memvalidasi bahwa input tersebut adalah bilangan positif, kemudian menghitung dan menampilkan faktorial menggunakan fungsi faktorial.


#### Full code Screenshot:
![Screenshot 2024-05-25 150430](https://github.com/chelsisdeo/praksrtukdata/assets/161056340/120092aa-275b-4932-b75b-60fd9445a94b)

## Unguided 

2. Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 diatas!

```c++
#include <iostream>
using namespace std;

// Deklarasi fungsi
int fungsiA(int n);
int fungsiB(int n);

// Fungsi A memanggil fungsi B
int fungsiA(int n) {
    if (n == 0)
        return 1;
    else
        return n * fungsiB(n - 1);
}

// Fungsi B memanggil fungsi A
int fungsiB(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return fungsiA(n);
}

int main() {
    int bilangan;

    // Meminta input dari pengguna
    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    // Memeriksa apakah input valid
    if (bilangan < 0) {
        cout << "Harap masukkan bilangan bulat positif." << endl;
    } else {
        int hasil = fungsiA(bilangan);
        cout << "Faktorial dari " << bilangan << " adalah: " << hasil << endl;
    }

    return 0;
}
```


### Output
![Screenshot 2024-05-25 145951](https://github.com/chelsisdeo/praksrtukdata/assets/161056340/6ea35fd1-d516-45d5-a43c-b74e6de104ea)

### penjelasan

Kode di atas menggunakan rekursi tidak langsung untuk menghitung nilai faktorial dari sebuah bilangan bulat positif melalui dua fungsi, yaitu fungsiA dan fungsiB. Program dimulai dengan menyertakan pustaka input/output standar dan mendeklarasikan kedua fungsi tersebut. Fungsi fungsiA memanggil fungsiB dalam kasus rekursif, sementara fungsiB memanggil kembali fungsiA. Kedua fungsi tersebut memiliki kondisi dasar untuk mengembalikan 1 jika nilai n adalah 0 atau 1. Di dalam fungsi main, program meminta pengguna untuk memasukkan bilangan bulat positif, memeriksa validitas input, dan jika input valid, menghitung faktorial menggunakan fungsiA, kemudian menampilkan hasilnya. Jika input pengguna adalah bilangan negatif, program akan meminta pengguna untuk memasukkan bilangan bulat positif.

### Full code ss
![image](https://github.com/chelsisdeo/praksrtukdata/assets/161056340/d77e4f4d-d54a-4a86-a749-9814cdf2c010)


## Kesimpulan
Kesimpulan dari pembelajaran materi rekursif hari ini adalah bahwa rekursi adalah teknik pemrograman di mana sebuah fungsi memanggil dirinya sendiri untuk menyelesaikan masalah, baik secara langsung maupun tidak langsung. 

## Referensi
[1] KA, A. T. S. Penerapan Fungsi Rekursi pada Droste Effect

# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Ananda Rizky</p>

## Dasar Teori

Array merupakan suatu tipe data yang berisi kumpulan nilai atau tipe data lain, misalnya seperti integer, string, number, boolean, floating dan lain-lain, selain itu Array juga digunakan untuk menampung banyak nilai dalam satu variabel. Berikut ini adalah beberapa jenis array : [1]

### 1. Array Satu Dimensi

Array satu dimensi yaitu kumpulan elemen-elemen identik yang hanya terdiri dari satu baris atau hanya satu kolom saja alamat penyimpanan data (indeks). Elemen-elemen tersebut memiliki tipe data yang sama, tetapi isi dari elemen tersebut boleh berbeda.[2]

### 2. Array Dua Dimensi

Array dua dimensi yang sering digambarkan sebagai sebuah matriks merupakan perluasan dari sebuah array satu dimensi. Jika array satu dimensi hanya terdiri dari sebuah baris dengan beberapa kolom elemen maka array dua dimensi terdiri dari beberapa baris dan beberapa kolom elemen yang bertipe sama. Pendeklarasian array dua dimensi hampir sama dengan pendeklarasian array satu dimensi, kecuali bahwa array dua dimensi terdapat dua jumlah elemen array yang terdapat di dalam kurung siku dan keduanya boleh tidak sama. [3]   

### 3. Array Multidimensi

Array ini seperti array dimensi dua tetapi dapat memiliki ukuran yang lebih besar. Sebenarnya array dimensi banyak ini tidak terlalu sering digunakan, tetapi sewaktu-waktu kalau dimensi yang dibutuhkan banyak, maka array ini sangat memegang peranan yang penting.[4]

### 4. Array Empat Dimensi

Four dimensioned array is a collection of such packs of cards, each pack having the same number of cards, each card with the same number of rows, and each row having the same number of columns. [5]

### 5. Array Lima Dimensi

Array lima dimensi adalah struktur data yang dapat menyimpan elemen-elemen dalam lima dimensi. Ini berarti array tersebut memiliki lima tingkat dimensi yang masing-masing dapat diindeks untuk mengakses elemen. 

## Guided 

### 1. Program Input Array Tiga Dimensi

#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
// Deklarasi array
int arr[2][3][3];
// Input elemen
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << "Input Array[" << x << "][" << y << "][" << z <<
"] = ";
cin >> arr[x][y][z];
}
}
cout << endl;
}
// Output Array
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << "Data Array[" << x << "][" << y << "][" << z <<
"] = " << arr[x][y][z] << endl;
}
}
}
cout << endl;
// Tampilan array
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << arr[x][y][z] << ends;
}
cout << endl;
}
cout << endl;
}
}

Program diatas menggambarkan cara kerja array tiga dimensi dan bagaimana mengakses serta menampilkan nilainya menggunakan loop bersarang untuk setiap dimensi.

### 2. Program Mencari Nilai Maksimal pada Array

#include <iostream>
using namespace std;
int main()
{
int maks, a, i = 1, lokasi;
cout << "Masukkan panjang array: ";
cin >> a;
int array[a];
cout << "Masukkan " << a << " angka\n";
for (i = 0; i < a; i++)
{
cout << "Array ke-" << (i) << ": ";
cin >> array[i];
}
maks = array[0];
for (i = 0; i < a; i++)
{
if (array[i] > maks)
{
maks = array[i];
lokasi = i;
}
}
cout << "Nilai maksimum adalah " << maks << " berada di Array
ke " << lokasi << endl;
}

program diatas menggambarkan bagaimana menggunakan array dan loop untuk mencari nilai maksimum dalam sebuah array yang diinputkan oleh pengguna.

## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!

C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}

#### Output:
![240302_00h00m06s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/6d1727a8-fb77-4ecf-81ff-5de9386686b7)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/41e9641c-ad4e-4e50-9ca4-a0215e336b04)


## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] Suryana, T. (2022). Array Dalam C++.
[2] lestari, K. (2019, March 29). STUKTUR DATA STATIS ARRAY.
[3] Pratama, M. A. (2020). STRUKTUR DATA ARRAY DUA DIMENSI PADA PEMROGRAMAN C++.
[4] lestari, Komang. “STUKTUR DATA STATIS ARRAY.” OSF Preprints, 29 Mar. 2019. Web.
[5] https://www.quora.com/What-is-a-4-dimensional-array 

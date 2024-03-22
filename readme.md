# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Ananda Rizky</p>
<p align="center">2311110019</p>

## Dasar Teori

Array merupakan suatu tipe data yang berisi kumpulan nilai atau tipe data lain, misalnya seperti integer, string, number, boolean, floating dan lain-lain, selain itu Array juga digunakan untuk menampung banyak nilai dalam satu variabel. Berikut ini adalah beberapa jenis array : [1]

### 1. Array Satu Dimensi

Array satu dimensi yaitu kumpulan elemen-elemen identik yang hanya terdiri dari satu baris atau hanya satu kolom saja alamat penyimpanan data (indeks). Elemen-elemen tersebut memiliki tipe data yang sama, tetapi isi dari elemen tersebut boleh berbeda.[2]

Contoh :
``` C++
#include <iostream>

int main() {
    const int SIZE = 5; // Ukuran array
    int arr[SIZE];      // Deklarasi array

    // Memasukkan nilai-nilai ke dalam array
    std::cout << "Masukkan " << SIZE << " angka:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Angka ke-" << (i+1) << ": ";
        std::cin >> arr[i];
    }

    // Mencetak nilai-nilai array
    std::cout << "\nNilai-nilai yang dimasukkan:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Angka ke-" << (i+1) << ": " << arr[i] << std::endl;
    }

    return 0;
}
```
Output :
```
Masukkan 5 angka:
Angka ke-1: 10
Angka ke-2: 20
Angka ke-3: 30
Angka ke-4: 40
Angka ke-5: 50

Nilai-nilai yang dimasukkan:
Angka ke-1: 10
Angka ke-2: 20
Angka ke-3: 30
Angka ke-4: 40
Angka ke-5: 50
```
### 2. Array Dua Dimensi

Array dua dimensi yang sering digambarkan sebagai sebuah matriks merupakan perluasan dari sebuah array satu dimensi. Jika array satu dimensi hanya terdiri dari sebuah baris dengan beberapa kolom elemen maka array dua dimensi terdiri dari beberapa baris dan beberapa kolom elemen yang bertipe sama. Pendeklarasian array dua dimensi hampir sama dengan pendeklarasian array satu dimensi, kecuali bahwa array dua dimensi terdapat dua jumlah elemen array yang terdapat di dalam kurung siku dan keduanya boleh tidak sama. [3]   

Contoh :
``` C++
#include <iostream>

int main() {
    const int ROWS = 3;    // Jumlah baris
    const int COLS = 3;    // Jumlah kolom
    int arr[ROWS][COLS];   // Deklarasi array

    // Memasukkan nilai-nilai ke dalam array
    std::cout << "Masukkan " << ROWS * COLS << " angka:\n";
    for (int i
```
Output :
```
Masukkan 9 angka:
Array[0][0]: 1
Array[0][1]: 2
Array[0][2]: 3
Array[1][0]: 4
Array[1][1]: 5
Array[1][2]: 6
Array[2][0]: 7
Array[2][1]: 8
Array[2][2]: 9

Nilai-nilai yang dimasukkan:
Array[0][0]: 1
Array[0][1]: 2
Array[0][2]: 3
Array[1][0]: 4
Array[1][1]: 5
Array[1][2]: 6
Array[2][0]: 7
Array[2][1]: 8
Array[2][2]: 9
```

### 3. Array Multidimensi

Array ini seperti array dimensi dua tetapi dapat memiliki ukuran yang lebih besar. Sebenarnya array dimensi banyak ini tidak terlalu sering digunakan, tetapi sewaktu-waktu kalau dimensi yang dibutuhkan banyak, maka array ini sangat memegang peranan yang penting.[4]

Contoh :
``` c++
#include <iostream>

int main() {
    const int SIZE1 = 2;    // Jumlah elemen dimensi pertama
    const int SIZE2 = 3;    // Jumlah elemen dimensi kedua
    const int SIZE3 = 4;    // Jumlah elemen dimensi ketiga
    int arr[SIZE1][SIZE2][SIZE3];   // Deklarasi array tiga dimensi

    // Memasukkan nilai-nilai ke dalam array
    std::cout << "Masukkan " << SIZE1 * SIZE2 * SIZE3 << " angka:\n";
    for (int i = 0; i < SIZE1; ++i) {
        for (int j = 0; j < SIZE2; ++j) {
            for (int k = 0; k < SIZE3; ++k) {
                std::cout << "Array[" << i << "][" << j << "][" << k << "]: ";
                std::cin >> arr[i][j][k];
            }
        }
    }

    // Mencetak nilai-nilai array
    std::cout << "\nNilai-nilai yang dimasukkan:\n";
    for (int i = 0; i < SIZE1; ++i) {
        for (int j = 0; j < SIZE2; ++j) {
            for (int k = 0; k < SIZE3; ++k) {
                std::cout << "Array[" << i << "][" << j << "][" << k << "]: " << arr[i][j][k] << std::endl;
            }
        }
    }

    return 0;
}
```
Output :
```
Masukkan 24 angka:
Array[0][0][0]: 1
Array[0][0][1]: 2
Array[0][0][2]: 3
Array[0][0][3]: 4
Array[0][1][0]: 5
Array[0][1][1]: 6
Array[0][1][2]: 7
Array[0][1][3]: 8
Array[0][2][0]: 9
Array[0][2][1]: 10
Array[0][2][2]: 11
Array[0][2][3]: 12
Array[1][0][0]: 13
Array[1][0][1]: 14
Array[1][0][2]: 15
Array[1][0][3]: 16
Array[1][1][0]: 17
Array[1][1][1]: 18
Array[1][1][2]: 19
Array[1][1][3]: 20
Array[1][2][0]: 21
Array[1][2][1]: 22
Array[1][2][2]: 23
Array[1][2][3]: 24

Nilai-nilai yang dimasukkan:
Array[0][0][0]: 1
Array[0][0][1]: 2
Array[0][0][2]: 3
Array[0][0][3]: 4
Array[0][1][0]: 5
Array[0][1][1]: 6
Array[0][1][2]: 7
Array[0][1][3]: 8
Array[0][2][0]: 9
Array[0][2][1]: 10
Array[0][2][2]: 11
Array[0][2][3]: 12
Array[1][0][0]: 13
Array[1][0][1]: 14
Array[1][0][2]: 15
Array[1][0][3]: 16
Array[1][1][0]: 17
Array[1][1][1]: 18
Array[1][1][2]: 19
Array[1][1][3]: 20
Array[1][2][0]: 21
Array[1][2][1]: 22
Array[1][2][2]: 23
Array[1][2][3]: 24
```
### 4. Array Empat Dimensi

Four dimensioned array is a collection of such packs of cards, each pack having the same number of cards, each card with the same number of rows, and each row having the same number of columns. [5]

Contoh :
```c++
#include <iostream>

int main() {
    const int SIZE1 = 2;    // Jumlah elemen dimensi pertama
    const int SIZE2 = 2;    // Jumlah elemen dimensi kedua
    const int SIZE3 = 2;    // Jumlah elemen dimensi ketiga
    const int SIZE4 = 3;    // Jumlah elemen dimensi keempat
    int arr[SIZE1][SIZE2][SIZE3][SIZE4];   // Deklarasi array empat dimensi

    // Memasukkan nilai-nilai ke dalam array
    std::cout << "Masukkan " << SIZE1 * SIZE2 * SIZE3 * SIZE4 << " angka:\n";
    for (int i = 0; i < SIZE1; ++i) {
        for (int j = 0; j < SIZE2; ++j) {
            for (int k = 0; k < SIZE3; ++k) {
                for (int l = 0; l < SIZE4; ++l) {
                    std::cout << "Array[" << i << "][" << j << "][" << k << "][" << l << "]: ";
                    std::cin >> arr[i][j][k][l];
                }
            }
        }
    }

    // Mencetak nilai-nilai array
    std::cout << "\nNilai-nilai yang dimasukkan:\n";
    for (int i = 0; i < SIZE1; ++i) {
        for (int j = 0; j < SIZE2; ++j) {
            for (int k = 0; k < SIZE3; ++k) {
                for (int l = 0; l < SIZE4; ++l) {
                    std::cout << "Array[" << i << "][" << j << "][" << k << "][" << l << "]: " << arr[i][j][k][l] << std::endl;
                }
            }
        }
    }

    return 0;
}
```
Output :
```
Masukkan 24 angka:
Array[0][0][0][0]: 1
Array[0][0][0][1]: 2
Array[0][0][0][2]: 3
Array[0][0][1][0]: 4
Array[0][0][1][1]: 5
Array[0][0][1][2]: 6
Array[0][1][0][0]: 7
Array[0][1][0][1]: 8
Array[0][1][0][2]: 9
Array[0][1][1][0]: 10
Array[0][1][1][1]: 11
Array[0][1][1][2]: 12
Array[1][0][0][0]: 13
Array[1][0][0][1]: 14
Array[1][0][0][2]: 15
Array[1][0][1][0]: 16
Array[1][0][1][1]: 17
Array[1][0][1][2]: 18
Array[1][1][0][0]: 19
Array[1][1][0][1]: 20
Array[1][1][0][2]: 21
Array[1][1][1][0]: 22
Array[1][1][1][1]: 23
Array[1][1][1][2]: 24

Nilai-nilai yang dimasukkan:
Array[0][0][0][0]: 1
Array[0][0][0][1]: 2
Array[0][0][0][2]: 3
Array[0][0][1][0]: 4
Array[0][0][1][1]: 5
Array[0][0][1][2]: 6
Array[0][1][0][0]: 7
Array[0][1][0][1]: 8
Array[0][1][0][2]: 9
Array[0][1][1][0]: 10
Array[0][1][1][1]: 11
Array[0][1][1][2]: 12
Array[1][0][0][0]: 13
Array[1][0][0][1]: 14
Array[1][0][0][2]: 15
Array[1][0][1][0]: 16
Array[1][0][1][1]: 17
Array[1][0][1][2]: 18
Array[1][1][0][0]: 19
Array[1][1][0][1]: 20
Array[1][1][0][2]: 21
Array[1][1][1][0]: 22
Array[1][1][1][1]: 23
Array[1][1][1][2]: 24
```
### 5. Array Lima Dimensi

Array lima dimensi adalah struktur data yang dapat menyimpan elemen-elemen dalam lima dimensi. Ini berarti array tersebut memiliki lima tingkat dimensi yang masing-masing dapat diindeks untuk mengakses elemen. 

Contoh :
``` C++
#include <iostream>

int main() {
    const int SIZE1 = 2;    // Jumlah elemen dimensi pertama
    const int SIZE2 = 2;    // Jumlah elemen dimensi kedua
    const int SIZE3 = 2;    // Jumlah elemen dimensi ketiga
    const int SIZE4 = 2;    // Jumlah elemen dimensi keempat
    const int SIZE5 = 3;    // Jumlah elemen dimensi kelima
    int arr[SIZE1][SIZE2][SIZE3][SIZE4][SIZE5];   // Deklarasi array lima dimensi

    // Memasukkan nilai-nilai ke dalam array
    std::cout << "Masukkan " << SIZE1 * SIZE2 * SIZE3 * SIZE4 * SIZE5 << " angka:\n";
    for (int i = 0; i < SIZE1; ++i) {
        for (int j = 0; j < SIZE2; ++j) {
            for (int k = 0; k < SIZE3; ++k) {
                for (int l = 0; l < SIZE4; ++l) {
                    for (int m = 0; m < SIZE5; ++m) {
                        std::cout << "Array[" << i << "][" << j << "][" << k << "][" << l << "][" << m << "]: ";
                        std::cin >> arr[i][j][k][l][m];
                    }
                }
            }
        }
    }

    // Mencetak nilai-nilai array
    std::cout << "\nNilai-nilai yang dimasukkan:\n";
    for (int i = 0; i < SIZE1; ++i) {
        for (int j = 0; j < SIZE2; ++j) {
            for (int k = 0; k < SIZE3; ++k) {
                for (int l = 0; l < SIZE4; ++l) {
                    for (int m = 0; m < SIZE5; ++m) {
                        std::cout << "Array[" << i << "][" << j << "][" << k << "][" << l << "][" << m << "]: " << arr[i][j][k][l][m] << std::endl;
                    }
                }
            }
        }
    }

    return 0;
}
```
Output :
```
Masukkan 48 angka :
Array[0][0][0][0][0]: 1
Array[0][0][0][0][1]: 2
Array[0][0][0][0][2]: 3
Array[0][0][0][1][0]: 4
Array[0][0][0][1][1]: 5
Array[0][0][0][1][2]: 6
Array[0][0][1][0][0]: 7
Array[0][0][1][0][1]: 8
Array[0][0][1][0][2]: 9
Array[0][0][1][1][0]: 10
Array[0][0][1][1][1]: 11
Array[0][0][1][1][2]: 12
Array[0][1][0][0][0]: 13
Array[0][1][0][0][1]: 14
Array[0][1][0][0][2]: 15
Array[0][1][0][1][0]: 16
Array[0][1][0][1][1]: 17
Array[0][1][0][1][2]: 18
Array[0][1][1][0][0]: 19
Array[0][1][1][0][1]: 20
Array[0][1][1][0][2]: 21
Array[0][1][1][1][0]: 22
Array[0][1][1][1][1]: 23
Array[0][1][1][1][2]: 24
Array[1][0][0][0][0]: 25
Array[1][0][0][0][1]: 26
Array[1][0][0][0][2]: 27
Array[1][0][0][1][0]: 28
Array[1][0][0][1][1]: 29
Array[1][0][0][1][2]: 30
Array[1][0][1][0][0]: 31
Array[1][0][1][0][1]: 32
Array[1][0][1][0][2]: 33
Array[1][0][1][1][0]: 34
Array[1][0][1][1][1]: 35
Array[1][0][1][1][2]: 36
Array[1][1][0][0][0]: 37
Array[1][1][0][0][1]: 38
Array[1][1][0][0][2]: 39
Array[1][1][0][1][0]: 40
Array[1][1][0][1][1]: 41
Array[1][1][0][1][2]: 42
Array[1][1][1][0][0]: 43
Array[1][1][1][0][1]: 44
Array[1][1][1][0][2]: 45
Array[1][1][1][1][0]: 46
Array[1][1][1][1][1]: 47
Array[1][1][1][1][2]: 48

Nilai-nilai yang dimasukkan :
Array[0][0][0][0][0]: 1
Array[0][0][0][0][1]: 2
Array[0][0][0][0][2]: 3
Array[0][0][0][1][0]: 4
Array[0][0][0][1][1]: 5
Array[0][0][0][1][2]: 6
Array[0][0][1][0][0]: 7
Array[0][0][1][0][1]: 8
Array[0][0][1][0][2]: 9
Array[0][0][1][1][0]: 10
Array[0][0][1][1][1]: 11
Array[0][0][1][1][2]: 12
Array[0][1][0][0][0]: 13
Array[0][1][0][0][1]: 14
Array[0][1][0][0][2]: 15
Array[0][1][0][1][0]: 16
Array[0][1][0][1][1]: 17
Array[0][1][0][1][2]: 18
Array[0][1][1][0][0]: 19
Array[0][1][1][0][1]: 20
Array[0][1][1][0][2]: 21
Array[0][1][1][1][0]: 22
Array[0][1][1][1][1]: 23
Array[0][1][1][1][2]: 24
Array[1][0][0][0][0]: 25
Array[1][0][0][0][1]: 26
Array[1][0][0][0][2]: 27
Array[1][0][0][1][0]: 28
Array[1][0][0][1][1]: 29
Array[1][0][0][1][2]: 30
Array[1][0][1][0][0]: 31
Array[1][0][1][0][1]: 32
Array[1][0][1][0][2]: 33
Array[1][0][1][1][0]: 34
Array[1][0][1][1][1]: 35
Array[1][0][1][1][2]: 36
Array[1][1][0][0][0]: 37
Array[1][1][0][0][1]: 38
Array[1][1][0][0][2]: 39
Array[1][1][0][1][0]: 40
Array[1][1][0][1][1]: 41
Array[1][1][0][1][2]: 42
Array[1][1][1][0][0]: 43
Array[1][1][1][0][1]: 44
Array[1][1][1][0][2]: 45
Array[1][1][1][1][0]: 46
Array[1][1][1][1][1]: 47
Array[1][1][1][1][2]: 48
```
## Guided 

### 1. Program Input Array Tiga Dimensi
``` C++
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
```
### Output :
![Screenshot (57)](https://github.com/Zvarxs/PASD-2/assets/162097128/7f274397-ddcb-495d-8e77-1779333eb15c)
![Screenshot (58)](https://github.com/Zvarxs/PASD-2/assets/162097128/fd532cf7-5e66-4c3d-9046-c3bfbfd3882a)
![Screenshot (59)](https://github.com/Zvarxs/PASD-2/assets/162097128/ba3b8ba4-a9c0-4fb6-a75a-1f81f4144e9e)

Program diatas menggambarkan cara kerja array tiga dimensi dan bagaimana mengakses serta menampilkan nilainya menggunakan loop bersarang untuk setiap dimensi.

### 2. Program Mencari Nilai Maksimal pada Array
``` C++
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
```
### Output :
![Screenshot (60)](https://github.com/Zvarxs/PASD-2/assets/162097128/555ab860-c618-4af8-b480-90f3bc613b8d)

program diatas menggambarkan bagaimana menggunakan array dan loop untuk mencari nilai maksimum dalam sebuah array yang diinputkan oleh pengguna.

## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
``` C++
#include <iostream>
#include <vector>

int main() {
    // Mendeklarasikan variabel dan vektor
    int num;
    std::vector<int> dataArray;
    std::vector<int> evenNumbers;
    std::vector<int> oddNumbers;

    // Input data array dari pengguna
    std::cout << "Masukkan 10 angka: ";
    for (int i = 0; i < 10; ++i) {
        std::cin >> num;
        dataArray.push_back(num);
    }

    // Memisahkan angka genap dan ganjil
    for (int i = 0; i < 10; ++i) {
        if (dataArray[i] % 2 == 0) {
            evenNumbers.push_back(dataArray[i]);
        } else {
            oddNumbers.push_back(dataArray[i]);
        }
    }

    // Menampilkan output
    std::cout << "Data Array: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << dataArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Nomor Genap: ";
    for (int i = 0; i < evenNumbers.size(); ++i) {
        std::cout << evenNumbers[i];
        if (i != evenNumbers.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    std::cout << "Nomor Ganjil: ";
    for (int i = 0; i < oddNumbers.size(); ++i) {
        std::cout << oddNumbers[i];
        if (i != oddNumbers.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    return 0;
}
```
#### Output:
![Screenshot (44)](https://github.com/Zvarxs/PASD-2/assets/162097128/880f2c8a-f728-4a02-b777-3e38e117dcf1)

Kode di atas digunakan memasukkan 10 angka, memisahkan angka-angka genap dan ganjil, dan mencetak kembali hasilnya.

#### Full code Screenshot:
![Screenshot (41)](https://github.com/Zvarxs/PASD-2/assets/162097128/ece07d9e-3f59-4541-8271-647efcf85b4f)
@![Screenshot (42)](https://github.com/Zvarxs/PASD-2/assets/162097128/4d45e09c-913e-44b6-8c40-38ae8387d332)
![Screenshot (43)](https://github.com/Zvarxs/PASD-2/assets/162097128/1d9e23dd-9e93-44af-a866-087c62b4e207)

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!
``` C++
#include <iostream>
#include <vector>

int main() {
    int size1, size2, size3;

    // Meminta pengguna untuk memasukkan ukuran elemen array tiga dimensi
    std::cout << "Masukkan ukuran elemen array tiga dimensi (format: size1 size2 size3): ";
    std::cin >> size1 >> size2 >> size3;

    // Mendeklarasikan array tiga dimensi berdasarkan ukuran yang dimasukkan pengguna
    std::vector<std::vector<std::vector<int>>> array3D(size1, std::vector<std::vector<int>>(size2, std::vector<int>(size3)));

    // Meminta pengguna untuk memasukkan nilai-nilai array
    std::cout << "Masukkan nilai-nilai array tiga dimensi:\n";
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            for (int k = 0; k < size3; ++k) {
                std::cout << "Array[" << i << "][" << j << "][" << k << "]: ";
                std::cin >> array3D[i][j][k];
            }
        }
    }

    // Menampilkan nilai-nilai array yang dimasukkan pengguna
    std::cout << "Nilai-nilai array tiga dimensi yang dimasukkan:\n";
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            for (int k = 0; k < size3; ++k) {
                std::cout << "Array[" << i << "][" << j << "][" << k << "]: " << array3D[i][j][k] << std::endl;
            }
        }
    }

    return 0;
}
```
#### Output:
![Screenshot (47)](https://github.com/Zvarxs/PASD-2/assets/162097128/143d4f10-9b6a-4757-8de3-b321d23d4408)

Kode di atas digunakan untuk memasukkan ukuran elemen array tiga dimensi dan nilai-nilainya secara interaktif.

#### Full code Screenshot:
![Screenshot (45)](https://github.com/Zvarxs/PASD-2/assets/162097128/aab8631d-7c9a-47b4-baee-c6c8dd4b392f)
![Screenshot (46)](https://github.com/Zvarxs/PASD-2/assets/162097128/b271a6fa-c30e-4228-8336-135395affd2a)

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!
``` C++
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Masukkan jumlah elemen array: ";
    std::cin >> n;

    // Membuat vektor untuk menyimpan elemen-elemen array
    std::vector<int> arr(n);

    // Memasukkan elemen-elemen array dari pengguna
    std::cout << "Masukkan " << n << " elemen array:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Menampilkan menu
    std::cout << "\nMenu:\n";
    std::cout << "1. Cari nilai maksimum\n";
    std::cout << "2. Cari nilai minimum\n";
    std::cout << "3. Cari nilai rata-rata\n";
    std::cout << "Pilih opsi (1/2/3): ";

    int choice;
    std::cin >> choice;

    // Memproses opsi yang dipilih oleh pengguna
    switch(choice) {
        case 1:
            // Mencari nilai maksimum menggunakan fungsi std::max_element
            if (!arr.empty()) {
                std::cout << "Nilai maksimum: " << *std::max_element(arr.begin(), arr.end()) << std::endl;
            } else {
                std::cout << "Array kosong\n";
            }
            break;
        case 2:
            // Mencari nilai minimum menggunakan fungsi std::min_element
            if (!arr.empty()) {
                std::cout << "Nilai minimum: " << *std::min_element(arr.begin(), arr.end()) << std::endl;
            } else {
                std::cout << "Array kosong\n";
            }
            break;
        case 3:
            // Menghitung nilai rata-rata
            if (!arr.empty()) {
                double sum = 0;
                for (int i = 0; i < n; ++i) {
                    sum += arr[i];
                }
                double average = sum / n;
                std::cout << "Nilai rata-rata: " << average << std::endl;
            } else {
                std::cout << "Array kosong\n";
            }
            break;
        default:
            std::cout << "Pilihan tidak valid\n";
            break;
    }

    return 0;
}
```
#### Output:
![Screenshot (56)](https://github.com/Zvarxs/PASD-2/assets/162097128/47fe5200-3394-4a84-818d-9b19a91a1704)

Kode di atas digunakan untuk menampilkan menu dengan tiga opsi: mencari nilai maksimum, minimum, atau nilai rata-rata dari array yang dimasukkan.

#### Full code Screenshot:
![Screenshot (51)](https://github.com/Zvarxs/PASD-2/assets/162097128/d83083f3-c098-4156-8961-407a1daea052)
![Screenshot (52)](https://github.com/Zvarxs/PASD-2/assets/162097128/e4c688d5-5aed-45a2-88c1-8383adcff706)
![Screenshot (54)](https://github.com/Zvarxs/PASD-2/assets/162097128/12bc42f4-7909-4f6d-b1ae-5162e07cd1aa)
![Screenshot (55)](https://github.com/Zvarxs/PASD-2/assets/162097128/c4e29624-43ac-4e68-94be-40d788ea6e1a)

## Kesimpulan
Pembelajaran modul Array ini memberikan landasan yang kuat dalam memahami konsep dasar array dan penerapannya dalam pemrograman C++, serta meningkatkan pemahaman tentang konsep pemrograman secara umum.

## Referensi
[1] Suryana, T. (2022). Array Dalam C++.
[2] lestari, K. (2019, March 29). STUKTUR DATA STATIS ARRAY.
[3] Pratama, M. A. (2020). STRUKTUR DATA ARRAY DUA DIMENSI PADA PEMROGRAMAN C++.
[4] lestari, Komang. “STUKTUR DATA STATIS ARRAY.” OSF Preprints, 29 Mar. 2019. Web.
[5] https://www.quora.com/What-is-a-4-dimensional-array 

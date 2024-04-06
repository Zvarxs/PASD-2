# <h1 align="center">Laporan Praktikum Modul Sraching</h1>
<p align="center">Ananda Rizky</p>
<p align="center">2311110019</p>

## Dasar Teori

Searching adalah tindakan mengambil data dari kumpulan data berdasarkan kunci (key) atau referensi data. Di kehidupan sehari-hari, kita sering berurusan dengan pencarian. Misalnya, mencari nomor telepon
seseorang di buku telepon, atau mencari kata pada kamus, dan masih banyak
lagi. Pencarian sering dilakukan dalam aplikasi komputer. Misalnya, jika ingin
menghapus atau mengubah data/record tertentu dalam suatu file, harus
terlebih dahulu menentukan apakah data tersebut ada dalam file. Jika ada,
maka data dapat dihapus atau diubah. [1] Terdapat 2 metode pada algoritma Searching, yaitu: 

### 1. Sequential Search

Sequential search adalah metode pencarian paling sederhana. Proses pencarian sequential yaitu dengan membandingkan setiap elemen array satu per satu secara beruntun, dimulai dengan elemen pertama, sampai elemen yang dicari ditemukan atau sampai elemen terakhir dari array. Pencarian sekuensial dapat dilakukan pada elemen array yang tidak diurutkan atau pada
elemen array yang diurutkan. Perbedaan antara keduanya terletak pada efisiensi operasi perbandingan yang dilakukan. Dengan begitu, proses
pencarian sequential akan singkat jika data yang diolah sedikit, dan jika data
yang diolah banyak, prosesnya akan lama. Maka, metode ini direkomendasikan untuk data yang sedikit. [1]

Contoh:

```
data = [10, 25, 8, 14, 20, 6]
```

Cari nilai 14 di dalam array tersebut.

1. Pencarian dimulai
2. Input: array data[], nilai yang dicari (14)
3. Inisialisasi variabel posisi = -1 (posisi awal tidak ditemukan)
4. Lakukan langkah berikut untuk setiap elemen dalam array:
     a. Bandingkan elemen saat ini dengan nilai yang dicari
     b. Jika elemen saat ini sama dengan nilai yang dicari:
          i. Set posisi sama dengan indeks elemen saat ini
          ii. Keluar dari loop
5. Jika posisi tidak sama dengan -1, tampilkan "Nilai ditemukan di indeks posisi"
6. Jika posisi sama dengan -1, tampilkan "Nilai tidak ditemukan dalam array"
7. Selesai

Perapkan algoritma untuk mencari nilai 14 dalam array yang diberikan:

1. Dimulai dari elemen pertama:
   - 10 != 14
2. Lanjutkan ke elemen berikutnya:
   - 25 != 14
3. Lanjutkan ke elemen berikutnya:
   - 8 != 14
4. Lanjutkan ke elemen berikutnya:
   - 14 == 14
     - Set posisi = 3 (indeks ke-3)
     - Keluar dari loop
5. Karena posisi tidak sama dengan -1, kita tampilkan "Nilai ditemukan di indeks 3"

Selesai.

### 2. Binary Search

Dalam Pencarian Binary Search, Data yang ada harus diurutkan terlebih dahulu berdasarkan suatu urutan tertentu yang dijadikan kunci pencarian. Adalah teknik pencarian data dalam dengan cara membagi data menjadi dua bagian setiap kali terjadi proses pencarian. Prinsip pencarian biner adalah:

Data diambil dari posisi 1 sampai posisi akhir N Kemudian cari posisi data tengah dengan rumus: (posisi awal + posisi akhir) / 2. Kemudian data yang dicari dibandingkan dengan data yang di tengah, apakah sama atau lebih kecil, atau lebih besar? Jika lebih besar, maka proses pencarian dicari dengan posisi awal adalah posisi tengah + 1 Jika lebih kecil, maka
proses pencarian dicari dengan posisi akhir adalah posisi tengah - 1 Jika
data sama, berarti ketemu. [2]

Contoh:
![Binary Search](https://github.com/Zvarxs/PASD-2/assets/162097128/fd23f5ab-e55a-4875-af98-3fd21d052b19)

## Guided 

### 1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data. 

Source code:

``` C++
#include <iostream>
using namespace std;
int main(){
 int n = 10;
 int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
 int cari = 10;
 bool ketemu = false;
 int i;
 // algoritma Sequential Search
 for (i = 0; i < n; i++){
 if(data[i] == cari){
 ketemu = true;
 break;
 }
 }
 cout << "\t Program Sequential Search
Sederhana\n" << endl;
 cout << " data: {9, 4, 1, 7, 5, 12, 4, 13, 4,
10}"<< endl;
 if (ketemu){
 cout << "\n angka "<< cari << " ditemukan pada
indeks ke-" << i << endl;
 } else {
 cout << cari << " tidak dapat ditemukan pada
data." << endl;
 }
}
 return 0;
```

Output:
![Program Sequential Search Sederhana](https://github.com/Zvarxs/PASD-2/assets/162097128/2525ab0b-5f54-4a26-9ed7-ac2f382875b2)

Kodingan di atas digunakan untuk mencari nilai tertentu dalam array menggunakan algoritma Sequential Search dan menampilkan hasilnya kepada pengguna.

### 2. Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search

Source Code:

``` C++
#include <iostream>
using namespace std;
#include <conio.h>
#include <iomanip>
int data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;
void selection_sort()
{
 int temp, min, i, j;
 for(i=0; i<7;i++)
 {
 min = i;
 for(j = i+1; j<7; j++)
 {
 if(data[j]<data[min])
{
 min=j;
 }
 }
 temp = data[i];
 data[i] = data[min];
 data[min] = temp;
 }
}
void binarysearch()
{
 //searching
 int awal, akhir, tengah, b_flag = 0;
 awal = 0;
 akhir = 7;
 while (b_flag == 0 && awal<=akhir)
 {
 tengah = (awal + akhir)/2;
 if(data[tengah] == cari)
 {
 b_flag = 1;
break;
 }
 else if(data[tengah]<cari)
 awal = tengah + 1;
 else
 akhir = tengah -1;
 }
 if(b_flag == 1)
 cout<<"\n Data ditemukan pada index ke-
"<<tengah<<endl;
 else
 cout<<"\n Data tidak ditemukan\n";
}
int main()
{
 cout<<"\t BINARY SEARCH "<<endl;
 cout<<"\n Data : ";
 //tampilkan data awal
 for(int x = 0; x<7; x++)
 cout<<setw(3)<<data[x];
 cout<<endl;
 cout<<"\n Masukkan data yang ingin Anda cari : ";
 cin>>cari;
 cout<<"\n Data diurutkan : ";
 //urutkan data dengan selection sort
 selection_sort();
 //tampilkan data setelah diurutkan
 for(int x = 0; x<7;x++)
 cout<<setw(3)<<data[x];
 cout<<endl;
 binarysearch();
 _getche();
}
 return EXIT_SUCCESS;
```

Output:
![Binary Search](https://github.com/Zvarxs/PASD-2/assets/162097128/fbf3cc0f-ff40-4f03-a5ff-aa71470f75e3)

Kodingan binary search diatas digunakan untuk menggunakan algoritma search yang efisien untuk mencari nilai dalam array yang sudah diurutkan.

## Unguided

### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

#### Input

```C++
#include <iostream>
#include <iomanip>
using namespace std;

string lowercase(string kalimat) {
    for (int i = 0; i < kalimat.length(); ++i) {
        kalimat[i] = tolower(kalimat[i]);
    }
    return kalimat;
}

bool binarySearch(string kalimat, char huruf) {
    int awal = 0;
    int akhir = kalimat.length() - 1;

    while (awal <= akhir) {
        int tengah = (awal + akhir) / 2;

        if (kalimat[tengah] == huruf)
            return true;

        else if (kalimat[tengah] < huruf)
            awal = tengah + 1;

        else
            akhir = tengah - 1;
    }
 
    return false;
}

int main() {
    string kalimat;
    char huruf;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan huruf yang ingin Anda cari: ";
    huruf = cin.get(); 
    cout << endl;

    kalimat = lowercase(kalimat);

    if (binarySearch(kalimat, huruf))
        cout << "Huruf '" << huruf << "' ditemukan dalam kalimat." << endl;
    else
        cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << endl;

    return 0;
}
```

#### Output
![Output 1](https://github.com/Zvarxs/PASD-2/assets/162097128/949d8451-e6a9-4f2f-9ec8-a2d36c57b23b)

Kodingan diatas digunakan untuk dapat mencari huruf dalam kalimat dengan cepat, terutama jika kalimat tersebut cukup panjang.

### 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!

#### Input

```C++
#include <iostream>
using namespace std;

int hitungVokal(string kalimat) {
    int jumlahVokal = 0;
    for (char karakter : kalimat) {
        karakter = tolower(karakter);
        if (karakter == 'a' || karakter == 'e' || karakter == 'i' || karakter == 'o' || karakter == 'u') {
            jumlahVokal++;
        }
    }
    return jumlahVokal;
}

int main() {
    string kalimat;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);
    
    int jumlahVokal = hitungVokal(kalimat);

    cout << "Jumlah huruf vokal dalam kalimat adalah: " << jumlahVokal << endl;

    return 0;
}
```

#### Output:
![Output 2](https://github.com/Zvarxs/PASD-2/assets/162097128/d698c843-5003-4d6d-991c-c749b1c883ef)

Kodingan diatas digunakan untuk dapat menghitung jumlah huruf vokal dalam kalimat yang dimasukkan oleh pengguna dengan tepat. Juga untuk memastikan bahwa pengecekan huruf vokal tidak bergantung pada huruf besar atau kecil karena mengonversi semua karakter menjadi huruf kecil sebelum melakukan pengecekan.

### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

#### input

```C++
#include <iostream>
using namespace std;

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int panjang_data = sizeof(data) / sizeof(data[0]);
    int angka_dicari = 4;
    int count = 0; 

    for (int i = 0; i < panjang_data; ++i) {
        if (data[i] == angka_dicari) {
            count++; 
        }
    }

    cout << "Jumlah kemunculan angka 4 dalam data adalah: " << count << endl;

    return 0;
}
```

### output
![Output 3](https://github.com/Zvarxs/PASD-2/assets/162097128/e565c449-719b-4855-8641-e9589429c8ff)

Kodingan diatas digunakan untuk menghitung berapa banyak angka 4 dalam data yang diberikan dengan menggunakan algoritma Sequential Search.

## Kesimpulan
Dari modul 4 - algoritma searching, seperti sequential search dan binary search, membantu saya untuk memahami perbedaan dalam efisiensi waktu dan ruang antara algoritma-algoritma tersebut.

## Referensi
[1] Putra, M. T. D., Munawir, M., & Yuniarti, A. R. (2023). BELAJAR PEMROGRAMAN LANJUT DENGAN C++.
[2] FIRLIANA, R., & Kasih, P. (2018). Algoritma dan Pemrograman C++.memberikan fondasi yang kuat dalam pemrograman dan
# <h1 align="center">Laporan Praktikum Modul Shorting</h1>
<p align="center">Ananda Rizky</p>
<p align="center">2311110019</p>

## Dasar Teori

### 1. Konsep Dasar Sorting
sorting merupakan salah satu konsep yang sangat penting dalam dunia pemrograman komputer dan merupakan materi operasi yang paling banyak dipelajari dalam dunia komputer. Terdapat banyak bentuk algoritma telah dikembangkan dan ditingkatkan untuk membuat pengurutan lebih cepat baik untuk angka ataupun huruf. Semakin efisien suatu algoritma, maka saat dieksekusi dan dijalankan akan menghabiskan waktu yang
lebih cepat dan bisa menerima lebih banyak masukan dari user. Secara umum ada 2 jenis
pengurutan (sorting) data yaitu pengurutan naik (ascending), yaitu jika data disusun mulai dari nilai yang paling kecil hingga yang paling besar dan pengurutan turun (descending), yaitu jika data yang disusun mulai dari nilai yang paling besar hingga paling kecil. Algoritma pemrograman pengurutan sangat banyak dan bervariasi dari yang sederhana hingga yang kompleks. Karena materi pengurutan salah satu materi yang sangat banyak dipelajari sehingga
banyak metode pengurutan yang ditemukan atau digunakan untuk melakukan pengurutan data diantaranya metode Insertion sort, Selection sort, Bubble Sort. [1]

### 2. Insertion Sort

Menurut Munir (2011) menjelaskan
bahwa Insertion Sort adalah metode
pengurutan dengan cara menyisipkan
elemen larik pada posisi yang tepat.
Cara kerja algoritma ini adalah dengan
mengambil elemen list satu-per-satu dan
memasukkannya di posisi yang benar
seperti namanya. Pada array, list yang baru
dan elemen sisanya dapat berbagi tempat di
array, meskipun cukup rumit. Untuk
menghemat memori, implementasinya
menggunakan pengurutan di tempat yang
membandingkan elemen saat itu dengan
elemen sebelumnya yang sudah diurut, lalu
menukarnya terus sampai posisinya tepat.
Hal ini terus dilakukan sampai tidak ada
elemen tersisa di input (Tjaru, 2010).

Pseudocode Algoritma Insertion Sort:

```
for i = 1 to n-1
set j = i
set t = a[j]
repeat while j > 0 and a[j-1] > t
move a[j-1] to right
end repeat
set a[j] = t
end for

```

Prosedur Insertion Sort dalam bahasa C++:

``` C++
void insertion_sort(int arr[], int length) {
int i, j ,tmp;
for (i = 1; i < length; i++) {
 j = i;
while (j > 0 && arr[j - 1] > arr[j]) {
 tmp = arr[j];
 arr[j] = arr[j - 1];
 arr[j - 1] = tmp;
 j--;
 }//end of while loop
}//end of for loop
}
```

**Contoh**

Diketahui array suatu integer terdiri dari 6 elemen sebagai berikut; {22, 10, 15, 3, 8, 2}. Contoh program untuk mengurutkan ke-6 elemen tersebut adalah sebagai berikut:

```
#include <iostream>
using namespace std;
void insertion_sort(int arr[], int length) {
 int i, j ,tmp;
 for (i = 1; i < length; i++) {
 j = i;
 while (j > 0 && arr[j - 1] > arr[j]) {
 tmp = arr[j];
 arr[j] = arr[j - 1];
 arr[j - 1] = tmp;
 j--;
 }//end of while loop
 }//end of for loop
}
void print_array(int a[], int length) {
 for(int i=0; i<length; i++) {
 cout << a[i] << "\t";
 }
 cout << endl;
}
int main() {
 int length = 6;
 int a[length] = {22, 10, 15, 3, 8, 2};
 insertion_sort(a, length);
 print_array(a, length);
}
```

### 3. Bubble Sort

Algoritma Bubble Sort adalah algoritma yang terinspirasi dari gelembung sabun yang
berada pada permukaan air. Karena berat jenis gelembung sabun lebih ringan daripada berat jenis air, maka gelembung sabun akan terapung ke atas permukaan. Apabila kita menginginkan larik terurut naik, maka elemen larik yang paling kecil diapungkan ke atas melalui proses pertukaran atau bisa disebutkan bahwa arah perbandingan dilakukan dari belakang. [1] 

Contoh prosedur Bubble Sort dalam bahasa C++ :

``` C++
void bubble_sort(int arr[], int length){
 bool not_sorted = true;
 int j=0,tmp;

 while (not_sorted){
    not_sorted = false;
    j++;
    for (int i = 0; i < length - j; i++){
        if (arr[i] > arr[i + 1]) {
            tmp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;
            not_sorted = true;
        }//end of if
    }//end of for loop
    }//end of while loop
}//end of bubble_sort
```

### 3. Selection Sort

Menurut Munir (2011), Selection sort
adalah suatu metode pengurutan yang
memilih elemen maksimum/minimum dari
larik, lalu menempatkan elemen
maksimum/minimum itu pada awal atau
akhir larik (elemen terujung).
Konsep proses selection sort adalah
mencari (memilih) nilai terkecil dan
menukarnya dengan elemen paling awal
(paling kiri) pada setiap tahap. Proses Sort dilakukan tahap per tahap. Untuk n = 7
maka akan dilakukan (n – 1) = 6 tahap
(Yahya, 2014). [2]

Contoh prosedur Selection Sort:

```
void selectSort(int arr[], int n) {
 int pos_min,temp;
for (int i=0; i < n-1; i++) {
 pos_min = i;
for (int j=i+1; j < n; j++) {
 if (arr[j] < arr[pos_min])
 pos_min=j;
}
 if (pos_min != i) {
 temp = arr[i];
 arr[i] = arr[pos_min];
 arr[pos_min] = temp;
 }
}
}
```

## Guided 

### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort

``` C++
#include <iostream>
using namespace std;

void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j=0;
    double tap;

    while (not_sorted){
        not_sorted = false;
        j++;
        for(int i = 0; i < length - j; j++){
            if(arr[i] > arr[i + 1]){
                tap = arr[i];
                arr[i] = arr[i +1];
                arr[i + 1] = tap;
                not_sorted = true;
            }// end off it 
        }// end for loop
        
    }// end of while loop
}// end of buble short 

void print_array(double a[], int length) {

    for(int i=0; i < length; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main(){
    int length = 4;
    double a[] = {15.7, 87.3, 7.5, 88.5, 67.9};
    cout << "urutan bilangan sebelum sorting : " << endl;
    print_array(a, length);
    bubble_sort(a, length);
    cout << "\n urutan bilangan setelah sortiing: " << endl;
    print_array(a, length);
}
```

Kodingan di atas digunakan untuk menggambarkan cara kerja algoritma bubble sort secara ascending pada array bilangan pecahan dan mencetak hasilnya sebelum dan setelah pengurutan.

### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort

``` C++
#include <iostream>
using namespace std;

void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;
    for (i = 1; i < length; i++) {
        j = i;
        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        } // end of while loop
    } // end of for loop
}

void print_array(char a[], int length) {
    for (int i = 0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};
    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);
    insertion_sort(a, length);
    cout << "\nUrutan karakter setelah sorting: " << endl;
    print_array(a, length);
}
```

 Kodingan diatas digunakan untuk menggambarkan cara kerja algoritma insertion sort secara descending pada array karakter dan mencetak hasilnya sebelum dan setelah pengurutan.

## Unguided

### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort!

### Input

```C++
#include <iostream>

void selectionSort(double arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int max_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        std::swap(arr[i], arr[max_idx]);
    }
}

int main() {
    const int n = 5;
    double ips[n] = {3.8, 2.9, 3.3, 4.0, 2.4};

    std::cout << "IPS sebelum diurutkan: ";
    for (int i = 0; i < n; ++i) {
        std::cout << ips[i] << " ";
    }
    std::cout << std::endl;

    selectionSort(ips, n);

    std::cout << "IPS setelah diurutkan dari terbesar hingga terkecil: ";
    for (int i = 0; i < n; ++i) {
        std::cout << ips[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
```
### Output
![Screenshot (81)](https://github.com/Zvarxs/PASD-2/assets/162097128/d5703aad-bfde-4b98-8e0b-9d405bb10ccb)

#### Analisis Kompleksitas Waktu:
 Terdapat dua loop
 . Loop pertama berjalan sebanyak n-1 kali, sedangkan loop kedua berjalan sebanyak (n-1) + (n-2) + ... + 1 = (n-1) * n / 2 kali.

Jadi, jumlah operasi komparasi yang dilakukan adalah sekitar n * (n-1) / 2. Dalam notasi Big O, kompleksitas waktu algoritma ini adalah O(n^2).

#### Analisis Kompleksitas Ruang:
Kompleksitas ruangnya adalah O(1), yang berarti kompleksitas ruang konstan, dan ompleksitas waktu algoritma ini adalah O(n^2) dan kompleksitas ruangnya adalah O(1).

### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!

### Input

```C++
#include <iostream>
#include <string>

void bubbleSort(std::string arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int n = 10;
    std::string names[n] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};

    std::cout << "Nama-nama sebelum diurutkan: ";
    for (int i = 0; i < n; ++i) {
        std::cout << names[i] << " ";
    }
    std::cout << std::endl;

    bubbleSort(names, n);

    std::cout << "Nama-nama setelah diurutkan secara alfabet: ";
    for (int i = 0; i < n; ++i) {
        std::cout << names[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

### Output:
![Screenshot (82)](https://github.com/Zvarxs/PASD-2/assets/162097128/a12965f4-bc7c-4a8f-a6c7-5945e01c232f)

#### Analisis Kompleksitas Waktu:
Terdapat dua loop bersarang. Loop pertama berjalan sebanyak n-1 kali, sedangkan loop kedua berjalan sebanyak (n-1) + (n-2) + ... + 1 = (n-1) * n / 2 kali.

Jadi, jumlah operasi komparasi yang dilakukan adalah sekitar n * (n-1) / 2. Dalam notasi Big O, kompleksitas waktu algoritma ini adalah O(n^2).

#### Analisis Kompleksitas Ruang:
Kompleksitas ruangnya adalah O(1), yang berarti kompleksitas ruang konstan, dan kompleksitas waktu algoritma ini adalah O(n^2) dan kompleksitas ruangnya adalah O(1).

### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)!

### input

```C++
#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cout << "Masukkan jumlah karakter: ";
    std::cin >> n;

    char characters[n];
    
    std::cout << "Masukkan " << n << " karakter: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> characters[i];
    }

    // Output urutan karakter sebelum sorting
    std::cout << "Urutan karakter sebelum sorting: ";
    for (int i = 0; i < n; ++i) {
        std::cout << characters[i] << " ";
    }
    std::cout << std::endl;

    // Sorting naik (ascending)
    std::sort(characters, characters + n);

    std::cout << "Hasil sorting naik (ascending): ";
    for (int i = 0; i < n; ++i) {
        std::cout << characters[i] << " ";
    }
    std::cout << std::endl;

    // Sorting turun (descending)
    std::sort(characters, characters + n, std::greater<char>());

    std::cout << "Hasil sorting turun (descending): ";
    for (int i = 0; i < n; ++i) {
        std::cout << characters[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

### output
![Screenshot (83)](https://github.com/Zvarxs/PASD-2/assets/162097128/69cdb34f-befc-49f8-a062-1f4bc87bedf0)

Baik, berikut adalah analisis yang lebih rinci:

#### Analisis Kompleksitas Waktu:

1. **Input Karakter**:
   - Kompleksitas waktu: O(n)
   - Penjelasan: Program menerima input sejumlah `n` karakter dari pengguna. Iterasi dilakukan sebanyak `n` kali, di mana `n` adalah jumlah karakter yang dimasukkan.

2. **Sorting Naik dan Turun**:
   - Kompleksitas waktu: O(n log n)
   - Penjelasan: Pengurutan dilakukan dua kali menggunakan fungsi `std::sort()`. Algoritma pengurutan yang digunakan biasanya adalah quick sort atau merge sort, yang memiliki kompleksitas waktu rata-rata O(n log n) dalam kasus terburuk.

#### Analisis Kompleksitas Ruang:

1. **Array Characters**:
   - Kompleksitas ruang: O(n)
   - Penjelasan: Array `characters` digunakan untuk menyimpan `n` karakter yang dimasukkan oleh pengguna. Oleh karena itu, ruang yang diperlukan untuk array ini adalah sebesar `n`.

Kompleksitas waktu dan ruang tergantung pada jumlah karakter yang dimasukkan oleh pengguna, diwakili oleh `n`.

## Kesimpulan
Mempelajari algoritma sorting memberikan pemahaman mendalam tentang cara efisien menyusun dan mengurutkan data dalam sebuah program. Dengan pemahaman tersebut, pengembang dapat memilih algoritma yang tepat sesuai dengan kompleksitas waktu dan ruang yang dibutuhkan untuk menyelesaikan tugas tertentu. Selain itu, penggunaan algoritma sorting membantu meningkatkan kinerja aplikasi dan mengoptimalkan penggunaan sumber daya komputasi, yang merupakan aspek krusial dalam pengembangan perangkat lunak modern.

## Referensi
[1] Arifin, R. W., & Setiyadi, D. (2020). Algoritma Metode Pengurutan Bubble Sort dan Quick Sort Dalam Bahasa Pemrograman C++. INFORMATION SYSTEM FOR EDUCATORS AND PROFESSIONALS: Journal of Information System, 4(2), 178-â.
[2] Maulana, R. (2016). Analisa Perbandingan Kompleksitas Algoritma Selectionsort Dan Insertionsort. Jurnal Informatika, 3(2).
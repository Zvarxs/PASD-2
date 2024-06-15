
# <h1 align="center">Laporan Praktikum Modul PRIORITY QUEUE DAN HEAPS</h1>
<p align="center">Ananda Rizky</p>

## Dasar Teori

Priority queue adalah jenis struktur data yang mengatur elemen-elemennya berdasarkan nilai prioritas relatif mereka. Elemen-elemen dengan nilai prioritas yang lebih tinggi akan diambil atau diproses lebih dahulu daripada elemen-elemen dengan nilai prioritas yang lebih rendah.

Dalam priority queue, setiap elemen memiliki nilai prioritas yang terkait dengannya. Saat menambahkan elemen ke dalam antrian, elemen tersebut ditempatkan dalam urutan yang sesuai dengan nilai prioritasnya. Sebagai contoh, jika sebuah elemen dengan nilai prioritas yang tinggi dimasukkan ke dalam priority queue, elemen tersebut mungkin ditempatkan di dekat bagian depan antrian, sementara elemen dengan nilai prioritas yang lebih rendah mungkin ditempatkan lebih ke belakang.

Struktur data heap adalah sebuah objek array yang dapat divisualisasikan dengan sebuah complete binary tree.[1]



## Guided 
### 1.
```C++
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return (2 * i) + 1;
}

int rightChild(int i) {
    return (2 * i) + 2;
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    if (heapSize < 0) {
        std::cerr << "Error: Heap is empty." << std::endl;
        return -1; // or some error value
    }
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    if (heapSize < 0) {
        std::cerr << "Error: Heap is empty." << std::endl;
        return -1; // or some error value
    }
    return H[0];
}

int main() {
    // Example usage:
    insert(45);
    insert(20);
    insert(14);
    insert(12);
    insert(31);
    insert(7);
    insert(11);
    insert(13);
    insert(7);

    std::cout << "Max element: " << getMax() << std::endl;
    std::cout << "Extracted max: " << extractMax() << std::endl;
    std::cout << "Max element after extraction: " << getMax() << std::endl;

    changePriority(2, 49);
    std::cout << "Max element after priority change: " << getMax() << std::endl;

    return 0;
}
```



Kode tersebut mengimplementasikan struktur data max-heap dalam C++. Array H menyimpan elemen heap, dan heapSize melacak ukurannya. Fungsi parent, leftChild, dan rightChild menghitung indeks elemen induk dan anak. Fungsi shiftUp dan shiftDown memulihkan properti heap setelah elemen ditambahkan atau diubah. Fungsi insert menambah elemen baru, sementara extractMax menghapus dan mengembalikan elemen maksimum. Fungsi changePriority mengubah prioritas elemen, dan getMax mengembalikan elemen maksimum tanpa menghapusnya. Fungsi main menunjukkan penggunaan dasar dengan memasukkan elemen, mengekstraksi maksimum, dan mengubah prioritas elemen.

## Unguided 

### 1. Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user.

```C++
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return (2 * i) + 1;
}

int rightChild(int i) {
    return (2 * i) + 2;
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    if (heapSize < 0) {
        std::cerr << "Error: Heap is empty." << std::endl;
        return -1; // or some error value
    }
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    if (heapSize < 0) {
        std::cerr << "Error: Heap is empty." << std::endl;
        return -1; // or some error value
    }
    return H[0];
}

int main() {
    int n;
    std::cout << "Masukkan jumlah elemen: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int val;
        std::cout << "Masukkan elemen ke-" << i + 1 << ": ";
        std::cin >> val;
        insert(val);
    }

    std::cout << "Elemen maksimum: " << getMax() << std::endl;

    std::cout << "Mengambil elemen maksimum: " << extractMax() << std::endl;
    std::cout << "Elemen maksimum setelah pengambilan: " << getMax() << std::endl;

    int index, newPriority;
    std::cout << "Masukkan indeks elemen yang ingin diubah prioritasnya (0 hingga " << heapSize << "): ";
    std::cin >> index;
    std::cout << "Masukkan prioritas baru: ";
    std::cin >> newPriority;
    changePriority(index, newPriority);
    std::cout << "Elemen maksimum setelah perubahan prioritas: " << getMax() << std::endl;

    return 0;
}
```

#### Output:
![image](https://github.com/chelsisdeo/praksrtukdata/assets/161056340/effd7f13-932a-4e4d-8f4d-b4980a66a149)

Pengguna diminta untuk memasukkan jumlah elemen yang ingin dimasukkan, kemudian memasukkan setiap elemen satu per satu. Kode ini juga menyediakan fungsi untuk menampilkan elemen maksimum, mengambil elemen maksimum, dan mengubah prioritas elemen tertentu dalam heap, memungkinkan interaksi dan modifikasi heap sesuai dengan input pengguna.

#### Full code Screenshot:
![image](https://github.com/chelsisdeo/praksrtukdata/assets/161056340/72a03adf-b060-4b26-a787-1aa87b9f95c1)

## Kesimpulan
Saya telah mempelajari tentang priority queue dan heaps. Priority queue adalah struktur data yang mirip dengan queue, tetapi elemennya memiliki prioritas, di mana elemen dengan prioritas tertinggi akan diambil terlebih dahulu.

## Referensi
[1] Situmorang, H. (2016). Simulasi Pengurutan Data dengan Algoritma Heap Sort. Jurnal Mahajana Informasi, 1(2), 20-30.

# <h1 align="center">Laporan Praktikum Modul GRAPH DAN TREE</h1>
<p align="center">Ananda Rizky</p>

## Dasar Teori

### GRAPH 

Graf atau graph adalah struktur data yang digunakan untuk merepresentasikan hubungan antara objek dalam bentuk node atau vertex dan sambungan antara node tersebut dalam bentuk sisi atau edge.



### TREE

Dalam ilmu komputer, pohon/tree adalah struktur data yang sangat umum dan kuat yang menyerupai nyata pohon. Ini terdiri dari satu set node tertaut yang terurut dalam grafik yang terhubung, dimana setiap node memiliki paling banyak satu simpul induk, dan nol atau lebih simpul anak dengan urutan tertentu. simple nya dan dapat di katakan ,Tree adalah graph terhubung yang tidak memiliki siklus[1]

Binary Tree (Pohon Biner):

Setiap node memiliki paling banyak dua anak, yang disebut anak kiri dan anak kanan.
Binary Search Tree (BST) (Pohon Biner Pencarian):

Pohon biner di mana setiap node mengikuti properti: anak kiri memiliki nilai lebih kecil daripada node induk, dan anak kanan memiliki nilai lebih besar daripada node induk.
Balanced Tree (Pohon Seimbang):

Pohon yang mempertahankan keseimbangan agar tinggi pohon tetap O(log n). Contohnya:
AVL Tree: Pohon biner pencarian yang memastikan tinggi dari dua subpohon anak-anak dari setiap node berbeda paling banyak satu.
Red-Black Tree: Pohon biner pencarian yang mengikuti aturan khusus untuk memastikan pohon tetap seimbang secara logaritmik.
B-Tree:

Pohon pencarian yang umum digunakan dalam sistem basis data dan sistem file. B-Tree mempertahankan data dalam urutan yang diurutkan dan memungkinkan pencarian, penyisipan, penghapusan, dan akses sequential dalam waktu yang logaritmik.
Heap:

Struktur data berbentuk pohon biner lengkap yang memenuhi properti heap. Terdapat dua jenis heap:
Max-Heap: Setiap node induk memiliki nilai lebih besar atau sama dengan nilai anak-anaknya.
Min-Heap: Setiap node induk memiliki nilai lebih kecil atau sama dengan nilai anak-anaknya.
Trie (Prefix Tree):

Pohon yang digunakan untuk menyimpan kumpulan string. Setiap node mewakili satu karakter dari string. Tries sangat efisien untuk operasi pencarian dan penyisipan string.
Segment Tree:

Pohon yang digunakan untuk menyimpan interval atau segmen. Digunakan untuk berbagai jenis kueri interval seperti jumlah, minimum, maksimum, dan lainnya dalam waktu logaritmik.
Fenwick Tree (Binary Indexed Tree):

Pohon biner yang digunakan untuk efisien mengupdate elemen dan menghitung jumlah prefiks dalam array.
N-ary Tree:

Setiap node dapat memiliki paling banyak N anak. Merupakan generalisasi dari pohon biner di mana N bisa berupa bilangan bulat berapa pun.


## Guided 1. 

```C++
#include <iostream>
#include <iomanip>

using namespace std;

string simpul[7] = {
    "Ciamis", "Bandung", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"
};

int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 0, 15, 0},
    {0, 6, 0, 0, 5, 0, 0},
    {0, 5, 0, 0, 2, 4, 0},
    {23, 0, 0, 10, 0, 0, 8},
    {0, 0, 0, 0, 7, 0, 3},
    {0, 0, 0, 0, 9, 4, 0},
};

void tampilGraph() {
    for (int baris = 0; baris < 7; baris ++) {
        cout << " " << setiosflags(ios::left) << setw(15) << simpul[baris] << ":";
        for (int kolom = 0; kolom < 7; kolom ++) {
            if (busur [baris][kolom] != 0) {
                cout << " " << simpul[kolom] << "(" << busur[baris][kolom] << ")";
            }
        }
        cout << endl;
    }
}

int main() {
    tampilGraph();
    return 0;
}
```
Kode di atas adalah contoh implementasi graf menggunakan matriks ketetanggaan dalam bahasa C++. Simpul-simpul graf direpresentasikan oleh array string, sementara hubungan antar simpul direpresentasikan oleh matriks busur, di mana nilai-nilai matriks menunjukkan bobot busur. Fungsi tampilGraph() digunakan untuk menampilkan graf dalam bentuk matriks ketetanggaan, menampilkan simpul yang terhubung beserta bobotnya. Dalam fungsi main(), tampilGraph() dipanggil untuk menampilkan graf yang telah dibuat.

## Guided 2.

``` c++
#include <iostream>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    //constuctor
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder (TNode *node) {
    if (node != NULL) {
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void inOrder (TNode *node) {
    if (node != NULL) {
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
}

void postOrder (TNode *node) {
    if (node != NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

int main() {
    TNode*zero = new TNode(0);
    TNode*one = new TNode(1);
    TNode*five = new TNode(5);
    TNode*seven = new TNode(7);
    TNode*eight = new TNode(8);
    TNode*nine = new TNode(9);

    seven->left = one;

    seven->right = nine;

    one->left = zero;

    one->right = five;

    nine->left = eight;

    preOrder(seven);
    cout << endl;

    inOrder(seven);
    cout << endl;

    postOrder(seven);
    cout << endl;

    return 0;
}

```
Kode di atas adalah contoh implementasi struktur data pohon biner dalam bahasa C++. Struktur TNode digunakan untuk merepresentasikan pohon biner, dengan tiga anggota: data untuk menyimpan nilai, left untuk menunjuk ke anak kiri, dan right untuk menunjuk ke anak kanan. Fungsi preOrder, inOrder, dan postOrder digunakan untuk melakukan penelusuran prapenelusuran, penelusuran dalam, dan penelusuran pasca urutan secara rekursif pada pohon biner. Dalam fungsi main(), beberapa node pohon biner dibuat dan diatur hubungannya, lalu dilakukan penelusuran prapenelusuran, penelusuran dalam, dan penelusuran pasca urutan untuk mengakses nilai-nilai pohon biner tersebut.

## Unguided 


#### 1.	Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.
Output Program
![image](https://github.com/chelsisdeo/praksrtukdata/assets/161056340/7245190f-d3c1-4d7a-92c7-4752505a42e9)

```C++
#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Graph {
    vector<string> simpul;
    vector<vector<int>> bobot;
};

int main() {
    int jumlahSimpul;
    
    cout << "Silahkan masukkan jumlah simpul: ";
    cin >> jumlahSimpul;
    
    
    Graph graf;
    graf.simpul.resize(jumlahSimpul);
    graf.bobot.resize(jumlahSimpul, vector<int>(jumlahSimpul));
    
    cout << "Silahkan masukkan nama simpul" << endl;
    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << "Simpul " << i+1 << " : ";
        cin >> graf.simpul[i];
    }
    
    cout << "Silahkan masukkan bobot antar simpul" << endl;
    for (int i = 0; i < jumlahSimpul; ++i) {
        for (int j = 0; j < jumlahSimpul; ++j) {
            cout << graf.simpul[i] << "-->" << graf.simpul[j] << " = ";
            cin >> graf.bobot[i][j];
        }
    }
    
    
    cout << "\t";
    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << graf.simpul[i] << "\t";
    }
    cout << endl;
    
    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << graf.simpul[i] << "\t";
        for (int j = 0; j < jumlahSimpul; ++j) {
            cout << graf.bobot[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}

```
#### Output:
![image](https://github.com/chelsisdeo/praksrtukdata/assets/161056340/ab65a917-6059-4fe1-8f73-e524e13e0cd5)


Dalam kode di atas, saya menggunakan struktur data Graph untuk merepresentasikan graf. Graph memiliki dua anggota: simpul, yang merupakan vektor string yang menyimpan nama-nama simpul, dan bobot, yang merupakan vektor dari vektor integer yang menyimpan bobot antar simpul. Program ini meminta pengguna untuk memasukkan jumlah simpul, nama-nama simpul, dan bobot antar simpul. Setelah itu, program akan menampilkan tabel bobot yang menunjukkan jarak antara setiap pasangan kota.

#### Full code Screenshot:
![image](https://github.com/chelsisdeo/praksrtukdata/assets/161056340/47aeab6f-0383-4dbf-ad3d-692939d6be71)


#### 2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan berikan fungsi tambahan untuk menampilkan node child dan descendant dari node yang diinput kan!


```C++
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct TreeNode {
    string data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(string value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};


void tambahChild(TreeNode* parent, string childData) {
    if (parent->left == NULL)
        parent->left = new TreeNode(childData);
    else if (parent->right == NULL)
        parent->right = new TreeNode(childData);
    else
        cout << "Node ini sudah memiliki dua child." << endl;
}

void tampilkanDescendant(TreeNode* node) {
    if (node == NULL)
        return;

    cout << node->data << " ";
    tampilkanDescendant(node->left);
    tampilkanDescendant(node->right);
}

int main() {
    int jumlahSimpul;
    
    cout << "Silahkan masukkan jumlah simpul: ";
    cin >> jumlahSimpul;
    
    
    string rootData;
    cout << "Masukkan data simpul root: ";
    cin >> rootData;
    TreeNode* root = new TreeNode(rootData);
    
    
    for (int i = 0; i < jumlahSimpul - 1; ++i) {
        string parentData, childData;
        cout << "Masukkan data simpul parent: ";
        cin >> parentData;
        cout << "Masukkan data simpul child: ";
        cin >> childData;

        
        TreeNode* parent = NULL;
        
        tambahChild(parent, childData);
    }

    
    cout << "Descendant dari setiap simpul:" << endl;
    

    return 0;
}

```
#### Output:
![image](https://github.com/chelsisdeo/praksrtukdata/assets/161056340/e576f53f-578e-41c4-98e0-84bf597961ff)

Program ini memungkinkan pengguna untuk memasukkan jumlah simpul dan data simpul root, lalu membangun struktur pohon dengan menambahkan anak ke setiap node induk yang diinputkan. Setelah pohon dibuat, program menampilkan keturunan dari setiap node. Ini memberi pengguna kendali atas pembuatan pohon dan memungkinkan mereka untuk melihat hubungan antar node dengan menampilkan keturunan.

#### Full code Screenshot:
![image](https://github.com/chelsisdeo/praksrtukdata/assets/161056340/c6cdaae5-a5fb-467f-907d-749103ac6997)


## Kesimpulan
pada hari ini Saya belajar tentang operasi dasar seperti penelusuran dan manipulasi struktur data graf dan tree. Dengan memahami konsep dan operasi dasar ini, saya memiliki dasar yang kuat untuk memahami dan mengimplementasikan algoritma yang lebih kompleks yang melibatkan graf dan tree di masa depan.

## Referensi
[1] Susanto, L. A., Wiharja, K. R. S., & Puspitasari, S. Y. (2015). Implementasi Dan Analisis Visualisasi Graph Pada Graph Statis Menggunakan Representasi Visual Treemap. eProceedings of Engineering, 2(3).



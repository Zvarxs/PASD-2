# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Ananda Rizky</p>

## Dasar Teori

Queue disebut juga antrian dimana data masuk di satu sisi dan keluar di sisi yang lain. Karena
itu, queue bersifat FIFO (FirstIn FirstOut). Antrian (Queue) merupakan suatu kumpulan data yang
penambahan elemennya (masuk antrian) hanya bisa dilakukan pada suatu ujung (disebut dengan sisi
belakang/rear) atau disebut juga enqueue yaitu apabila seseorang masuk ke dalam sebuah antrian. Jika
seseorang keluar dari antrian/penghapusan (pengembalian elemen) dilakukan lewat ujung yang lain
(disebut dengan sisi depan/front) atau disebut juga dequeue yaitu apabila seseorang keluar dari antrian.
Jadi, dalam antrian menggunakan prinsip “masuk pertama keluar pertama” atau disebut juga dengan
prinsip FIFO (first in first out). Dengan kata lain, urutan keluar akan sama dengan urutan masuknya.

## Guided 1

C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5;
int front = 0;
int back = 0;

string queueTeller[5];

bool isFull() {
    if (back == maksimalQueue) {
        return true;
    } else {
        return false;
    }
}

bool isEmpty() {
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) {
    if (isFull()) {
        cout << "Antrian Penuh" << endl;
    } else {
        queueTeller[back] = data;
        back++;
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back - 1; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() {
    return back;
}

void clearQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() {
    cout << "Data antrian teller: " << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}


### output
![SS](https://github.com/Zvarxs/PASD-2/assets/162097128/144389cc-de2b-464d-a574-8abda52b6e13)

Program ini memiliki beberapa fungsi dasar untuk mengelola antrian, seperti menambahkan data ke antrian (enqueue), menghapus data dari antrian (dequeue), menghitung jumlah data dalam antrian, membersihkan seluruh antrian, dan menampilkan isi antrian.

## Unguided 

### 1. Ubahlah penerapan konsep queue pada bagian guided dari array menjadi linked list.


C++
#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
};

const int maksimalQueue = 5;

class Queue {
private:
    Node* front;
    Node* rear;
    int count;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
        count = 0;
    }

    bool isFull() {
        return (count == maksimalQueue);
    }

    bool isEmpty() {
        return (count == 0);
    }

    void enqueueAntrian(string data) {
        if (isFull()) {
            cout << "Antrian Penuh" << endl;
            return;
        }
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        count++;
    }

    void dequeueAntrian() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        delete temp;
        count--;
        if (front == nullptr) {
            rear = nullptr;
        }
    }

    int countQueue() {
        return count;
    }

    void clearQueue() {
        while (!isEmpty()) {
            dequeueAntrian();
        }
    }

    void viewQueue() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
            return;
        }
        Node* temp = front;
        cout << "Data antrian teller: " << endl;
        int i = 1;
        while (temp != nullptr) {
            cout << i << ". " << temp->data << endl;
            temp = temp->next;
            i++;
        }
    }

    ~Queue() {
        clearQueue();
    }
};

int main() {
    Queue myQueue;
    myQueue.enqueueAntrian("Andi");
    myQueue.enqueueAntrian("Maya");
    myQueue.viewQueue();
    cout << "Jumlah antrian = " << myQueue.countQueue() << endl;
    myQueue.dequeueAntrian();
    myQueue.viewQueue();
    cout << "Jumlah antrian = " << myQueue.countQueue() << endl;
    myQueue.clearQueue();
    myQueue.viewQueue();
    cout << "Jumlah antrian = " << myQueue.countQueue() << endl;
    return 0;
}


#### Output:
![SS2](https://github.com/Zvarxs/PASD-2/assets/162097128/98bb914e-c2ec-4d0e-b55f-95903b0a9b77)

Dalam implementasi ini, queue direpresentasikan sebagai sebuah linked list dengan setiap node yang memiliki data dan pointer ke node berikutnya. 
#### Full code Screenshot:
![SS1](https://github.com/Zvarxs/PASD-2/assets/162097128/580ac53c-e5b0-4bbb-bb29-63d3a670c3f5)


### 2. Dari nomor 1 buatlah konsep antri dengan atribut Nama mahasiswa dan NIM Mahasiswa

C++
#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
};

struct Node {
    Mahasiswa data;
    Node* next;
};

const int maksimalQueue = 5;

class Queue {
private:
    Node* front;
    Node* rear;
    int count;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
        count = 0;
    }

    bool isFull() {
        return (count == maksimalQueue);
    }

    bool isEmpty() {
        return (count == 0);
    }

    void enqueueAntrian(string nama, string nim) {
        if (isFull()) {
            cout << "Antrian Penuh" << endl;
            return;
        }
        Node* newNode = new Node;
        newNode->data.nama = nama;
        newNode->data.nim = nim;
        newNode->next = nullptr;
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        count++;
    }

    void dequeueAntrian() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        delete temp;
        count--;
        if (front == nullptr) {
            rear = nullptr;
        }
    }

    int countQueue() {
        return count;
    }

    void clearQueue() {
        while (!isEmpty()) {
            dequeueAntrian();
        }
    }

    void viewQueue() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
            return;
        }
        Node* temp = front;
        cout << "Data antrian mahasiswa: " << endl;
        int i = 1;
        while (temp != nullptr) {
            cout << i << ". Nama: " << temp->data.nama << ", NIM: " << temp->data.nim << endl;
            temp = temp->next;
            i++;
        }
    }

    ~Queue() {
        clearQueue();
    }
};

int main() {
    Queue myQueue;
    myQueue.enqueueAntrian("Andi", "12345");
    myQueue.enqueueAntrian("Maya", "67890");
    myQueue.viewQueue();
    cout << "Jumlah antrian = " << myQueue.countQueue() << endl;
    myQueue.dequeueAntrian();
    myQueue.viewQueue();
    cout << "Jumlah antrian = " << myQueue.countQueue() << endl;
    myQueue.clearQueue();
    myQueue.viewQueue();
    cout << "Jumlah antrian = " << myQueue.countQueue() << endl;
    return 0;
}


#### Output:
![SS3](https://github.com/Zvarxs/PASD-2/assets/162097128/a0957135-3e71-48f9-a9fc-c630bfbde7b4)

Dalam kode ini, saya menambahkan struktur Mahasiswa yang memiliki atribut nama dan nim. Kemudian, atribut data pada struktur Node diubah menjadi Mahasiswa. 

#### Full code Screenshot:
![SS4](https://github.com/Zvarxs/PASD-2/assets/162097128/aaeac5bb-c3a5-407f-a1cd-4ab1f2840534)


## Kesimpulan
Hari ini, kami mempelajari konsep dasar dan penerapan dari struktur data antrian (queue). Antrian mengikuti prinsip FIFO (First In First Out), di mana elemen pertama yang dimasukkan adalah yang pertama kali diambil. Kami belajar tentang operasi dasar pada queue seperti enqueue, dequeue, isEmpty, dan isFull, serta berbagai penerapan dalam konteks seperti simulasi antrian pelanggan, penjadwalan proses, dan lainnya.

## Referensi
[1] Rizky, A. (2023). Penerapan Algoritma Queue Pada Aplikasi Pemesanan Obat Berbasis Mobile Pada Apotek Aruba Farma Depok. LOGIC: Jurnal Ilmu Komputer dan Pendidikan, 1(5), 1168-1177.
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

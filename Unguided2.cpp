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

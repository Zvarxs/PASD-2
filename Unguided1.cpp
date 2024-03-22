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

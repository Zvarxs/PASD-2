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
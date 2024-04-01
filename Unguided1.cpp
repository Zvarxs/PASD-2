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
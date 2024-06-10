#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    n * faktorial(n-1)
    else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int angka;
    cout << "bilngan bulat fakt: ";
    cin >> angka;
    
    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl;
    
    return 0;
}

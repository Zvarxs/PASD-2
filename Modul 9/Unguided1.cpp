#include <iostream>

using namespade std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        function(n - 1);
    }
}

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        function(n / 1);
    }
}
#include <iostream>
using namespace std;

bool isAutomorphic(int n) {
    int square = n * n;
    while (n != 0) {
        if (n % 10 != square % 10) {
            return false;
        }
        n /= 10;
        square /= 10;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isAutomorphic(n)) {
        cout << "Automorphic number";
    } else {
        cout << "Not an Automorphic number";
    }
    return 0;
}
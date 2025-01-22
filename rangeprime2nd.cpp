#include <bits/stdc++.h>
using namespace std;

int main() {
    int start, last;
    cout << "Enter the range: ";
    cin >> start >> last;

    for (int i = start; i <= last; i++) {
        bool isPrime = true;
        if (i < 2) continue;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) cout << i << " is prime" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

bool isArmstrong(int n) {
    int sum = 0, temp = n;
    int digits = 0;

    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = n;
    while (temp != 0) {
        int ld = temp % 10;
        sum += pow(ld, digits);
        temp /= 10;
    }

    return sum == n; // if equal return true otherwise return false.
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) { //if return true
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
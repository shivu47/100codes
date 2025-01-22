#include <iostream>
using namespace std;

// Function to check if a number is a Harshad number
bool isHarshad(int n) {
    int temp = n;
    int sum = 0;

    // Calculate the sum of the digits
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    // Check if the number is divisible by the sum of its digits
    return (n % sum == 0);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Validate input
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Return non-zero to indicate an error
    }

    // Check and display if the number is a Harshad number
    if (isHarshad(n)) {
        cout << n << " is a Harshad number" << endl;
    } else {
        cout << n << " is not a Harshad number" << endl;
    }

    return 0;
}

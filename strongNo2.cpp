//Strong Numbers is a number in which the sum of the factorial of individual
// digits of the numbers is equal to the number itself.

// For Example: 145 
// 145 = 1! x 4! x 5! =  145
#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {   //find factorial of last digit
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    int originalNum = n; // store the original number
    while (n > 0) {   
        int ld = n % 10;
        sum = sum + factorial(ld);
        n = n / 10;
    }
    cout << "Sum of factorials: " << sum << endl;
    if (sum == originalNum) {
        cout << "The number is a strong number." << endl;
    } else {
        cout << "The number is not a strong number." << endl;
    }
    return 0;
}
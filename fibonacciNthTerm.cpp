// Finding the Nth Term of the Fibonacci Series in C++
// 0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,

#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 1;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int next = 0; 

    if (n == 1) {
        cout << a;
    } else if (n == 2) {
        cout << b;
    } else {
        
        for (int i = 3; i <= n; i++) {  //main logic of this code
            next = a + b;
            a = b;
            b = next;
        }
        cout << next; 
    }

    return 0;
}

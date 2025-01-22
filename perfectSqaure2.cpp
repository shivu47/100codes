// A perfect number is a number in which the sum of the proper positive
// divisors of the number is equal to the number itself.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;  //let n=25

    int sqrt_n = sqrt(n); //find sqaure root like 25 ka 5..
    bool isPerfectSquare = (sqrt_n * sqrt_n) == n;   //check if (5*5 == 25) if yes ..
                                                     //isperfectsqaure = true.

    if(isPerfectSquare) cout << n << " is a perfect square";
    else cout << n << " is not a perfect square";

    return 0;
}
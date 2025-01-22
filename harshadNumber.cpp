/* A Harshad number is a positive integer that is divisible by the sum of the 
digits of the integer. It is also called the Niven number.
For Example : 153
Sum of digits = 1 + 5 + 3 = 9

153 is divisible by 9 so 153 is a Harshad Number. */

#include<iostream>
using namespace std;

bool isHarshad(int n){
    int temp=n;
    int sum=0;
    while(temp>0){
        sum += temp%10;
        temp /= 10;
    }
    if((n % sum) == 0){    
        return true;
    }

    return false;
}

int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    if(isHarshad(n)) cout<<"Harshad number";
    else 
    cout<<"Not Harshad";
    return 0;
}

//prepinsta 2 and gpt
// float getSum(int n) {
//     int sum = 0;
//     for (int i = 1; i <= sqrt(n); i++) {
//         if ((n % i) == 0) {
//             sum += i;
//             if (n / i != i && i != 1) {
//                 sum += n / i;
//             }
//         }
//     }
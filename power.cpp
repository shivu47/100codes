// c++ program to the Power of a number

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cout<<"enter no"<<endl;
// cin>>n;
// int exp;
// cout<<"enter exponent";
// cin>>exp;
// int res=1;
// for (int i = 1; i <= exp; i++)  //it handle only positive number
// {
//     res = res * n;
// }
// cout<<res;
// return 0;
// };

//METHOD----->2
//Handling Postive and Negative number

#include<iostream>
using namespace std;

int main() 
{
    double base;
    int expo;
    
    // Taking inputs from user
    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> expo;

    double res = 1.0;
    
    // Handling positive exponent
    while (expo > 0) {
        res *= base;
        expo--;
    }
    
    // Handling negative exponent
    while (expo < 0) {
        res /= base;
        expo++;
    }
    
    cout << "Result = " << res << endl;
    
    return 0;
}

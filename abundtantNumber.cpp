// An abundant number, also known as an excessive number, is a positive integer that 
// is smaller than the sum of its proper divisors (excluding the number itself).
#include<bits/stdc++.h>
using namespace std;

bool isAbundant(int n){  //function for check abundant number
    int temp=n;  //no need of temp variable
    int sum=0;
  for (int i = 1; i < n; i++) // (i<=n/2) The loop runs only up to n / 2 because no divisor
    {                         // of n is greater than n / 2 (except n itself, which we exclude).
        if((temp%i) == 0) {
            sum += i;
        }
    }
    
    return sum > n;
}


int main(){
int n;
cout<<"Enter a number";
cin>>n;

 // Validate input
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Return non-zero to indicate an error
    }

   if(isAbundant(n)){
    cout<<"This is a abundant number";
   }
   else{
    cout<<"This is not a abundant number";
   }

  return 0;
}
//wap to find factorial of number
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter a number";
cin>>n;

if (n < 0) {
        cout << "Factorial is not defined for negative numbers.";
        return 1; // return 1; (or any non-zero value) indicates an error.
                  //  in the context of program termination. 
    }
      
  long long fact=1; // can use "long long " instead of int for handle large number
for (int i = 1; i <= n; i++)
{
    fact *= i;
}
cout<<fact;
return 0;// indicate successfull termination of code
}

// we can use if and else for for-loop when n>=0  then we dont have to use return 1.
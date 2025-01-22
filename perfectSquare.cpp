//perfect sqaure or not
// A perfect number is a number in which the sum of the proper positive
// divisors of the number is equal to the number itself.
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter a number";
cin>>n;
bool isPerfectSqaure = false;
for (int i = 0; i <= n; i++)
{
    if((i*i) == n) isPerfectSqaure = true;
}

if(isPerfectSqaure) cout<<n <<" is a perfect sqaure";
else cout <<n << " is not a perfect square";
return 0;
}
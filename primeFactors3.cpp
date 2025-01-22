//Better optimization and T.C= O(sqrt n)
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter a number";
cin>>n;
vector<int>primeFactors;

for (int i = 2; i*i <= n; i++)   //can also be i <= sqrt(n)
{
    while( (n%i) == 0){           //Remove all the factor i from n
        primeFactors.push_back(i);
        n = n/i;
    }
}
if(n > 1){    //deal with bacha hua prime number last me because i<=sqrt(n) satisfy nhi krega 
    primeFactors.push_back(n);
}

for (int i = 0; i < primeFactors.size(); i++)
{
    cout << primeFactors[i]<< " ";
}



return 0;
}
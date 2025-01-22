// find prime factors like input=36 output=[2,2,3,3] ,,,input=24 output=[2,2,2,3]like this

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter a number";
cin>>n;
vector<int>primeFactors;
for (int i = 2; i <= n; i++)
{
    while(n%i == 0) {
       primeFactors.push_back(i);
       n = n/i; 
    }
}
for (int i = 0; i < primeFactors.size(); i++)
{
    cout<<primeFactors[i]<<" ";
}


return 0;
}

//T.C = O(n)
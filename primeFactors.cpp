// find prime factors like input=36 output=[2,2,3,3] ,,,input=24 output=[2,2,2,3]like this

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter a number";
cin>>n;
vector<int>pm;
for (int i = 2; i <= n; i++)
{
    if((n%i == 0)){      //this is my method its run butt...dumb way  
    pm.push_back(i);
    n = n/i;
    i=1;
    }
    
}
for (int i = 0; i < pm.size(); i++)
{
   cout<<pm[i]<<" ";
}


return 0;
}
// T.C==O(n)
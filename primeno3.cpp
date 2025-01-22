#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int a=0;
cin>>n;
for (int i = 2; i < n; i++)
{
    if(n%i==0){
    a=1;
    break;}
}
if(n<2)cout<<"not prime";
else if(a==0)cout<<"prime";
else cout<<"not prime";


return 0;
}
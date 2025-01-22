#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int reverse=0;
cout<<"enter a number";
cin>>n;
while(n!=0)
{
    int ld = n % 10;
    reverse = (reverse *10) + ld;
    n = n/10;
}
cout<<reverse;
return 0;
}
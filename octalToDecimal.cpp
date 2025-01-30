#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a octal number :";
cin>>n;
int ld;
int ans=0;
int pow=1;
while (n>0)
{
    ld = n%10;
    ans+= ld*pow;
    pow*=8;
    n/=10; 
}
cout<<"Decimal no : "<<ans;

return 0;
}
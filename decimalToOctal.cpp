//program to convert decimal no to octal no.
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a decimal number";
cin>>n;
int rem,ans=0;
int pow= 1;
while (n>0)
{
    rem= n%8; // 
    ans+= rem*pow; // rem * 10's multiple then add to answer
    pow*=10; // unit place 1* , tenth place 10* and so on...
    n/=8; // quotient is new number 
}
cout<<"octal no :"<<ans;

return 0;
}
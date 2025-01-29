#include<iostream>
using namespace std;
int main(){
int dec_no;
cout<<"Enter a decimal number";
cin>>dec_no;
int rem,pow=1,ans=0;
while(dec_no>0){
    rem = dec_no%2;
    ans+= rem*pow;
    dec_no/=2;
    pow*=10;
}
cout<<ans;
return 0;
}
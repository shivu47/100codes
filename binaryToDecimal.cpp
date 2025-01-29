#include<iostream>
using namespace std;
int main(){  //101 =6 , 1000=8
int bin_no;
cout<<"Enter a binary no :";
cin>>bin_no;
int pow = 1; // update pow *=2
int last_digit,ans=0;
while (bin_no>0)
{
    last_digit = bin_no%10;
    ans+= last_digit*pow; //multiply ld * 2's multiple then add to answer variable

    bin_no/=10; //remove last digit 
    pow*=2; //update power like --> 1,2,4,8,16,32 (2 ka power increase by 1)

}
cout<<ans ;//decimal form
return 0;
}
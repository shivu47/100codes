#include<iostream>
#include<math.h>
using namespace std;
int main(){
int low;
int high;
cout<<"Enter range";
cin>>low>>high;


for(int i=low; i<=high; i++){
int temp=i;
int original=i;
int sum=0;
int countDigit=0;

//count digit
while(temp!=0){
    temp=temp/10;
    countDigit++;
}

//find sum of digit each raised to power to the length of number..
temp = i;
while(temp!=0){
    int ld= temp % 10;
    sum= sum + pow(ld, countDigit);
     temp= temp/10;
}
if(sum==original){
    cout<<original<<" ";
}
} //for loop parenthesis

return 0;
};
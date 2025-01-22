#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(int n){
    int temp=n;
    int countDigit=0;
    int sum=0;
    
    //count digit of number
    while(temp!=0){
    temp/=10;
    countDigit++;
    }
    
    temp=n; //Reset value of temp 

    while(temp!=0){
        int ld = temp%10;
        sum += pow(ld,countDigit);
        temp/=10;
    }
    return sum == n;   //if equal return true else return false
};

int main(){
   int low,high;
   cout<<"Enter the range";
   cin>>low>>high;
   for (int i = low; i <= high; i++)
   {
    if(isArmstrong(i)){     //if this function return true then if(true)..print i(armstrong no)
        cout<<i<<" ";}; 
   } //for loop


return 0;
};
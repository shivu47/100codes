#include<bits/stdc++.h>
using namespace std;

int countdigit(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}

int calculateSum (int n, int count){
    int sum=0;
    while(n!=0){
        int ld= n%10;
        sum=sum+ pow(ld,count);
        n=n/10;
    }
    return sum;
}


int main(){
    int n;
    cout<<"enter a positve no";
    cin>>n;
    int original = n;
    int count= countdigit(n);
    int sum=calculateSum(n, count);
    if(original==sum) cout<<"armstrong";
    else cout<<"not armstrong";
return 0;
}
#include<iostream>
using namespace std;
int gcd(int a,int b){
    int hcf = 1;
    for(int i =1; i<=a || i<=b; i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf;
}
int main(){
int a,b;
cout<<"enter no";
cin>>a>>b;
cout<<gcd(a,b);
return 0;
}
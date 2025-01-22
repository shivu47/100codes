#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter a no";
cin>>n;
int sum=0;
while(n!=0){
sum=sum+(n%10);
n=n/10;
}
cout<<sum;


return 0;
}
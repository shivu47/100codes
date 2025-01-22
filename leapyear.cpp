#include<bits/stdc++.h>
using namespace std;
int main(){
int year;
cout<<"enter year";
cin>>year;
if(year%4==0){
    cout<<"leap year or 366 days ";
}
else if(year%4==0 && year%100!=0){
    cout<<"leap year or 366 days ";
}
else cout<<"not a leap year";



return 0;
}
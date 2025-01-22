#include<bits/stdc++.h>
using namespace std;
int main(){
int start;
int last;
cout<<"ENter the range";
cin>>start>>last;
for(int i = start; i<=last; i++)
{   
    int a=0;
    if(i<2) continue;
    
    for(int j = 2; j < i; j++)
    {
        if(i%j == 0){
        a=1;
        break;
        }
    }
    if(a==0)cout<<i<<" " << "prime" << endl;
}
return 0;
}
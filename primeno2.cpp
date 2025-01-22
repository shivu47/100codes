#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
bool isprime = true;
if(n<2){
    isprime=false;
}
else{
for (int i = 2; i < n; i++)
{
    if (n % i == 0) {
    isprime=false;
    break;   //this will exit the loop
    }  
}//for loop parenthesis
}//else parenthesis

if (isprime) {
    cout << "The number " << n << " is Prime";
} else {
    cout << "The number " << n << " is not Prime";
}

return 0;
}
//divisor, count and sum of a number
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int count=0;
int sum=0;
cout<<"enter a number";
cin>>n;
for (int i = 1; i <= sqrt(n); i++)
{
    if((n % i) == 0){
       cout<<i <<" "<<n/i<< endl;
       count +=1;
       sum += i;
       if(n/i != i){   // (6 != 6)  --> this is false expression so not run this condition
        sum += n/i;
        count++;
       }
    }

}
cout<<sum<< " "<< count;

return 0;
}

//TC= (root n)
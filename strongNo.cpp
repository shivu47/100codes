// Strong Numbers is a number in which the sum of the factorial of individual
// digits of the numbers is equal to the number itself.

// For Example: 145 
// 145 = 1! x 4! x 5! =  145

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter a number";
cin>>n;
int sum=0;
int original = n;
while (n>0)
{
    int ld = n%10;
    int fact=1;
    for (int i = 1; i <= ld; i++)
    {
        fact = fact*i;
    }
    sum = sum + fact;
    n = n/10;
}
cout<<sum<<endl;
if(original == sum)
{
    cout << sum <<" is a strong number";
}
else cout<<original<<" is not a strong number";

return 0;
}
// Abundant //number is an number in which the sum of the proper //
// divisors of the number is greater than the number itself.//


#include<bits/stdc++.h>
using namespace std;
bool isAbundant(int n){
    int sum=1;
    for(int i=2; i <= sqrt(n); i++){
        if ((n % i)== 0){
            // cout<< i<<" " << n/i <<endl;
            sum += i;
           if (n/i != i) {  //sirf 6 ke liye nhi chlega baaki sb ke liye chlega
            sum += n/i;
            }
        }
    }
    return sum > n;
}



int main(){
int n;
cout<<"enter a number";
cin>>n;  //36w
if(isAbundant(n)){
    cout<<"Abundant number";
}
else{
    cout<<"Not a abundant number";
}
return 0;
}
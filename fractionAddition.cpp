#include<iostream>
using namespace std;

int gcd(int a,int b){ //hcf code
    int hcf = 1;
    for(int i =1; i<=a || i<=b; i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf;
}
int main(){
    cout<<"enter numbers";
int num1,den1,num2,den2;
cin>>num1>>den1>>num2>>den2;
int lcm = den1*den2/gcd(den1,den2); // this is new denominator after taking lcm of both denominator
int a = (lcm/den1)*num1;
int b = (lcm/den2)*num2;
int final_num= a+b; //numerator after adding both numerator
int hcf = gcd(final_num,lcm); //for getting small number after divide both nume and deno
cout<<final_num/hcf<<"/"<<lcm/hcf;

return 0;
}
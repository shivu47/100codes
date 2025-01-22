//WAP to print fibonacci series upto n number
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377,
#include<iostream>
#include<math.h>
using namespace std;

int main(){
   int n;  
   int a=0;
   int b=1;
   cout<<"Enter a number";
   cin>>n;
   cout<<a <<","<< b << ",";  // printing 0,1

   int nextTerm;
   for(int i=3; i<=n; i++){
      nextTerm=a+b;
      a=b;
      b=nextTerm;
      cout<<nextTerm<<",";
   }



    return 0;
}
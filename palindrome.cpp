#include <iostream>
using namespace std;
int main() {
    int n;
    int original;  // store the original value of n.
    int reverse=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    original = n;
    while(n!=0){
        int ld= n % 10;
        reverse = reverse * 10 + ld;
        n=n/10;
    }
    cout<<reverse<<endl;
    if(original==reverse)cout<<"this is palindrome";
    else cout<<"not a palindrome";
    return 0;
}

//hexadecimal has 16 base 0 to 9 then A,B,C,D,E,F
#include<iostream>
using namespace std;

void gethexadecimal(int n){
    char arr[100];//result store in this array
    int pos=0;
    while (n>0)
    {
        int rem =0;
        rem = n%16; //finding remainder of n to add into our array.

        //main logic
        if (rem<10)
        {
            arr[pos]=rem+48; // because ascii of 0=48;
            pos++;
        }
        else{ //when remainder will 10,11,12,13,14,15
             arr[pos]=rem+55; // ascii of A=65,B=66,C=67...and so on..
             pos++;
        }
        
        n = n/16;
    }
    // now reverse the array for hexadecimal no
    for (int i = pos-1; i >=0; i--) //pos-1 == size of char array (how many digit are there in array)
    {
        cout<<arr[i];
    }
    

}
int main(){
    int decimal_no;
    cout<<"Enter no :";
    cin>>decimal_no;
    gethexadecimal(decimal_no);
return 0;
}
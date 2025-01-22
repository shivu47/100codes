//This is better optimization T.C = O(sqrtn)
#include<iostream>
using namespace std;

int getSum(int n){
    int sum=0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if ((n % i) == 0)
        {
            sum += i;
            if (n/i != i)
            {
                sum += n/i;
            }
            
        }
        
    }
    
    return sum;
}

int main ()
{
    int num1, num2;
    cout<<"Enter two numbers";
    cin>>num1>>num2;
    
    int sum1 = getSum(num1);
    int sum2 = getSum(num2);
    
    if(sum1/num1 == sum2/num2)
        cout << num1 << " & " << num2 << " are friendly pairs";
    else
        cout << num1 << " & " << num2 << " are not friendly pairs";

}
/* Primes sum
Difficulty: EasyAccuracy: 29.18%Submissions: 46K+Points: 2
Given a number N. Find if it can be expressed as sum of two prime numbers.

Example 1:

Input: N = 34
Output: "Yes" 
Explanation: 34 can be expressed as 
sum of two prime numbers.
Example 2:

Input: N = 23
Output: "No"
Explanation: 23 cannnot be expressed as
sum of two prime numbers. 

Your Task:  
You dont need to read input or print anything. Complete the function isSumOfTwo() which takes N as input parameter and returns "Yes" if can be expressed as sum of two prime numbers. else return "No".

Expected Time Complexity: O(N*sqrt(N))
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 105 */

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public: 
    bool isprime(int n){
        if(n<2)return false;
        for(int i =2;i<=sqrt(n);i++){
            if(n%i==0)return false;
        }
        return true;
    }
    string isSumOfTwo(int N){
       int n = N/2;
           int a = N-1;
           int b=1;
        while(n>0){
           if(isprime(a)&&isprime(b))return "Yes";
           a--;
           b++;
           n--;
        }
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends
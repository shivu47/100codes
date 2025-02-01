//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
        int pow=1;//10 to the power 0.
        int ans=0;
        while(n>0){
        int ld=n%10;
         if(ld==0){
             ans+=5*pow;
         }
         else {
             ans+=ld*pow;
         }
         pow*=10;
         n/=10;
        }
       return ans;
       
     
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        int s=1,e=x,ans=-1;
        long long int mid= s+(e-s)/2;
        while(s<=e)
        {
            mid=(s+e)/2;
            if(mid*mid==x)
            return mid;
            else if(mid*mid>=x)
            e=mid-1;
            else
            {
                ans=mid;
                s=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends
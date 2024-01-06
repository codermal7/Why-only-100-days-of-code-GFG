//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> nums){
        int index=-1;
        if(n==1 || n==0) return nums;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                index=i;break;
            }
        }
        if(index==-1)
        reverse(nums.begin(),nums.end());
        else{
            for(int i=n-1;i>index;i--)
            {
                if(nums[i]>nums[index])
                {
                    swap(nums[i],nums[index]);break;
                }
            }
            reverse(nums.begin()+index+1,nums.end());
        }
        return nums;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
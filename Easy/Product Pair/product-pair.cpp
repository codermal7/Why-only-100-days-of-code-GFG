//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isProduct(int arr[], int n, long long x) {
        if (n < 2) 
            return false;

        unordered_set<int> s;
        for (int i = 0; i < n; i++) {
            // 0 case must be handles explicitly as
            // x % 0 is undefined behaviour in C++
            if (arr[i] == 0) {
                if (x == 0)
                    return true;
                else
                    continue;
            }

            // x/arr[i] exists in hash, 
            // then we found a pair
            if (x % arr[i] == 0) {
                if (s.find(x / arr[i]) != s.end()) return true;

                // Insert arr[i]
                s.insert(arr[i]);
            }
        }
        return false;
    }
};




//{ Driver Code Starts.

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        long long x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.isProduct(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
// } Driver Code Ends
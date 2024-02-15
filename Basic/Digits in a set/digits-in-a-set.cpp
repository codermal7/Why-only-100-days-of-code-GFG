//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

// class Solution{   
// public:
//     int countNumbers(int n) {
//         int i=1,c=0;
//         for(int i=1;i<=n;i++)
//         {
//             while(i>0)
//             {
//                 int rem=i%10;
//                 i/=10;
//                 if(rem>=1 && rem<=5)
//                 c++;
//                 else
//                 break;
//             }
//         }
//         return c;
//     }
// };



class Solution{   
public:
    int countNumbers(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){
            int num=i;
            while(num)
            {
                int last=num%10;
                if(!(last>=1&&last<=5)){
                    break;
                }
                num/=10;
                if(num==0)
                    cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countNumbers(n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends
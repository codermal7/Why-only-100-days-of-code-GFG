//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        // vector<vector<int>> ans;
        // sort(intervals.begin(),intervals.end());
        // int n=intervals.size();
        // for(int i=0;i<n;i++)
        // {
        //     if(ans.empty() || intervals[i][0]>ans.back()[1])
        //     ans.push_back(intervals[i]);
        //     else
        //     {
        //         ans.back()[1]=max(ans.back()[1],intervals[i][1]);
        //     }
        // }
        // return ans;
        sort(intervals.begin(),arr.end());
         int i=1;
         while(i<arr.size()){
             if(arr[i][0]<=arr[i-1][1]){
                 arr[i-1][1]=max(arr[i-1][1],arr[i][1]);
                 arr.erase(arr.begin()+i);
             }
             else{
                 i++;
             }
         }
         return arr;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends
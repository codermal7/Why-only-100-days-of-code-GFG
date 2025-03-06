//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//User function template for C++
class Solution{
public:	
	int mergeAndCount(int arr[], 
	vector<int>& temp, int left, int mid, int right) 
	{
        int i = left, j = mid + 1, k = left;
        int swaps = 0;
    
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                swaps += (mid - i + 1); // Count swaps
            }
        }
    
        while (i <= mid) temp[k++] = arr[i++];
        while (j <= right) temp[k++] = arr[j++];
    
        for (i = left; i <= right; i++) arr[i] = temp[i];
    
        return swaps;
    }

    int mergeSortAndCount(int arr[], 
    vector<int>& temp, int left, int right) {
        if (left >= right) return 0;
    
        int mid = left + (right - left) / 2;
        int swaps = 0;
    
        swaps += mergeSortAndCount(arr, temp, left, mid);
        swaps += mergeSortAndCount(arr, temp, mid + 1, right);
        swaps += mergeAndCount(arr, temp, left, mid, right);
    
        return swaps;
    }
		
	int countSwaps(int arr[], int N)
	{
	    vector<int> temp(N);
        return mergeSortAndCount(arr, temp, 0, N - 1);
	}
};


//{ Driver Code Starts.

int main() 
{
   
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countSwaps(arr, n);

        cout << "\n";
    
cout << "~" << "\n";
}

    return 0;
}
// } Driver Code Ends
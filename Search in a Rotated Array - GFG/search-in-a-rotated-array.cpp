//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int arr[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        int low = l;
    int high = h;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;

        // If arr[0] <= arr[mid], then the first half is sorted
        if (arr[low] <= arr[mid])
        {
            // If key is in the first half, search in that half
            if (key >= arr[low] && key <= arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }

        // If arr[0] > arr[mid], then the second half is sorted
        else
        {
            // If key is in the second half, search in that half
            if (key >= arr[mid] && key <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
        //complete the function here
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        sort(arr.begin(),arr.end());
        vector<int> ans;
        
        int missing=INT_MAX;
        int repeating;
        
        int count=1;
        for(int i=0;i<n-1;i++){
           
            if(arr[i]==arr[i+1]){
                repeating=arr[i];
                break;
            }
            
        }
        
        for(int i=0;i<n;i++){
            
            if(arr[i]==arr[i+1]){
                continue;
            }
            
            if(arr[i]!=count){
                missing=count;
            }
            else{
                count++;
            }
        }
        
        if(missing==INT_MAX){
            missing=n;
        }
        
        ans.push_back(repeating);
        ans.push_back(missing);
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
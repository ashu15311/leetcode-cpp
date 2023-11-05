//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
       int missing=-1,repeating=-1;
       vector<int>freq(n,0);
       
       for(int i=0;i<n;i++){
           freq[arr[i]-1]++;
       }
       
       for(int i=0;i<n;i++){
           if(freq[i]==0)
           missing=i+1;
           if(freq[i]==2)
           repeating=i+1;
       }
       return{repeating,missing};
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
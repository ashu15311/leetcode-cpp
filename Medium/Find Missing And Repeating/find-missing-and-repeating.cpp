//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        //Optimal code
        int missing=-1,repeating=-1;
        
        //decrease element
        for(int i=0;i<n;i++){
            arr[i]--;
        }
        
        //now the elements in the array ranges from 0 to n-1 
        //and the index of array too ranges from 0 to n-1
        //so we will store each element occurence in its repective index
        for(int i=0;i<n;i++){
            arr[arr[i]%n]+=n;
        }
        
        //to check the occurence stored in the array within the original no
        for(int i=0;i<n;i++){
            if(arr[i]/n==0){
               missing=i+1; 
            }
            else if(arr[i]/n==2){
                repeating=i+1;
            }
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
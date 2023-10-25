//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M>N)
            return -1;
        
        int s=0,e=0,mid,ans;
        for(int i=0;i<N;i++){
            s=max(s,A[i]);
            e+=A[i];
        }
        
        while(s<=e){
            mid=s+(e-s)/2;
            int pages=0,count=1;
            for(int i=0;i<N;i++){
                pages+=A[i];
                if(pages>mid){
                    count++;
                     pages=A[i];
                }
            }
            
            if(count>M)
                s=mid+1;
            else{
                ans=mid;
                e=mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
class Solution {
public:
    int mySqrt(int x) {
        // Using Binary Search
        int s=0,e=x,ans;
        while(s<=e){
            long long int mid=s+(e-s)/2;
            if(mid*mid==x){
                ans=mid;
                break;
            }
            
            else if(mid*mid>x)
            e=mid-1;
            
            else{
            ans=mid;
            s=mid+1;
            }
        }
        return ans;
    }
};
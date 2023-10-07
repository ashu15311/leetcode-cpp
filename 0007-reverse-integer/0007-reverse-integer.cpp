class Solution {
public:
    int reverse(int n) {
        int ans=0,rem;
        while(n){
            rem=n%10;
            n=n/10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return 0;
            }
            ans=ans*10+rem;
        }
        return ans;
        
    }
};
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int s=0,e=0,mid,ans;
        int n=weights.size();
        for(int i=0;i<n;i++){
            s=max(s,weights[i]);
            e+=weights[i];
        }

        while(s<=e){
            mid=s+(e-s)/2;

            int load=0,count=1;
            for(int i=0;i<n;i++){
                if(load+weights[i]>mid){
                    count++;
                    load=weights[i];
                }
                else
                    load+=weights[i];
            }

            if(count<=days){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};
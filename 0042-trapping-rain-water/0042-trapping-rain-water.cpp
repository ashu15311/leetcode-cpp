class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
       int lmax=0;
       int rmax=n-1;
       int lpos=1;
       int rpos=n-2;
       int water=0;

       while(lpos<=rpos){
       //if current block is greater than previous then 
       //store hi nahi hoga      
           if(height[lpos]>=height[lmax]){
               lmax=lpos;
               lpos++;
           }
           else if(height[rpos]>=height[rmax]){
               rmax=rpos;
               rpos--;
           }
           else if(height[lmax]<height[rmax] && height[lpos]<height[lmax]){
                    water+=height[lmax]-height[lpos];
                    lpos++;
           }
           else{
               water+=height[rmax]-height[rpos];
               rpos--;
           }
       } 
       return water;
    }
};
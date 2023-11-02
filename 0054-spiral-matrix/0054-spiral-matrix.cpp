class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size(),col=matrix[0].size();
        int t=0,r=col-1,b=row-1,l=0;

        while(t<=b && l<=r){
            //top
            for(int i=l;i<=r;i++){
                ans.push_back(matrix[t][i]);
                
            }t++;
            //right
            for(int i=t;i<=b;i++){
                ans.push_back(matrix[i][r]);
                
            }r--;
            //bottom
            if(t<=b){
                for(int i=r;i>=l;i--){
                ans.push_back(matrix[b][i]);
                
                }b--;
            }
            
            //left
            if(l<=r){
                for(int i=b;i>=t;i--){
                ans.push_back(matrix[i][l]);
                
                }l++;
            }
            
        }
        return ans;
    }
};
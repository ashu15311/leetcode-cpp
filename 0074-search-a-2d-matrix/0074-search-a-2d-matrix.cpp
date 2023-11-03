class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int start=0,end=(n*m)-1;
        int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            int i=mid/m,j=mid%m;

            //check if equal
            if(matrix[i][j]==target){
                return true;
            }

            //check right
            else if(matrix[i][j]<target){
                start=mid+1;
            }

            //check left
            else{
                end=mid-1;
            }
        }
        return false;
    }
};
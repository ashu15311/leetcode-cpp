class Solution {
public:
    int search(vector<int>& arr, int target) {
        int s=0,e=arr.size()-1;

        while(s<=e){
            int mid=s+(e-s)/2;

            if(arr[mid]==target){
                return mid;
            }

            else if(arr[mid]>=arr[0]){
                if(target>=arr[s] && target<arr[mid]){
                    e=mid-1;
                }
                else
                    s=mid+1;
            }

            else{
                if(target>=arr[mid] && target<=arr[e]){
                    s=mid+1;
                }
                else
                    e=mid-1;
            }
        }
        return -1;
    }
};
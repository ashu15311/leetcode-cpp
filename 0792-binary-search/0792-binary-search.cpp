class Solution {
public:
    int search(vector<int>& arr, int key) {
        int n=arr.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]<key){
                s=mid+1;
            }
            else
            e=mid-1;
        }

        return -1;
        
    }
};
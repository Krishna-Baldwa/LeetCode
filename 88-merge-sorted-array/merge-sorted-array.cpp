class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        vector<int> arr(n+m);
        int i=0;
        int k=0,j=0;
        while(i<n+m && j<m && k<n){
            
            if(nums1[j]<=nums2[k]){
                arr[i] = nums1[j];
                i++;
                j++;
                
            }
            else{
                arr[i] = nums2[k];
                k++;
                i++;
                
            }
        }

        while(j<m){
            arr[i] = nums1[j];
            j++;
            i++;

        }
        while(k<n){
            arr[i] = nums2[k];
            k++;
            i++;

        }
        for(int x=0; x<n+m; x++){
        nums1[x] = arr[x];
        }
    }
};
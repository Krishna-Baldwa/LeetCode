class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0 || nums.size()==1 ) return nums.size();
        int j=1,k=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]) j++;
            else j=1;
            if(j<=2){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
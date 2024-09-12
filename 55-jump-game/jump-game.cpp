class Solution {
public:
    bool canJump(vector<int>& nums) {
        int gap = 1;
        bool result;
        for(int i=nums.size()-2; i>=0; i--){
            if(nums[i]>=gap){
                gap = 1;
                result = 1;
                continue;
            }
            else{
                gap++;
                result = 0;
            }
        }
        return result;
    }
};
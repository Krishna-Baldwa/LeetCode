class Solution {
public:
    int jump(vector<int>& nums) {
        int goal = nums.size()-1;
        int step = 0;

        while(goal>0){
            int farthest = 0;
            for(int i = goal-1; i>=0; i--){
                if(i+nums[i] >= goal){
                    farthest = i;
                }
            }
            goal = farthest;
            step++;
        }
        return step;
    }
};
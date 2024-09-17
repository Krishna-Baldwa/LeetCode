class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int start=0;
        int total = 0 ;
        int tank = 0;
        for(int i=0; i<n; i++){
            total = total + gas[i] - cost[i];
            tank = tank + gas[i] - cost[i];
            if(tank<0){
                tank = 0;
                start = (i+1)%n;
            }
        }
        return (total<0)?-1:start;
    }
};
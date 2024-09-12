class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int h=0;
        int n= citations.size();
        for(int i=0;i<citations.size();i++){
            if(citations[i]>=citations.size()-i){
                h= n-i;
                break;
            }

        }
        return h;
    }
};
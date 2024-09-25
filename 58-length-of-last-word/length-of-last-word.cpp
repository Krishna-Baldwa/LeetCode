class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i=n-1;
        for(i=n-1;i>=0;i--){
            if(s[i] != 32) break;
        }
        int j=i;
        int count =0;
        for(i=j;i>=0;i--){
            if(s[i] != 32) count++;
            else break;
        }
        return count;
    }
};
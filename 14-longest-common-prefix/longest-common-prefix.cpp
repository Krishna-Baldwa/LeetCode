class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string prefix = strs[0];
        int n = strs.size();
        for(int i=0;i<n;i++){
            while(strs[i].find(prefix) != 0){
                prefix = prefix.substr(0, prefix.length()-1);
            } 
            if(prefix.size() == 0) break;
        }
        return prefix;
    }
};
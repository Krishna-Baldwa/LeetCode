class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows>=s.length()) return s;
        vector<vector<char>> rows(numRows);
        int d=1;
        int idx=0;
        for(char c : s){
            rows[idx].push_back(c);
            if(idx == 0){
                d = 1;
            }else if(idx == numRows - 1){
                d = -1;
            }
            idx += d;
        }
        string ans;
        for(const auto&row : rows){
            for(char c : row){
                ans += c;
            }
        }
        return ans;


    }
};
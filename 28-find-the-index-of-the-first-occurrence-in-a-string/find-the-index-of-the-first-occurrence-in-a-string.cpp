class Solution {
public:
    int strStr(string haystack, string needle) {
        // int x = haystack.find(needle);
        // return x;
        int n = needle.length();
        int h = haystack.length();
        if(n>h) return -1;
        int j=0;
        for(int i=0;i<h;i++){
            if(haystack[i] == needle[j]){
                if(j==n-1) return i-j;
                j++;
                continue;
            }
            if(j!=0) i=i-j;
            j=0;
            
        }
        return -1;
    }
};
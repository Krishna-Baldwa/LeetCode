class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        int count = 0;
        
        // Start from the end of the string
        for (int i = n - 1; i >= 0; i--) {
            // Count characters that are not space
            if (!isspace(s[i])) {
                count++; // Count the length of the current word
            } else if (count > 0) {
                // When we find a space after a word
                ans += s.substr(i + 1, count); // Add the current word
                ans += " "; // Add a space after the word
                count = 0; // Reset count for the next word
            }
        }

        // Add the last word if any
        if (count > 0) {
            ans += s.substr(0, count); // Handle the first word if present
        }

        // Trim any extra spaces at the end
        if (!ans.empty() && ans.back() == ' ') {
            ans.pop_back(); // Remove the last space if it exists
        }

        return ans;
    }
};

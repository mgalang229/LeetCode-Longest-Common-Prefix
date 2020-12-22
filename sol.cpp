class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) {
            return "";
        }
        // in every loop, we'll need to check if the character of first string matches the characters of the other strings
        // the loop will run until either i is greater than or equal to the size of vector 's' or s[i] is not equal to the 
        // character being compared from the first string in the vector.
        // the index 'i' is like an advance checker if the next character matches with all the string
        // if it doesn't match, the string that will be taken is until the size of string that matches - 1 since the current 'i' cannot be taken
        for (int i = 0; ; i++) {
            for (auto &s : strs) {
                if (i >= (int) s.size() || s[i] != strs[0][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return "";
    }
};

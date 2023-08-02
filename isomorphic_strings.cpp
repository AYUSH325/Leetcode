class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> isomorph;
        int itr = 0;
        if (s.length() != t.length()) {
            return false;
        }
        while (itr < s.length()) {
            // bool found = false;
            for (auto i: isomorph) {
                if ((i.first == s[itr]) && (i.second != t[itr])) {
                    return false;
                }
                if ((i.second == t[itr]) && (i.first != s[itr])) {
                    return false;
                }
            }
            isomorph[s[itr]] = t[itr];
            itr++;
        }
        return true;
    }
};
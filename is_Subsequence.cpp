class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.length() > t.length()) {
            return false;
        }
        int s_curr = 0;
        int t_traverse = 0;
        while ((t_traverse < t.length()) && (s_curr < s.length())) {
            if (s[s_curr] == t[t_traverse]) {
                s_curr++;
                t_traverse++;
            } else if (t[t_traverse] != s[s_curr]) {
                if (t_traverse == t.length() - 1) {
                    return false;
                }
                t_traverse++;
            }
        }

        //Have not finished iterating through all of s
        if (s_curr != s.length()) {
            return false;
        }
        return true;
    }
};
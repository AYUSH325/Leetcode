using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count_lword = 0;
        int str_len = s.length();
        int lw_index = 0;
        for (int i = 1; i < str_len; i++) {
            if ((s[i - 1] == ' ') && (s[i] != ' ')) {
                lw_index = i;
            }
        }
        while ((s[lw_index] != ' ') && (lw_index < str_len)) {
            count_lword++;
            lw_index++;
        }
        
        return count_lword;
    }
};
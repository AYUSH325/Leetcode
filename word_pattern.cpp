using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> match;
        int s_traverse = 0;
        string word = "";
        while (s_traverse < s.length()) {
            if (s[s_traverse] == ' '){
                match.push_back(word);
                word = "";
            } else {
                word += s[s_traverse];
            }
            s_traverse++;
        }
        match.push_back(word);
        if (pattern.length() != match.size()) {
            return false;
        }
        unordered_map <char, string> word_pattern;
        for (int i = 0; i < pattern.length(); ++i) {
            for (auto itr: word_pattern) {
                if ((itr.first == pattern[i]) && (itr.second != match[i])) {
                    return false;
                }
                if ((itr.second ==  match[i]) && (itr.first != pattern[i])) {
                    return false;
                }
            }
            word_pattern[pattern[i]] = match[i];
        }
        return true;
    }
    
};
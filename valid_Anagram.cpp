using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map <char, int> count_anagram;
        for (auto i: s) {
            count_anagram[i]++;
        }

        for (auto i: t) {
            count_anagram[i]--;
        }

        for (auto i: count_anagram) {
            if (i.second != 0){
                return false;
            }
        }
        return true;
    }
};